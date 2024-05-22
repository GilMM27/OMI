#include <iostream>

using namespace std;

int main()
{
    int x,y,z,apoyo;
    cout<<"Largo del rectangulo: ";
    cin>>x;
    cout<<"Alto del rectangulo: ";
    cin>>y;
    cout<<"Datos del rectangulo ('o' para casillas vacillas y 'x' para llenas: ";

    string n;
    string grid[x][y];
    string gridapoyo[x][y];
    //ingrsar datos de que casillas contienen celulas
    for(int i=0,j=0;j<y;i=i){
        if(i%x==0 && i!=0){
            j++;
            i=0;
        } else {
            cin>>n;
            grid[j][i]=n;
            i++;
        }
    }

    cout<<endl<<"Cantidad de generaciones: ";
    cin>>z;
    //loop principal que se repite el numero de las generaciones
    for(int g=0;g<z;g++){
        //igualar el arreglo de apoyo a el arreglo original
        for(int i=0,j=0;j<y;i=i){
            if(i%x==0 && i!=0){
                j++;
                i=0;
            } else {
                gridapoyo[j][i]=grid[j][i];
                i++;
            }
        }
        //añadir celulas a casillas con 3 vecinos
        for(int i=0,j=0;j<y;i=i){
        if(i%x==0 && i!=0){
            j++;
            i=0;
        } else {
            if(gridapoyo[j][i]=="o"){
                apoyo=0;
                if(j!=0){
                if(i!=0){
                if(gridapoyo[j-1][i-1]=="x"){
                    apoyo++;
                }} if(gridapoyo[j-1][i]=="x"){
                    apoyo++;
                }
                if(i+2<=x){
                if(gridapoyo[j-1][i+1]=="x"){
                    apoyo++;
                }}}
                if(i!=0){
                if(gridapoyo[j][i-1]=="x"){
                    apoyo++;
                }}
                if(i+2<=x){
                if(gridapoyo[j][i+1]=="x"){
                    apoyo++;
                }}
                if(j!=y-1){
                if(i!=0){
                if(gridapoyo[j+1][i-1]=="x"){
                    apoyo++;
                }} if(gridapoyo[j+1][i]=="x"){
                    apoyo++;
                }
                if(i+2<=x){
                if(gridapoyo[j+1][i+1]=="x"){
                    apoyo++;
                }}}
                if(apoyo==3){
                    grid[j][i]="x";
                }
            }
            i++;
        }
        }
        //checar si las celulas mueren por tener uno o menos de un vecino o cuatro o más vecinos y eliminarlas
        for(int i=0,j=0;j<y;i=i){
        if(i%x==0 && i!=0){
            j++;
            i=0;
        } else {
            if(gridapoyo[j][i]=="x"){
                apoyo=0;
                if(gridapoyo[j-1][i-1]=="x"){
                    apoyo++;
                } if(gridapoyo[j-1][i]=="x"){
                    apoyo++;
                } if(gridapoyo[j-1][i+1]=="x"){
                    apoyo++;
                } if(gridapoyo[j][i-1]=="x"){
                    apoyo++;
                } if(gridapoyo[j][i+1]=="x"){
                    apoyo++;
                } if(gridapoyo[j+1][i-1]=="x"){
                    apoyo++;
                } if(gridapoyo[j+1][i]=="x"){
                    apoyo++;
                } if(gridapoyo[j+1][i+1]=="x"){
                    apoyo++;
                }
                if(apoyo>=4 || apoyo<=1){
                    grid[j][i]="o";
                }
            }
            i++;
        }
        }
        //imprimir la nueva generación
        cout<<endl<<"Generacion numero "<<g+1<<endl;
        for(int i=0,j=0;j<y;i=i){
            if(i%x==0 && i!=0){
                j++;
                i=0;
                cout<<endl;
            } else {
                cout<<grid[j][i]<<" ";
                i++;
            }
        }
    }
    return 0;
}
