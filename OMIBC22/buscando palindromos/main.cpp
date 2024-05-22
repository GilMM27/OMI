#include <iostream>

using namespace std;

string check(string s){
    int bot=0, top=s.length()-1;
    while(bot<top){
        if(s[bot]==' '){
            bot++;
        }
        if(s[top]==' '){
            top--;
        }
        if(s[bot]!=s[top]){
            return "Intenta con otra";
        }
        bot++;
        top--;
    }
    return "PALINDROMA!";
}

int main()
{
    string input;
    getline(cin,input);
    cout<<check(input);
    return 0;
}
