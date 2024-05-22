#include <iostream>

using namespace std;

int main()
{
    os_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    int x[n];
    int maxx=0;
    int pos=0;
    for(int i=0;i<n;i++){
        cin>>x[i];
        if(x[i]>maxx){
            maxx=x[i];
            pos=i;
        }
    }
    swap(x[0],x[pos]);
    if(maxx+1>=n){
        cout<<1;
    } else {
        int cont=1;
        int pila=1;
        int cajas=maxx+1;
        while(pila<=n){
            maxx=0;
            for(int i=cont;i<n;i++){
                if(x[i]>maxx){
                    maxx=x[i];
                    pos=i;
                }
            }
            cajas=cajas+maxx+1;
            pila++;
            if(cajas>=n){
                cout<<pila;
                break;
            }
            swap(x[pos],x[cont]);
            cont++;
        }
    }
    return 0;
}
