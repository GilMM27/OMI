#include "primo.h"
#include<vector>
// Main
//	int primo(int posicion)

using namespace std;

int busca(int n) {
    vector<int> primos;
    int cont=0;
	for(int i=2;i*i<=n;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                cont++;
                break;
            }
        }
        if(cont==0){
            primos.push_back(i);
        }
        cont=0;
	}
	int l=0,r=primos.size()-1;
    while(l<r){
        int m=(l+r)/2;
        if(primos(m)==primo(m)){
            l=m+1;
        }else{
            r=m;
        }
    }
	return primos[m];
}
