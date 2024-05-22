#include <iostream>

using namespace std;

int precioDelBoleto(int n){
    if(n==1){
        return 100;
    }
    return precioDelBoleto(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<precioDelBoleto(n);
    return 0;
}
