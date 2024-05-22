#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long input;
    cin>>input;
    long long a;
    a=input;
    long long r=0;
    for(long long i=0;i<n-1;i++){
        cin>>input;
        if(input<a){
            r++;
        }
    }
    cout<<r;
    return 0;
}
