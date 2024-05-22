#include <iostream>

using namespace std;

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    //mayor de los primeros 2 inputs
    cout<<max(a,b)<<endl;
    //mayor de los últimos 2 inputs
    cout<<max(b,c)<<endl;
    //mayor de los 3 inputs
    cout<<max(max(a,b),c);
    return 0;
}
