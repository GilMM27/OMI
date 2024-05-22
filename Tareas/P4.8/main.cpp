#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

    //declaración de variables que usare en todo el script
    bool gameon = true;
    int amount=100;
    int random;
    string winner;
    bool smartcheck=true;
//función para el turno de la computadora en modo inteligente, encuentra la jugada inteligente posible siguiendo una estrategia y sí no es valida juega al azar
int smartmode(int s){
    if(s==2){
        random=1;
    } else if(s==3 || s==7 || s==15 || s==31 || s==63){
    random = rand()%s/2+1;
    } else {
        for(int i=1;smartcheck==true;i++){
            if(s-i==3 || s-i==7 || s-i==15 || s-i==31 || s-i==63){
                smartcheck=false;
                random=i;
            }
        }
        smartcheck=true;
    }
    cout<<"The computer takes "<<random<<" marbles"<<endl;
    s=s-random;
    cout<<"The current amount of marbles in the pile is: "<<s<<endl;
    return s;
}
//función para el turno de la computadora en modo estupido, elige una cantidad random valida de canicas a tomar
int stupidmode(int s){
    if(s==3){
        random=1;
    } else {
    random = rand()%s/2+1;
    }
    cout<<"The computer takes "<<random<<" marbles"<<endl;
    s=s-random;
    cout<<"The current amount of marbles in the pile is: "<<s<<endl;
    return s;
}
//función para el turno del jugador, interactua con el jugador para obtener la cantidad de canicas a tomar y checar si es valido
int playermove(int s){
    cout<<"What amount of marbles will you take?"<<endl;
    while(amount>s/2){
        cin>>amount;
        if(amount>s/2){
            cout<<"ERROR Please input a number equal to or below "<<s/2<<endl;
        }
    }
    cout<<"The player takes "<<amount<<" of marbles"<<endl;
    s=s-amount;
    cout<<"The current amount of marbles in the pile is: "<<s<<endl;
    amount=100;
    return s;
}

int main()
{
    //declaración y randomización de variables
    srand(time(0));
    int size = rand()%91+10;
    int decision1 = rand()%2;
    int decision2 = rand()%2;
    //comunica esta información al jugador
    cout<<"The amount of marbles in the pile is: "<<size<<endl;
    if(decision1==0){
        cout<<"Computer starts!"<<endl;
    } else {
        cout<<"Player starts!"<<endl;
    }
    if(decision2==0){
        cout<<"Computer plays on smart mode"<<endl;
    } else {
        cout<<"Computer plays on stupid mode"<<endl;
    }
    //loop del juego cuando la computadora empieza, despues de cada turno checa si el juego ha terminado y en ese caso termina el loop
    while(decision1==0 && gameon==true){
        if(size!=1){
        cout<<" -Computer's turn- "<<endl;
        if(decision2==0 && gameon==true){
            size = smartmode(size);
        } else if (gameon==true){
            size = stupidmode(size);
        }
        } else if (gameon==true){
            gameon=false;
            winner="PLAYER";
        }
        if(size!=1){
        cout<<" -Player's turn- "<<endl;
        size = playermove(size);
        } else if (gameon==true) {
            gameon=false;
            winner="COMPUTER";
        }
    }
    //es un loop parecido al anterior pero cuando el jugador empieza
    while(decision1==1 && gameon==true){
        if(size!=1){
        cout<<" -Player's turn- "<<endl;
        size = playermove(size);
        } else  if (gameon==true){
            gameon=false;
            winner="COMPUTER";
        }
        if(size!=1){
        cout<<" -Computer's turn- "<<endl;
        if(decision2==0 &&gameon==true){
            size = smartmode(size);
        } else if (gameon==true){
            size = stupidmode(size);
        }
        } else  if (gameon==true){
            gameon=false;
            winner="PLAYER";
        }
    }

    //se anuncia el ganador
    cout<<"GAME OVER"<<endl<<"The winner is: "<<winner;

    return 0;
}
