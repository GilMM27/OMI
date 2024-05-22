#include <iostream>

using namespace std;

int main()
{
    int d,w,check=0;
    cin>>d>>w;
    int diccionario [d][2];
    int palabras[w];
    for(int i=0;i<d;i++){
        cin>>diccionario[i][0];
        cin>>diccionario[i][1];
    }
    for(int i=0;i<w;i++){
        cin>>palabras[i];
    }
    for(int i=0;i<w;i++){
        for(int j=0;j<d;j++){
            if(diccionario[j][0]==palabras[i]){
                cout<<diccionario[j][1]<<endl;
                check++;
                break;
            }
        }
        if(check==0){
            cout<<"C?"<<endl;
        }
        check=0;
    }
    return 0;
}
