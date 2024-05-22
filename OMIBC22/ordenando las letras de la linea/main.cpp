#include <iostream>

using namespace std;

int main()
{
    char abc[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int cant[26]={0};
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        for(int j=0;j<26;j++){
            if(s[i]==abc[j]){
                cant[j]++;
                break;
            }
        }
    }
    bool out;
    for(int i=0;i<s.length();i++){
        out=false;
        for(int j=0;j<26;j++){
            if(s[i]==abc[j]){
                for(int it=0;it<26;it++){
                    if(cant[it]>0){
                        cout<<abc[it];
                        cant[it]--;
                        out=true;
                        break;
                    }
                }
                break;
            }
        }
        if(out==false){
            cout<<s[i];
        }
    }
    return 0;
}
