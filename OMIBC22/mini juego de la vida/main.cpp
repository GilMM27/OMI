#include <iostream>

using namespace std;

int c,n;

string solve(){
    if(n>=0 && n<=8){
        if(c==0 && n!=3){
            return "0";
        }else if(c==0 && n==3){
            return "1";
        }else if(n<2 || n>3){
            return "0";
        }else{
            return "1";
        }
    }
    return "ERROR";
}

int main()
{
    cin>>c>>n;
    cout<<solve();
    return 0;
}
