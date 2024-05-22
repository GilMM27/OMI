#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int taxis=1;
    int ocupados[100000];
    for(int i=0;i<n;i++){
        ocupados[i]=0;
    }
    //0 llegada
    //1 salida
    //2 taxi
    int a[n][3];
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
    }
    int completado=0;
    //main for
    for(int i=0;i<n;i++){
        completado=0;
        //checar salidas de personas atras
        for(int j=0;j<i;j++){
            if(a[i][0]>a[j][1] && a[j][1]!=-1){
                ocupados[a[j][2]]=0;
                //cout<<"se desocupa el taxi "<<a[j][2]<<endl;
                a[j][1]=-1;
            }
        }
        //checar llegadas y asignar taxi
        for(int j=0;j<taxis;j++){
            if(ocupados[j]==0){
                a[i][2]=j;
                ocupados[j]=1;
                completado=1;
                //cout<<i<<" ocupa el taxi "<<j<<endl;
                break;
            }
        }
        if(completado==0){
            taxis++;
            a[i][2]=taxis-1;
            ocupados[taxis-1]=1;
            //cout<<i<<" ocupa el taxi "<<taxis-1<<" nuevo"<<endl;
        }
        //en caso que salga el mismo dia
        if(a[i][0]==a[i][1]){
            ocupados[a[i][2]]=0;
            a[i][1]=-1;
            //cout<<"se desocupa el taxi "<<a[i][2]<<endl;
        }
    }
    //imprimir
    cout<<taxis<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i][2]+1<<" ";
    }
    return 0;
}
