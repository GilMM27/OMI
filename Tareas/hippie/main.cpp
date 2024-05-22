#include <iostream>

using namespace std;

int main()
{
    int n,cant;
    cin>>n>>cant;
    int a[cant];
    int tam=0,input,lastin=0;
    for(int i=0;i<cant;i++){
        a[i]=0;
    }
    for(int i=0;i<cant;i++){
        cin>>input;
        if(lastin!=input){
            tam++;
            a[tam]=a[tam]+1;
            lastin=input;
        } else {
            a[tam]=a[tam]+1;
        }
    }
    /*cout<<endl;
    for(int i=0;i<=tam;i++){
        cout<<a[i]<<endl;
    }*/
    //cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
    /*if(n==2 && cant==3){
        if(a[0]==0 && a[1]==1 && a[2]==1 && a[3]==1){
            cout<<1;
        }else{
            cout<<0;
        }
        return 0;
    }*/
    int desp=30005,temp,cuentas;
    for(int i=0;i<=tam;i++){
        if((i+1)%2!=0){
            //cout<<i<<endl;
            cuentas=0;
            temp=0;
            for(int j=i;cuentas<n;j++){
                //cout<<"A";
                if(j>tam){
                    j=0;
                }
                if((j+1)%2!=0){
                    cuentas=cuentas+a[j];
                    //cout<<"C"<<a[j]<<" ";
                } else {
                    temp=temp+a[j];
                    //cout<<"T"<<a[j]<<" ";
                }
            }
            //cout<<endl<<temp<<" "<<desp<<endl;
            if(temp<desp){
                //cout<<temp<<endl;
                desp=temp;
            }
        }
    }
    cout<<desp;
    return 0;
}
