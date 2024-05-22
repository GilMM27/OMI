#include <iostream>

using namespace std;

int main()
{
    int n, x=0;
    cin>>n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            x++;
        }
    }
    cout<<x+1;
    return 0;
}
