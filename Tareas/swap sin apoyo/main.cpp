#include <iostream>

using namespace std;

int main()
{
    int y,x;
    cin>>y>>x;
    int a[y][x];
    int direcciones[x];
    for(int i=0;i<x;i++){
        direcciones[i]=i;
    }
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            cin>>a[i][j];
        }
    }
    int input,apoyo;
    for(int i=0;i<x;i++){
        cin>>input;
        //cout<<input<<endl;
        //checar direccion
        if(input!=direcciones[input]){
            //cout<<input<<" redireccion a "<<direcciones[input]<<endl;
            input=direcciones[input];
        }
        //SWAP
        for(int j=0;j<y;j++){
            apoyo=a[j][i];
            a[j][i]=a[j][input];
            a[j][input]=apoyo;
        }
        /*for(int h=0;h<y;h++){
            for(int j=0;j<x;j++){
                cout<<a[h][j]<<" ";
            }
            cout<<endl;
        }*/
        for(int j=0;j<x;j++){
            if(direcciones[j]==i){
                direcciones[j]=input;
                break;
            }
        }
        direcciones[input]=i;
        /*for(int j=0;j<x;j++){
            cout<<direcciones[j]<<" ";
        }
        cout<<endl;*/
    }

    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
2 3
10 0 5
7 10 5
1 2 0
*/




