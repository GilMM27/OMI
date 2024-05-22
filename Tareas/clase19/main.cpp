#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n;
    a=n/1000;
    n=n-a*1000;
    b=n/100;
    n=n-b*100;
    c=n/10;
    n=n-c*10;
    cout<<a<<c<<b<<n;

    return 0;
}
