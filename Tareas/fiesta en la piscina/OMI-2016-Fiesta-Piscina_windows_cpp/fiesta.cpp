#include "fiesta.h"

// Main
//	int Preguntar(int a, int b)

bool cool(int a,int n){
    for(int i=1;i<=n;i++){
        if(i!=a){
            if(Preguntar(i,a)!=1){
                return false;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(i!=a){
            if(Preguntar(a,i)!=0){
                return false;
            }
        }
    }
    return true;
}

int BusquedaCool(int n) {
	// FIXME
	for(int i=1;i<=n;i++){
        if(i!=n){
            if(Preguntar(i+1,i)==1){
                if(cool(i,n)==true){
                    return i;
                }
            }
        } else {
            if(Preguntar(i-1,i)==1){
                if(cool(i,n)==true){
                    return i;
                }
            }
        }
	}
	return 0;
}
