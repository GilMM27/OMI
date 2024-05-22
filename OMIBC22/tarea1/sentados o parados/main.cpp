#include <iostream>

using namespace std;

int main()
{
    long long r,s,b;
    cin>>r>>s>>b;
    //aqui se puede reutilizar r o s en vez de utilizar una variable nueva para guardar memoria
    long long capacidad=r*s;
    if(capacidad<b){
        cout<<capacidad<<" "<<b-capacidad;
    }else{
        cout<<b<<" "<<0;
    }
    return 0;
}
