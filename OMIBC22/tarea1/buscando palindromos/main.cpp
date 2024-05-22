#include <iostream>
#include <string>

using namespace std;

int main()
{
    string frase;
    getline(cin, frase);
    int top=frase.length()-1;
    bool check=true;
    for(int i=0;i<frase.length()/2;i++){
        if(frase[i]==' '){
            i++;
        }
        if(frase[top]==' '){
            top--;
        }
        if(frase[i]!=frase[top]){
            check=false;
            cout<<"Intenta con otra";
            break;
        }
        top--;
    }
    if(check==true){
        cout<<"PALINDROMA!";
    }
    return 0;
}
