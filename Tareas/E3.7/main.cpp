#include <iostream>

using namespace std;

int main()
{
    //declaración y lectura de variables
    cout<<"Write 3 intergers: ";
    int a,b,c;
    cin>>a>>b>>c;

    //cuando se presenten los casos a<b<c o a>b>c entonces se imprime "en orden" sino "no en orden"
    if(a<=b && b<=c || a>=b && b>=c){
        cout<<"in order";
    } else {
        cout<<"not in order";
    }
    return 0;
}
