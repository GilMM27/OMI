#include <iostream>

using namespace std;

string arr="ABCDE";

void a(){
    for(int i=4;i>0;i--){
        swap(arr[0],arr[i]);
    }
}
void b(){
    for(int i=0;i<4;i++){
        swap(arr[4],arr[i]);
    }
}
void c(){
    swap(arr[0],arr[1]);
}

int main()
{
    int boton,veces;
    while(true){
        cin>>boton>>veces;
        if(boton==1){
            for(int i=0;i<veces;i++){
                a();
            }
        }else if(boton==2){
            for(int i=0;i<veces;i++){
                b();
            }
        }else if(boton==3 && veces%2==1){
            c();
        }else if(boton==4 && veces>0){
            break;
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
