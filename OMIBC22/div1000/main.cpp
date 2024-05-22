#include <iostream>

using namespace std;

int main()
{
    int cont=0,cont2=0;
    for(int i=1;i<=1000;i++){
        if(i%2==0 || i%3==0){
            cont++;
        }else{
            cont2++;
        }
    }
    cout<<cont<<" "<<cont2;
    return 0;
}
