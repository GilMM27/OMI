#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long b;
    int n,m;
    cin>>b>>n>>m;
    long long xc[n],rc[n],xg[m],rg[m],lg[m];
    for(int i=0;i<n;i++){
        cin>>xc[i]>>rc[i];
    }
    for(int i=0;i<m;i++){
        cin>>xg[i]>>rg[i]>>lg[i];
    }
    long long mitadc[n];
    //cilindros
    for(int i=0;i<n;i++){
        mitadc[i]=lg[i]+rg[i];
    }
    long long derechac[n],izquierdac[n];
    //cilindros
    for(int i=0;i<n;i++){
        derechac[i]=xc[i]+rc[i];
        izquierdac[i]=xc[i]-rc[i];
    }
    //altura[m],
    long long mitad[m],izquierda[m],derecha[m];
    //globos
    for(int i=0;i<m;i++){

        //altura[i]=lg[i]+(rg[i]*2);
        mitad[i]=lg[i]+rg[i];
        //izquierda[i]=xg[i]-rg[i];
        //derecha[i]=xg[i]+rg[i];
    }
    int globos=0,temp=0,pita;
    //main
    for(int i=0;i<m;i++){
        temp=0;
        for(int j=0;j<m;j++){
            for(int h=0;h<n;h++){
                pita=sqrt((pow(xc[h]-xg[j],2))+(pow((lg[i]+rc[h])-mitad[j],2)));
                //cout<<pita<<" "<<rc[h]+rg[j]<<endl;
                //añadir if de pitagoras
                //mitad[j]<=mitad[i] && altura[j]>lg[i] &&
                if(pita<=rc[h]+rg[j] || izquierda[j]<=derechac[h] && derecha[j]>=izquierdac[h] && mitad[j]>=mitadc[h] && lg[h]-rc[h]>=0){
                    temp++;
                    break;
                }
                //cout<<i<<" "<<j<<" "<<h<<endl;
            }
        }
        if(temp>globos){
            globos=temp;
        }
    }
    cout<<globos;
    return 0;
}
