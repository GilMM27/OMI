#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> cola;
    int n,e,t;
    cin>>n>>e>>t;
    int a[e][e], visitadas[e];
    for(int i=0;i<e;i++){
        for(int j=0;j<e;j++){
            a[i][j]=0;
        }
        visitadas[i]=0;
    }
    visitadas[n]
    int x,y;
    for(int i=0;i<e;i++){
        cin>>x>>y;
        a[x-1][y-1]=1;
        a[y-1][x-1]=1;
    }
    /*for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }*/
    cola.push(e);
    int actual;
    while(!cola.empty()){
        actual=cola.front();
        for(int i=0;i>=e;i++){
            if(a[i][actual]==1 && ){

            }
        }
    }
    return 0;
}
