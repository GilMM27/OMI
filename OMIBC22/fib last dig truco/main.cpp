#include <iostream>

using namespace std;

int main()
{
    long long a[6]={
    2358314594,
    3707741561,
    7853819099,
    8752796516,
    7303369549,
    3257291011};
    long long x;
    cin>>x;
    if(x<=2){
        cout<<1;
    }else{
        x-=3;
        x=x%60;
        long long apoyo=a[x/10];
        x=x%10;
        long long mult=1;
        for(int i=0;i<9-x;i++){
            mult*=10;
        }
        cout<<(apoyo/mult)%10;
        //cout<<x<<" "<<(apoyo/mult)%10<<" "<<apoyo;
    }
    return 0;
}
