#include <iostream>

using namespace std;

int main()
{
    long long n, m, a, b;
    cin>>n>>m;
    a=n/m;
    b=n%m;
    if(b==0){
        cout<<a;
    } else {
        cout<<a<<" "<<b<<"/"<<m;
    }

    return 0;
}
