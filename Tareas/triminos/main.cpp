#include <iostream>

using namespace std;

int main()
{
    int altura, ancho;
    cin>>altura>>ancho;
    int tablero[altura+5][ancho+5];
    for(int i=0;i<altura;i++){
        for(int j=0;j<ancho;j++){
            tablero[i][j]=0;
        }
    }
    int total=altura*ancho;
    int n;
    cin>>n;
    //1 = y
    //2 = x
    int a1,a2,b1,b2,c1,c2;
    bool check;
    for(int i=0;i<n;i++){
        check=false;
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        //checar si se repiten y restar al total
        if(tablero[a1][a2]!=1){
            tablero[a1][a2]=1;
            total--;
            //cout<<a1<<" "<<a2<<endl;
        }
        if(tablero[b1][b2]!=1){
            tablero[b1][b2]=1;
            total--;
            //cout<<b1<<" "<<b2<<endl;
        }
        if(tablero[c1][c2]!=1){
            tablero[c1][c2]=1;
            total--;
            //cout<<c1<<" "<<c2<<endl;
        }
        //ruta de y con a b
        if(a1+1==b1 && a2==b2 || a1-1==b1 && a2==b2){
            if(a2+1==c2 && a1==c1 || a2-1==c2 && a1==c1  || b2+1==c2 && b1==c1  || b2-1==c2 && b1==c1 ){
                //cout<<"y a b"<<endl;
                cout<<1<<endl;
                check=true;
            }
        }
        //ruta de x con a b
        else if(a2+1==b2 && a1==b1 || a2-1==b2 && a1==b1){
            if(a1+1==c1 && a2==c2 || a1-1==c1 && a2==c2 || b1+1==c1 && b2==c2  || b1-1==c1 && b2==c2){
                //cout<<"x a b"<<endl;
                cout<<1<<endl;
                check=true;
            }
        }
        //ruta y con a c
        else if(a1+1==c1  && a2==c2 || a1-1==c1 && a2==c2){
            if(a2+1==b2 && a1==b1 || a2-1==b2 && a1==b1 || c2+1==b2 && c1==b1 || c2-1==b2 && c1==b1){
                //cout<<"y a c"<<endl;
                cout<<1<<endl;
                check=true;
            }
        }
        //ruta x con a c
        else if(a2+1==c2 && a1==c1 || a2-1==c2 && a1==c1){
            if(a1+1==b1 && a2==b2 || a1-1==b1 && a2==b2 || c1+1==b1 && c2==b2 || c1-1==b1 && c2==b2){
                //cout<<"x a c"<<endl;
                cout<<1<<endl;
                check=true;
            }
        }
        //ruta y con b c
        else if(b1+1==c1 && b2==c2 || b1-1==c1 && b2==c2){
            if(b2+1==a2 && b1==a1 || b2-1==a2 && b1==a1 || c2+1==a2 && c1==a1 || c2-1==a2 && c1==a1){
                //cout<<"y b c"<<endl;
                cout<<1<<endl;
                check=true;
            }
        }
        //ruta x con b c
        else if(a2+1==b2 && a1==b1 || a2-1==b2 && a1==b1){
            if(a1+1==c1 && a2==c2 || a1-1==c1 && a2==c2 || b1+1==c1 && b2==c2 || b1-1==c1 && b2==c2){
                //cout<<"x b c"<<endl;
                cout<<1<<endl;
                check=true;
            }
        }
        if(check==false){
            cout<<0<<endl;
        }

    }
    cout<<total;
    return 0;
}
