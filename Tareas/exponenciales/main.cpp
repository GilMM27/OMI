#include <iostream>
#include <cmath>

using namespace std;

/*long long expo(long long a,long long b){
    if(b>1){
        return a*expo(a,b-1);
    }
    return a;
}*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long a,b;
    cin>>a>>b;
    long long r = (pow(a,b));
    cout<<r%1000007;
    return 0;
}
