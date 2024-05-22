#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    long long n,t;
    cin>>n>>t;
    long long d[n],a[n],b[n],m[n],hp,out;
    for(long long i=0;i<n;i++){
        cin>>d[i]>>a[i]>>b[i]>>m[i];
    }
    long long input[t];
    for(int i=0;i<t;i++){
        cin>>input[i];
    }
    for(long long i=0;i<n;i++){
        hp=0;
        out=0;
        for(long long j=0;j<t;j++){
            if(input[j]>d[i]){
                hp+=a[i];
            }else{
                hp-=b[i];
            }
            if(hp<0){
                hp=0;
            }
            if(hp>=m[i]){
                out=1;
                break;
            }
        }
        cout<<out<<" ";
    }
    return 0;
}
