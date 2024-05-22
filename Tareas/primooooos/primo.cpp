#include "primo.h"
#include<vector>
//#include<iostream>
// Main
//	int primo(int posicion)

using namespace std;

int busca(int n) {
    vector<int> primos;
    int cont=0;
	for(int i=2;i<=n;i++){
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                cont++;
                break;
            }
        }
        if(cont==0){
            primos.push_back(i);
            //cout<<i<<endl;
        }
        cont=0;
	}
	int l=0,r=primos.size()-1, m,x=0;
    while(l<r){
        //cout<<l<<" "<<r<<endl;
        m=(l+r)/2;
        if(primos[m]==primo(m)){
            l=m+1;
        }else{
            r=m;
        }

    }
	return primos[l];
}
