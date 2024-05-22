#include <iostream>

using namespace std;

long long x;
int a[100000000];

int ultimoDigitoFibonacci(long long n){
    a[n]=(a[n-1]+a[n-2])%10;
    cout<<a[n];
    if(n<x){
        return ultimoDigitoFibonacci(n+1);
    }
    return a[n];
}

int main()
{
    cin>>x;
    if(x<=1){
        cout<<1;
    }else{
    a[0]=1;
    a[1]=1;
        cout<<ultimoDigitoFibonacci(2);
    }
    return 0;
}
//235831459437077415617853819099875279651673033695493257291011235831459437077415617853819099875279651673033695493257291011
