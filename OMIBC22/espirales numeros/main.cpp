#include <iostream>

using namespace std;

int mayor=0;
int a[105][105]={0};
int apoyo;

int buscarN(int y,int x,int tamano,int veces,int it,int d);
int buscarE(int y,int x,int tamano,int veces,int it,int d);
int buscarS(int y,int x,int tamano,int veces,int it,int d);
int buscarO(int y,int x,int tamano,int veces,int it,int d);

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    int mayor=0,r;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            r=buscarN(i,j,1,1,2,1);
            if(r>mayor){
                mayor=r;
            }
            r=buscarE(i,j,1,1,2,1);
            if(r>mayor){
                mayor=r;
            }
            r=buscarS(i,j,1,1,2,1);
            if(r>mayor){
                mayor=r;
            }
            r=buscarO(i,j,1,1,2,1);
            if(r>mayor){
                mayor=r;
            }
            r=buscarN(i,j,1,1,2,2);
            if(r>mayor){
                mayor=r;
            }
            r=buscarE(i,j,1,1,2,2);
            if(r>mayor){
                mayor=r;
            }
            r=buscarS(i,j,1,1,2,2);
            if(r>mayor){
                mayor=r;
            }
            r=buscarO(i,j,1,1,2,2);
            if(r>mayor){
                mayor=r;
            }
        }
    }
    cout<<mayor;
    return 0;
}

int buscarN(int x,int y,int tamano,int veces,int it,int d){
    for(int i=veces;i>0;i--){
        apoyo=a[y][x];
        y--;
        if(a[y][x]>apoyo){
            tamano++;
            //cout<<a[y][x]<<" "<<x<<" "<<y<<" norte"<<endl;
        }else{
            //cout<<"murio"<<endl;
            return tamano;
        }
    }
    it--;
    if(it<=0){
        veces++;
        it=2;
    }
    if(d==1){
        return buscarE(x,y,tamano,veces,it,d);
    }else{
        return buscarO(x,y,tamano,veces,it,d);
    }
}
int buscarE(int x,int y,int tamano,int veces,int it,int d){
    for(int i=veces;i>0;i--){
        apoyo=a[y][x];
        x++;
        if(a[y][x]>apoyo){
            //cout<<a[y][x]<<" "<<x<<" "<<y<<" este"<<endl;
            tamano++;
        }else{
            //cout<<"murio"<<endl;
            return tamano;
        }
    }
    it--;
    if(it<=0){
        veces++;
        it=2;
    }
    if(d==1){
        return buscarS(x,y,tamano,veces,it,d);
    }else{
        return buscarN(x,y,tamano,veces,it,d);
    }
}
int buscarS(int x,int y,int tamano,int veces,int it,int d){
    for(int i=veces;i>0;i--){
        apoyo=a[y][x];
        y++;
        if(a[y][x]>apoyo){
            //cout<<a[y][x]<<" "<<x<<" "<<y<<" sur"<<endl;
            tamano++;
        }else{
            //cout<<"murio"<<endl;
            return tamano;
        }
    }
    it--;
    if(it<=0){
        veces++;
        it=2;
    }
    if(d==1){
        return buscarO(x,y,tamano,veces,it,d);
    }else{
        return buscarE(x,y,tamano,veces,it,d);
    }
}
int buscarO(int x,int y,int tamano,int veces,int it,int d){
    for(int i=veces;i>0;i--){
        apoyo=a[y][x];
        x--;
        if(a[y][x]>apoyo){
            //cout<<a[y][x]<<" "<<x<<" "<<y<<" oeste"<<endl;
            tamano++;
        }else{
            //cout<<"murio"<<endl;
            return tamano;
        }
    }
    it--;
    if(it<=0){
        veces++;
        it=2;
    }
    if(d==1){
        return buscarN(x,y,tamano,veces,it,d);
    }else{
        return buscarS(x,y,tamano,veces,it,d);
    }
}
