#include <iostream>

using namespace std;

int f(int n){
    if(n<=5){
        return 1;
    }
    return f(n-2)*5;
}

int main()
{
    int n;
    cin>>n;
    cout<<f(n);
    return 0;
}
