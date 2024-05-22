#include <iostream>

using namespace std;

int main()
{
    long long n,resultado=0;
    cin>>n;
    for(long long i=1;i<=n;i++){
        cout<<i<<endl;
        resultado=resultado+i;
    }
    cout<<resultado;
    return 0;
}
