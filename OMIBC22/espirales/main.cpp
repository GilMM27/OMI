#include <iostream>

using namespace std;

int m,n;
long long espirales=0;
int a[1005][1005]={0};
long long rama=0;

void dibuja(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void calcular(int y,int x,int d){
    if(d==1){
        for(int i=x+1;i<n && a[y][i]!=1;i++){
            a[y][i]=1;
            espirales++;
            rama++;
            //cout<<y<<" "<<i<<" "<<rama<<endl;
            dibuja();
            calcular(y,i,2);
            rama--;
            //cout<<y<<" "<<i<<" "<<rama<<endl;
            if(rama==0){
                a[y][i]=1;
                cout<<"trunco "<<y<<" "<<i<<endl;
            }else{
                a[y][i]=0;
            }
        }
    }else if(d==2){
        for(int i=y+1;i<m && a[i][x]!=1;i++){
            a[i][x]=1;
            espirales++;
            rama++;
            //cout<<i<<" "<<x<<" "<<rama<<endl;
            dibuja();
            calcular(i,x,3);
            rama--;
            //cout<<i<<" "<<x<<" "<<rama<<endl;
            if(rama==0){
                a[i][x]=1;
                cout<<"trunco "<<i<<" "<<x<<endl;
            }else{
                a[i][x]=0;
            }
        }
    }else if(d==3){
        for(int i=x-1;i>=0 && a[y][i]!=1;i--){
            a[y][i]=1;
            espirales++;
            rama++;
            //cout<<y<<" "<<i<<" "<<rama<<endl;
            dibuja();
            calcular(y,i,4);
            rama--;
            //cout<<y<<" "<<i<<" "<<rama<<endl;
            if(rama==0){
                a[y][i]=1;
                cout<<"trunco "<<y<<" "<<i<<endl;
            }else{
                a[y][i]=0;
            }
        }
    }else if(d==4){
        for(int i=y-1;i>=0 && a[i][x]!=1;i--){
            a[i][x]=1;
            espirales++;
            rama++;
            //cout<<i<<" "<<x<<" "<<rama<<endl;
            dibuja();
            calcular(i,x,1);
            rama--;
            //cout<<i<<" "<<x<<" "<<rama<<endl;
            if(rama==0){
                a[i][x]=1;
                cout<<"trunco "<<i<<" "<<x<<endl;
            }else{
                a[i][x]=0;
            }
        }
    }
    cout<<"termino"<<endl;
    /*if(y==0 && x==0){
    }else{
        a[y][x]=0;
    }*/
    //cout<<"termino "<<y<<" "<<x<<endl;
    return;
}

int main()
{
    cin>>m>>n;
    calcular(0,-1,1);
    cout<<espirales;
    return 0;
}
