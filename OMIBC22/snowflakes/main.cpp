#include <iostream>

using namespace std;

bool check(int a[][6],int x,int b,int c){
    int it=1;
    bool flag=true;
    for(int i=c+1;i!=c;i++){
        if(i==6){
            i=0;
        }
        if(a[x][it]!=a[b][i]){
            flag=false;
            break;
        }
        it++;
    }
    if(flag==true){
        return true;
    }
    //para atras
    it=1;
    flag=true;
    for(int i=c-1;i!=c;i--){
        cout<<i<<endl;
        if(i==-1){
            i=5;
        }
        if(a[x][it]!=a[b][i]){
            flag=false;
            break;
        }
        it++;
    }
    if(flag==true){
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int a[n][6];
    for(int i=0;i<n;i++){
        for(int j=0;j<6;j++){
            cin>>a[i][j];
        }
    }
    int flag=false;
    for(int i=0;i<n-1 && flag==false;i++){
        for(int j=i+1;j<n && flag==false;j++){
            //buscar numeros iguales
            for(int h=0;h<6 && flag==false;h++){
                //cuando encuentre uno va a checar si el resto son iguales desde ahi
                if(a[i][0]==a[j][h]){
                    flag=check(a,i,j,h);
                }
            }
        }
    }
    if(flag==false){
        cout<<"No two snowflakes are alike.";
    }else{
        cout<<"Twin snowflakes found";
    }
    return 0;
}
