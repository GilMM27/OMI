#include <iostream>

using namespace std;

string check(string p){
    for(int i=0;i<p.length()/2;i++){
        if(p[i]!=p[p.length()-i-1]){
            return "No";
        }
    }
    return "Si";
}

int main()
{
    string p;
    cin>>p;
    cout<<check(p);
    return 0;
}
