#include <iostream>

using namespace std;

int n;
string s;
char nums[10]={'1','2','3','4','5','6','7','8','9','0'};
char abc[52]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m','Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};

string determinar(){
    if(n<12){
        return "INSEGURO";
    }
    bool a=false,b=false;
    for(int i=0;i<n;i++){
        if(i<n-1 && s[i]==s[i+1]){
            return "INSEGURO";
        }
        if(a==false){
            for(int j=0;j<10;j++){
                if(s[i]==nums[j]){
                    a=true;
                    break;
                }
            }
        }
        if(b==false){
            for(int j=0;j<52;j++){
                if(s[i]==abc[j]){
                    b=true;
                    break;
                }
            }
        }
    }
    if(a==true && b==true){
        return "SEGURO";
    }else{
        return "INSEGURO";
    }
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    cin>>n>>s;
    cout<<determinar();
    return 0;
}
