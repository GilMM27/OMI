#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    return 0;
}
