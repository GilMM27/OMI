#include <iostream>

using namespace std;

int n,d;
int m[1005];
string a[1005][1005];
int cant[1005];
int cont;
int maxx,nott;

int hijos(int h,int p){
    //cout<<h<<" "<<p<<endl;
    if(p==1){
        //cout<<"return "<<m[h]<<endl;
        return m[h];
    }
    for(int j=1;j<=m[h];j++){
        for(int it=0;it<n;it++){
            if(a[h][j]==a[it][0]){
                cont+=hijos(it,p-1);
            }
        }
    }
    //cout<<cont<<endl;
    return cont;
}

int main()
{
    int x;
    cin>>x;
    for(int h=0;h<x;h++){
        //ingresar valores
        cin>>n>>d;
        for(int i=0;i<n;i++){
            cin>>a[i][0]>>m[i];
            for(int j=1;j<=m[i];j++){
                cin>>a[i][j];
            }
        }
        //buscar
        for(int i=0;i<n;i++){
            cont=0;
            cant[i]=hijos(i,d);
        }
        cout<<"Tree "<<h+1<<":"<<endl;
        maxx=1005;
        for(int j=0;j<3;j++){
            nott=maxx;
            maxx=0;
            for(int i=0;i<n;i++){
                if(cant[i]>maxx && cant[i]<nott){
                    maxx=cant[i];
                }
            }
            for(int i=0;i<n;i++){
                if(cant[i]==maxx){
                    cout<<a[i][0]<<" "<<cant[i]<<endl;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
