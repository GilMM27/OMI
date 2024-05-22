#include <iostream>

using namespace std;

int main()
{
    int t;
    int arr[16][2];
    cin>>t;
    int n;
    int x;
    int mind[16];
    int maxn[16]={0};
    int index[16];
    long long cont=0;
    long long indexnum=0;
    for(int i=0;i<16;i++){
        mind[i]=10;
    }
    for(int k=0;k<t;k++){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i][0];
            arr[i][1]=0;

            x=arr[i][0];
            while(x>1){
                if(x%2==0){
                    x=x/2;
                    arr[i][1]=arr[i][1]+1;
                }else{
                    break;
                }
            }
            if(arr[i][0]>maxn[k] && arr[i][1]<=mind[k] || arr[i][1]<mind[k]){
                maxn[k]=arr[i][0];
                mind[k]=arr[i][1];
                index[k]=i;
            }
            //cout<<arr[i][0]<<" "<<i<<endl;
        }
        /*for(int i=0;i<n;i++){
            cout<<arr[i][1]<<" ";
        }*/
        //cout<<"SON: "<<maxn[k]<<" "<<mind[k]<<" "<<index[k]<<endl;
        cont=0;
        indexnum=arr[index[k]][0];
        for(int i=0;i<n;i++){
            if(index[k]!=i){
                while(arr[i][1]>0){
                    arr[i][1]=arr[i][1]-1;
                    arr[i][0]=arr[i][0]/2;
                    indexnum=indexnum*2;
                }
                cont+=arr[i][0];
                //cout<<cont<<" ";
            }
        }
        cout<<cont+indexnum<<endl;
    }
    return 0;
}
