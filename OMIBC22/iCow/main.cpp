#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n,t;
    cin>>n>>t;
    int a[n+1];
    a[0]=-1;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int mayor,div,res;
    for(int i=0;i<t;i++){
        mayor=0;
        for(int j=1;j<=n;j++){
            if(a[mayor]<a[j]){
                mayor=j;
            }
        }
        cout<<mayor<<endl;
        div=a[mayor]/(n-1);
        res=a[mayor]%(n-1);
        a[mayor]=0;
        for(int j=1;j<=n;j++){
            if(j!=mayor){
                a[j]+=div;
                if(res>0){
                    a[j]+=1;
                    res--;
                }
            }
        }
        //check
        /*for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;*/
    }
    return 0;
}
