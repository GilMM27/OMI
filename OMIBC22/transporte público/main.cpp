#include <iostream>

using namespace std;

int n,q;
int a[5000][5000];
int c[5000][5000];

void zona(int y){
    if()
}

int main()
{
    cin>>n>>q;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=0;
            c[i][j]=0;
        }
    }
    int x,y,z;
    for(int i=1;i<n;i++){
        cin>>x>>y>>z;
        a[x][y]=z;
        a[y][x]=z;
        c[x][y]=1;
        c[y][x]=1;
    }
    for(int i=0;i<q;i++){
        cin>>x>>y;
        zona(y);
    }

    return 0;
}
