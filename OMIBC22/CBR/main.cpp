#include <iostream>

using namespace std;

int cont=0;

int coeficiente(int n,int k){
    cont++;
    if(k==0 || n==k){
        return 1;
    }
    return coeficiente(n-1,k)+coeficiente(n-1,k-1);
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<coeficiente(n,k)<<" "<<cont;
    return 0;
}
