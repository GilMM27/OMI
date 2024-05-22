#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t,n;
    cin>>t>>n;
    string s;
    cin>>s;
    int l;
    string str;
    int out,cont;
    for(int i=0;i<n;i++){
        out=0;
        cont=0;
        cin>>l>>str;
        for(int j=0;j<t;j++){
            if(str[cont]==s[j]){
                cont++;
                if(cont==l){
                    out=1;
                    break;
                }
            }
        }
        cout<<out<<endl;
    }
    return 0;
}
