#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int l1,l2,n;
    cin>>l1>>l2;
    //0 libre
    //1 alacran
    int a[l2*l1+3];
    for(int i=0;i<l2*l1;i++){
        a[i]=0;
    }
    cin>>n;
    int input,input2;
    for(int i=0;i<n;i++){
        cin>>input>>input2;
        //cout<<"alacran en "<<(input+((input2-1)*l1))-1<<endl;
        a[(input+((input2-1)*l1))-1]=1;
    }
    int camas=0,check=l1;
    //cout<<check<<" check"<<endl;
    for(int i=0;i<(l2-1)*l1;i++){
        //terminar
        //cout<<i<<" "<<i+1<<" "<<i+l1<<" "<<i+l1+1<<endl;
        if(a[i]==0 && a[i+1]==0 && a[i+l1]==0 && a[i+l1+1]==0){
            camas++;
        } /*else {
            cout<<"no disponible "<<i<<endl;
        }*/
        if(i>=check-2){
            i++;
            check=check+l1;
        }
    }
    cout<<camas;
    return 0;
}
