#include <iostream>

using namespace std;

void gen(int x,int y,int a[101][101]);

int main()
{
    int y,x;
    cin>>x>>y;
    int a[101][101];
    int n;
    cin>>n;
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<"generacion "<<i;
        gen(x,y,a);
    }
    return 0;
}

void gen(int x,int y,int a[101][101]){
    int a2[y][x]={0};
    int vecinos;
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            vecinos=0;
            if(a[i-1][j-1]==1){
                vecinos++;
            }
            if(a[i-1][j]==1){
                vecinos++;
            }
            if(a[i-1][j+1]==1){
                vecinos++;
            }
            if(a[i][j-1]==1){
                vecinos++;
            }
            if(a[i][j+1]==1){
                vecinos++;
            }
            if(a[i+1][j-1]==1){
                vecinos++;
            }
            if(a[i+1][j]==1){
                vecinos++;
            }
            if(a[i+1][j+1]==1){
                vecinos++;
            }
            //checks
            if(a[i][j]==1){
                if(vecinos>1 && vecinos<4){
                    a2[i][j]=1;
                }else{
                    a2[i][j]=0;
                }
            }else{
                if(vecinos==3){
                    a2[i][j]=1;
                }else{
                    a2[i][j]=0;
                }
            }
        }
    }
    cout<<endl;
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            a[i][j]=a2[i][j];
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
