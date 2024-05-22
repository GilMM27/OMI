#include <iostream>

using namespace std;

int main()
{
    long long a,b,r=0;
    cin>>a>>b;
    int c=0;

    while(a<=b){
        if(a==b){
    }
    for(long long i=1;i<=a;i++){
        if(a%i==0){
            c++;
        }
        if(c>2){
            break;
        }
    }
    if(c>2){

    }
    else if(a*a<=b && a!=1){
        r++;
    }
    c=0;
    a++;
    }
    cout<<r;

    return 0;
}
