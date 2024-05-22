#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a;
    b=a/1000*1000;
    a=a%1000;
    b=b+(a/100*10);
    a=a%100;
    b=b+(a/10*100);
    a=a%10;
    b=b+a;
    cout<<b;
    return 0;
}
