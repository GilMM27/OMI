#include <iostream>

using namespace std;

string recursivo(string s,int bot,int top){
    if(s[bot]!=s[top]){
        return "no es palindrome en recursivo";
    }
    if(bot<top){
        return recursivo(s,bot+1,top-1);
    }else{
        return "palindrome en recursivo";
    }
}

int main()
{
    string s;
    cin>>s;
    bool pal=true;
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-i-1]){
            pal=false;
        }
    }
    if(pal==true){
        cout<<"palindrome en iterativo"<<endl;
    }else{
        cout<<"no es palindrome en iterativo"<<endl;
    }
    cout<<recursivo(s,0,s.length()-1);
    return 0;
}
