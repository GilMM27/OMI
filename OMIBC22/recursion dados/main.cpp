#include <iostream>
#include <cmath>

using namespace std;

long long d, n;
long long mem[6*6*6*6*6*6+1]={0};

void dados(long long x,long long it,long long cant){
        long long apoyo=x, cont=1;
        for(long long j=0;j<pow(d,n);j++){
            cont++;
            //cout<<"X "<<cant<<endl;
            if(apoyo>d*x){
                apoyo=x;
            }
            mem[j]+=apoyo;
            if(cont>cant/d){
                apoyo+=x;
                cont=1;
            }
        }
    it++;
    if(it<=n){
        //cout<<"PASO"<<endl;
        dados(x*10,it,cant*d);
    }
}

int main()
{
    cin>>d>>n;
    dados(1,1,d);
    for(long long i=0;i<pow(d,n);i++){
        cout<<mem[i]<<endl;
    }
    return 0;
}
