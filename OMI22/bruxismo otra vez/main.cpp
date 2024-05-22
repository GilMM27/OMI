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
    long long input[n];
    for(long long i=0;i<t;i++){
        cin>>input[i];
    }
    long long da,cu,maxx,dacu;
    for(long long i=0;i<n;i++){
        maxx=0;
        da=0;
        cu=0;
        for(long long j=0;j<t;j++){
            if(input[j]>d[i]){
                da+=a[i];
            }else{
                cu+=b[i];
            }
            dacu=da-cu;
            if(dacu<0){
                cu=0;
                da=0;
            }else if(dacu>maxx){
                maxx=dacu;
                //mda=da;
                //mcu=cu;
                //guardar da y cu max
            }
        }
        //sacar daño en el max
        //cout<<mda*a[i]-mcu*b[i]<<"a ";
        //cout<<maxx<<"A ";
        if(maxx>=m[i]){
            cout<<1<<" ";
        }else{
            cout<<0<<" ";
        }
    }
    return 0;
}
