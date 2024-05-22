#include <iostream>

using namespace std;

int n;
char a[505][505];
char b[505][505];
char apoyo[505][505];

bool checar(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=b[i][j]){
                return false;
            }
        }
    }
    return true;
}
void columnas(int i){
    for(int j=0;j<n;j++){
        swap(a[j][i],a[j][n-i-1]);
    }
}
void horizontal(){
    for(int i=0;i<n/2;i++){
        columnas(i);
    }
}
void filas(int i){
    for(int j=0;j<n;j++){
        swap(a[i][j],a[n-i-1][j]);
    }
}
void vertical(){
    for(int i=0;i<n/2;i++){
        filas(i);
    }
}
void giro(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            apoyo[i][j]=a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[j][n-i-1]=apoyo[i][j];
        }
    }
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }

    bool check = false;
    for(int i=0;i<4;i++){
        if(checar()==true){
            cout<<"IGUALES";
            check=true;
            break;
        }
        horizontal();
        if(checar()==true){
            cout<<"IGUALES";
            check=true;
            break;
        }
        horizontal();
        vertical();
        if(checar()==true){
            cout<<"IGUALES";
            check=true;
            break;
        }
        vertical();
        giro();
    }
    if(check==false){
        cout<<"DIFERENTES";
    }
    return 0;
}
