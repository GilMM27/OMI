#include <iostream>

using namespace std;

//funaci�n que recibe un n�mero y dependiendo de ese n�mero regresa la convinaci�n de strings necesaria
string roman_digit(int n, string one, string five, string ten){
    if(n==9){
        return ten + one;
    } else if(n==8){
        return five + one + one + one;
    } else if(n==7){
        return five + one + one;
    } else if(n==6){
        return five + one;
    } else if(n==5){
        return five;
    } else if(n==4){
        return one + five;
    } else if(n==3){
        return one + one + one;
    } else if(n==2){
        return one + one;
    } else if(n==1){
        return one;
    } else {
        return "";
    }
}

int main()
{
    int n;
    cin>>n;
    //se llama la funci�n para conseguir las unidades en n�meros romanos y se divide entre 10 para pasar a la siguiente unidad
    string unidades = roman_digit(n%10,"I","V","X");
    n=n/10;
    //se llama la funci�n para conseguir las decimas en n�meros romanos y se divide entre 10 para pasar a la siguiente unidad
    string decimas = roman_digit(n%10,"X","L","C");
    n=n/10;
    //se llama la funci�n para conseguir las centesimas en n�meros romanos
    string centecimas = roman_digit(n%10,"C","D","M");
    //se imprime en orden el n�mero romano
    cout<<centecimas<<decimas<<unidades;

    return 0;
}
