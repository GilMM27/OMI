#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    long long n,t;
    cin>>n>>t;
    long long d,a,b,m[n],hp={0};
    for(long long i=0;i<n;i++){
        cin>>d>>a>>b>>m[i];
    }
    long long input, maxx=0;
    for(long long i=0;i<t;i++){
        cin>>input;
        if(input>d){
            hp+=a;
        }else{
            hp-=b;
        }
        if(hp<0){
            hp=0;
        }
        if(hp>maxx){
            maxx=hp;
        }
    }
    for(int i=0;i<n;i++){
        if(maxx>=m[i]){
            cout<<1<<" ";
        }else{
            cout<<0<<" ";
        }
    }
    return 0;
}
