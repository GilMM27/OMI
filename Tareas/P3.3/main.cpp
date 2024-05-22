#include <iostream>

using namespace std;

int main()
{
    //declaración y lectura de variables
    cout<<"Enter the card notation: ";
    string a,b;
    cin>>a>>b;

    //se checa que es 'a' y dependiendo de eso se imprime algo especifico
    if(a=="A"){
        cout<<"Ace of ";
    } else if(a=="2"){
        cout<<"Two of ";
    } else if(a=="3"){
        cout<<"Three of ";
    } else if(a=="4"){
        cout<<"Four of ";
    } else if(a=="5"){
        cout<<"Five of ";
    } else if(a=="6"){
        cout<<"Six of ";
    } else if(a=="7"){
        cout<<"Seven of ";
    } else if(a=="8"){
        cout<<"Eight of ";
    } else if(a=="9"){
        cout<<"Nine of ";
    } else if(a=="10"){
        cout<<"Ten of ";
    } else if(a=="J"){
        cout<<"Jack of ";
    } else if(a=="Q"){
        cout<<"Queen of ";
    } else if(a=="K"){
        cout<<"King of ";
    }
    //lo mismo pero con 'b'
    if(b=="D"){
        cout<<"Diamonds";
    } else if(b=="H"){
        cout<<"Hearts";
    } else if(b=="S"){
        cout<<"Spades";
    } else if(b=="C"){
        cout<<"Clubs";
    }
    return 0;
}
