#include <iostream>

using namespace std;

int main()
{
    //declaración y lectura de variables
    cout<<"Write 4 intergers: ";
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    //statements que prueban que haya 2 pares e imprime "dos pares", sino imprime "no hay dos pares"
    if(a==b && c==d){
        cout<<"two pairs";
    } else if(a==c && b==d){
        cout<<"two pairs";
    } else if(a==d && b==c){
        cout<<"two pairs";
    }  else {
        cout<<"not two pairs";
    }
    return 0;
}
