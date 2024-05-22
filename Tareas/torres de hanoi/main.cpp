#include <iostream>

using namespace std;

int torres(int x){
    int n=2;
    for(int i=1;i<x;i++){
        n=n*2;
    }
    return n-1;
}

int main()
{
    float n;
    cin>>n;
    cout<<torres(n);
    return 0;
}
