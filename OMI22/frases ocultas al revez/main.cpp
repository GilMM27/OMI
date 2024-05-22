#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    long long t,n;
    string s;
    cin>>t>>n;
    long long l[n];
    string str[n];
    cin>>s;
    long long out[n]={0},cont[n]={0};
    for(long long i=0;i<n;i++){
        cin>>l[i]>>str[i];
    }
    sort(str,str+n);
    for(long long i=0;i<n;i++){
        cout<<str[i]<<endl;
    }
    //main loop
    for(long long i=0;i<t;i++){
        for(long long j=0;j<n && s[i]<=str[j][0];j++){
            if(out[j]==0 && s[i]==str[j][0]){
                cont[j]++;
                str[j][0]=str[j][cont[j]];
                if(cont[j]==l[j]){
                    out[j]=1;
                }
            }
        }
        sort(str,str+n);
    }
    for(long long i=0;i<n;i++){
        cout<<out[i]<<endl;
    }
    return 0;
}
