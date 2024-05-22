#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string alfa,palabra;
    int inicio,fin,moves=0;
    for(int i=0;i<t;i++){
        cin>>alfa>>palabra;
        inicio=0;
        moves=0;
        for(int j=0;j<palabra.length();j++){
            for(int h=0;h<alfa.length();h++){
                if(palabra[j]==alfa[h]){
                    fin=h;
                }
            }
            if(fin-inicio<0 && j!=0){
                moves+=inicio-fin;
            }else if(j!=0){
                moves+=fin-inicio;
            }
            inicio=fin;
        }
        cout<<moves<<endl;
    }
    return 0;
}
