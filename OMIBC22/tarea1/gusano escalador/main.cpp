#include <iostream>

using namespace std;

int main()
{
    int n,u,d;
    cin>>n>>u>>d;
    int altura=0,mins=0;
    while(altura<n){
        altura+=u;
        mins++;
        if(altura>=n){
            break;
        }
        altura-=d;
        mins++;
    }
    cout<<mins;
    return 0;
}
