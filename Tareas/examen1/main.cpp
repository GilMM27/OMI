#include <iostream>

using namespace std;

int main()
{
    long long a,b,x=0,r=0;
    cin>>a>>b;
    while(a<=b){
        for(long long i=1;i<=a;i++){
            if(a%i==0){
                x++;
            }
            if(x>3){
                break;
            }
        }
        if(x==3){
            r++;
            cout<<a<<endl;
        }
        a++;
        x=0;
    }
    cout<<r;

    return 0;
}
