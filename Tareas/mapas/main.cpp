#include <iostream>

using namespace std;

int n;
char a[502][502];
char b[502][502];
char c[502][502];

bool iguales(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=b[i][j]){
                return false;
            }
        }
    }
    return true;
}
void girar90(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=c[j][n-i-1];
        }
    }
}
void vertical(){
    for (int i=0;i<n/2;i++){
        for (int j=0;j<n;j++){
            swap(a[i][j], a[n-i-1][j]);
        }
    }
}
void horizontal(){
    for (int j=0;j<n/2;++j){
        for (int i=0;i<n;++i) {
            swap(a[i][j], a[i][n-j-1]);
        }
    }
}

int main()
{
    cin>>n;
    string apoyo;
    for(int i=0;i<n;i++){
        cin>>apoyo;
        for(int j=0;j<n;j++){
            a[i][j]=apoyo[j];
        }
    }
    for(int i=0;i<n;i++){
        cin>>apoyo;
        for(int j=0;j<n;j++){
            b[i][j]=apoyo[j];
        }
    }

    int x=0;
    for(int i=0;i<4;i++){
        if(iguales()==true){
            cout<<"IGUALES";
            x++;
            break;
        }
        vertical();
        if(iguales()==true){
            cout<<"IGUALES";
            x++;
            break;
        }
        vertical();
        horizontal();
        if(iguales()==true){
            cout<<"IGUALES";
            x++;
            break;
        }
        horizontal();
        girar90();
    }
    if(x==0){
        cout<<"DIFERENTES";
    }

    return 0;
}
//loop para imprimir arreglo
/*
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
*/
