#include <iostream>

using namespace std;

int main()
{
    long long t,q;
    cin>>t>>q;
    string s;
    cin>>s;
    long long bot,top,maxx=0;
    long long sum[t+5]={0};
    for(int i=0;i<t-1;i++){
        if(s[i]==s[i+1]){
            maxx++;
        }
        sum[i]=maxx;
        //cout<<maxx<<" ";
    }
    for(long long i=0;i<q;i++){
        cin>>bot>>top;
        if(bot>=top){
            cout<<0<<endl;
        }else if(bot<=1){
            cout<<sum[top-2]<<endl;
        }else{
            cout<<sum[top-2]-sum[bot-2]<<endl;
        }
        //cout<<sum[top-2]<<" "<<sum[bot-2]<<endl;
    }
    return 0;
}
