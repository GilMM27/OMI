#include <iostream>

using namespace std;

int main()
{
    //62001
    //
    int n,m;
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(s[i][j]=='.'){
                s[i][j]='F';
                j++;
            }
        }
        i++;
    }
    cout<<n<<" "<<m<<endl;
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    return 0;
}
