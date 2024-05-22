#include <iostream>

using namespace std;

int main()
{
    int n,k;
    string row;
    cin>>n>>k>>row;
    int bot=0,top=n-1;
    int turno=0;
    int r1=0,r2=0;
    int b,a;
    while(bot<top){
        turno++;
        if(row[bot]=='P'){
            bot++;
        }else if(row[top]=='P'){
            top--;
        }else{
            //ruta mas optima
            b=0;
            a=0;
            for(int i=bot;i<top;i++){
                if(row[i]=='P'){
                    break;
                }
                b++;
            }
            for(int i=top;i>bot;i--){
                if(row[i]=='P'){
                    break;
                }
                a++;
            }
            if(b<a){
                bot++;
            }else{
                top--;
            }
            if(turno%2==0){
                r2++;
                if(r2>=k){
                    cout<<"DA";
                    break;
                }
            }else{
                r1++;
                if(r1>=k){
                    cout<<"NE";
                    break;
                }
            }
        }
    }
    /*
    int moves[n/2+1]={0};
    int apoyo=0;
    //izq a der
    for(int i=0;i<n/2;i++){
        if(row[i]='C'){
            moves[apoyo]++;
        }else{
            apoyo++;
        }
    }
    //der a izq
    apoyo=0;
    for(int i=n;i>n/2;i--){
        if(row[i]='C'){
            moves[apoyo]++;
        }else{
            apoyo++;
        }
    }
    //quien gana?
    for(int i=0;i<)
        */
    return 0;
}
