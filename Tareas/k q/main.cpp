#include <iostream>

using namespace std;

int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    //0 numero
    //1 es cantidad de divisores / divisor (1) o no (0)
    int a[n][2];
    int cont=0;
    for(int i=0;i<n;i++){
        cin>>a[i][0];
        a[i][1]=0;
        for(int j=1;j<=a[i][0]/2;j++){
            if(a[i][0]%j==0){
                a[i][1]++;
            }
            if(a[i][1]>=q-1){
            break;
            }
        }
        if(a[i][1]+1>=q){
            cont++;
            a[i][1]=1;
            //cout<<a[i][1]<<" ";
        } else {
            a[i][1]=0;
            //cout<<a[i][1]<<" ";
        }
    }
    //cout<<endl<<cont<<endl;
    int r=0;
    for(int i=k;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cont=0;
            for(int h=j;h<i+j;h++){
                if(a[h][1]==1){
                    cont++;
                    if(cont>k){
                        break;
                    }
                }
                //cout<<a[h][0]<<" ";
            }
            //cout<<endl;
            if(cont==k){
                r++;
                //cout<<"SI"<<endl;
            }
        }
    }
    cout<<r;
    return 0;
}
