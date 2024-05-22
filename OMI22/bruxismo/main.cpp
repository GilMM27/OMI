#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    long long n,t;
    cin>>n>>t;
    long long d[n],a[n],b[n],m[n],hp[n]={0},out[n]={0};
    for(long long i=0;i<n;i++){
        cin>>d[i]>>a[i]>>b[i]>>m[i];
    }
    long long input;
    for(long long i=0;i<t;i++){
            cin>>input;
        for(long long j=0;j<n;j++){
            if(out[j]==0){
                if(input>d[j]){
                    hp[j]+=a[j];
                }else{
                    hp[j]-=b[j];
                }
                if(hp[j]<0){
                    hp[j]=0;
                }
                if(hp[j]>=m[j]){
                    out[j]=1;
                }
            }
        }
    }
    for(long long i=0;i<n;i++){
        cout<<out[i]<<" ";
    }
    return 0;
}
