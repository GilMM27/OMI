#include <iostream>

using namespace std;
//declaro un array de 2 dimensiones para guardar las jugadas, pero primero le asigno el nombre de las coordenadas para orientar al jugador
string grid[3][3]={{"(1,1)","(2,1)","(3,1)"},{"(1,2)","(2,2)","(3,2)"},{"(1,3)","(2,3)","(3,3)"}};
bool gameon=true;
//función para dibujar el tablero
void drawgrid(){
    for(int i=0,j=0;j<3;i=i){
        if(i%3==0 && i!=0){
            j++;
            i=0;
            cout<<endl;
        } else {
            cout<<grid[j][i]<<" ";
            i++;
        }
    }
}
//función que checa si hay 3 símbolos iguales consecutivos
void check(string p,string simbolo){
            if(grid[0][0]==simbolo && grid[1][0]==simbolo && grid[2][0]==simbolo){
                gameon=false;
                cout<<"Player "<<p<<" es el ganador";
            } else if(grid[0][1]==simbolo && grid[1][1]==simbolo && grid[2][1]==simbolo){
                gameon=false;
                cout<<"Player "<<p<<" es el ganador";
            } else if(grid[0][2]==simbolo && grid[1][2]==simbolo && grid[2][2]==simbolo){
                gameon=false;
                cout<<"Player "<<p<<" es el ganador";
            } else if(grid[0][0]==simbolo && grid[0][1]==simbolo && grid[0][2]==simbolo){
                gameon=false;
                cout<<"Player "<<p<<" es el ganador";
            } else if(grid[1][0]==simbolo && grid[1][1]==simbolo && grid[1][2]==simbolo){
                gameon=false;
                cout<<"Player "<<p<<" es el ganador";
            } else if(grid[2][0]==simbolo && grid[2][1]==simbolo && grid[2][2]==simbolo){
                gameon=false;
                cout<<"Player "<<p<<" es el ganador";
            } else if(grid[0][0]==simbolo && grid[1][1]==simbolo && grid[2][2]==simbolo){
                gameon=false;
                cout<<"Player "<<p<<" es el ganador";
            } else if(grid[2][0]==simbolo && grid[1][1]==simbolo && grid[0][2]==simbolo){
                gameon=false;
                cout<<"Player "<<p<<" es el ganador";
            }
}


int main()
{
    cout<<"TIC TAC TOE"<<endl;
    drawgrid();
    //función que asigna el string "-" a todas las posiciones del array
    for(int i=0,j=0;j<3;i=i){
        if(i%3==0 && i!=0){
            j++;
            i=0;
        } else {
            grid[j][i]="-";
            i++;
        }
    }

    int x,y;
    bool check1=true,check2=true;
    //Loop principal del juego entre jugador 1 y jugador 2
    while(gameon==true){
        check2=true;
        //primero empieza el jugador 1
        if(gameon==true){
        cout<<"jugador 1"<<endl;}
        //loop jugador 1
        while(check1==true && gameon==true){
        cout<<"Coordenadas: ";
        cin>>x>>y;
        //se checa si las coordenadas son validas, si lo son se le asigna "O" a la posición elegida y se dibuja el tablero, sino el loop continua
        if(x<1 || x>3 || y<1 || y>3){
            cout<<"Esas coordenadas no estan disponibles, intenta otra vez"<<endl;
        } else if(grid[y-1][x-1]!="X" && grid[y-1][x-1]!="O"){
            grid[y-1][x-1]="O";
            check1=false;
            drawgrid();
        } else {
            cout<<"Esas coordenadas no estan disponibles, intenta otra vez"<<endl;
        }
        }
        //se llama la función de checar si el jugador 1 ganó con su última jugada
        check("1","O");
        check1=true;
        //ahora se repite algo parecido pero para el jugador 2
        if(gameon==true){
        cout<<"jugador 2"<<endl;}
        while(check2==true && gameon==true){
        cout<<"Coordenadas: ";
        cin>>x>>y;
        if(x<1 || x>3 || y<1 || y>3){
            cout<<"Esas coordenadas no estan disponibles, intenta otra vez"<<endl;
        } else if(grid[y-1][x-1]!="X" && grid[y-1][x-1]!="O"){
            grid[y-1][x-1]="X";
            check2=false;
            drawgrid();
        } else {
            cout<<"Esas coordenadas no estan disponibles, intenta otra vez"<<endl;
        }
        }
        check("2","X");
    }

    return 0;
}
