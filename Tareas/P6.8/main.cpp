#include <iostream>

using namespace std;

int main()
{
    cout<<"Los asientos disponibles y sus precios son los siguientes:"<<endl;
    //Declaro un array de 2 dimensiones donde guardo todos los precios
    int rows[9][10]={
        {10, 10, 10, 10, 10, 10, 10, 10, 10, 10},
        {10, 10, 10, 10, 10, 10, 10, 10, 10, 10},
        {10, 10, 10, 10, 10, 10, 10, 10, 10, 10},
        {10, 10, 20, 20, 20, 20, 20, 20, 10, 10},
        {10, 10, 20, 20, 20, 20, 20, 20, 10, 10},
        {10, 10, 20, 20, 20, 20, 20, 20, 10, 10},
        {20, 20, 30, 30, 40, 40, 30, 30, 20, 20},
        {20, 30, 30, 40, 50, 50, 40, 30, 30, 20},
        {30, 40, 50, 50, 50, 50, 50, 50, 40, 30}
    };
    //Loop para imprimir los asientos
    for(int i=0,j=0;j<9;i=i){
        if(i%10==0 && i!=0){
            cout<<endl;
            j++;
            i=0;
        } else {
            cout<<rows[j][i]<<" ";
            i++;
        }
    }
    cout<<endl;

    bool check=false,check2=false,check3=false;
    int n, f, c, p;
    //Declaro un nuevo array y los lleno de ceros, para que cuando se compre un asiento se cambie a 1
    //para saber que el asiento esta comprado
    int compras[9][10];
    for(int i=0,j=0;j<9;i=i){
        if(i%10==0 && i!=0){
            j++;
            i=0;
        } else {
            compras[j][i]=0;
            i++;
        }
    }

    while(check2==false){
    cout<<endl<<"Introduzca 0 para especificar asiento, 1 para especificar precio y 2 para terminar proceso: ";
    cin>>n;

    if(n==0){
        //Loop para especificar lugar y checar si esta vacío, sí esta ocupado se reinicia el loop
        while(check==false){
            cout<<"En que fila gustaria su asiento? ";
            cin>>f;
            cout<<"En que columna gustaria su asiento? ";
            cin>>c;
            if(compras[f-1][c-1]==1 || f>9 || c>10 || f<1 || c<1 || rows[f-1][c-1]==0){
                cout<<"El asiento esta ocupado, intente otra vez"<<endl;
            } else {
                check=true;
                compras[f-1][c-1]=1;
            }
        }
        check=false;
        //Loop para imprimir los nuevos asientos
        for(int i=0,j=0;j<9;i=i){
            if(i%10==0 && i!=0){
                cout<<endl;
                j++;
                i=0;
            } else if(compras[j][i]==1){
                rows[j][i]=0;
                cout<<rows[j][i]<<"0 ";
                i++;
            } else if(rows[j][i]==0){
                cout<<rows[j][i]<<"0 ";
                i++;
            } else {
                cout<<rows[j][i]<<" ";
                i++;
            }
        }
        cout<<endl;

    } else if(n==1){
        while(check==false){
            //Loop para especificar un precio y buscar un asiento con ese precio, si no hay el loop se reinicia
            cout<<"Que precio esta buscando? ";
            cin>>p;
            f=20;
            c=20;
            for(int i=0,j=0;j<9;i=i){
                if(i%10==0 && i!=0){
                    j++;
                    i=0;
                } else {
                    if(rows[j][i]==p && check3==false && p!=0){
                        f=j;
                        c=i;
                        check3=true;
                        check=true;
                    }
                    i++;
                }
            }
            if(f==20 && c==20){
                cout<<"No hay asientos con ese precio disponibles, intente otra vez"<<endl;
            }
        }
        check=false;
        check3=false;
        //Loop para imprimir los nuevos asientos
        for(int i=0,j=0;j<9;i=i){
            if(i%10==0 && i!=0){
                cout<<endl;
                j++;
                i=0;
            } else if(f==j && c==i){
                rows[j][i]=0;
                cout<<rows[j][i]<<"0 ";
                i++;
            } else if(rows[j][i]==0){
                cout<<rows[j][i]<<"0 ";
                i++;
            } else {
                cout<<rows[j][i]<<" ";
                i++;
            }
        }
        cout<<endl;
    } else {
        //Cuando se introduzca 2 o un cualquier otro numero que no sea 0 o 1 se terminara el Loop
        check2=true;
    }
    }
    cout<<endl<<"El acomodo de asientos final es el siguiente:"<<endl;
    //Loop para imprimir los asientos finales
        for(int i=0,j=0;j<9;i=i){
            if(i%10==0 && i!=0){
                cout<<endl;
                j++;
                i=0;
            } else if(rows[j][i]==0){
                cout<<rows[j][i]<<"0 ";
                i++;
            } else {
                cout<<rows[j][i]<<" ";
                i++;
            }
        }

    return 0;
}

