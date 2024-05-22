#include <iostream>

using namespace std;

int main()
{
    int n,k,ninos=0,cont=1;
    cin>>n>>k;
    while(n>0){
        if(cont>n){
            cont=1;
        }
        for(int i=0;i<k;i++){
            if(cont>=n){
                cont=1;
            } else {
                cont++;
            }
        }
        if(cont==1){
            cout<<ninos;
            break;
        } else {
            ninos++;
            n--;
        }
    }
    return 0;
}
