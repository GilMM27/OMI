#include <iostream>

using namespace std;

int main()
{
    int x,q=0,c=0,cinc=0,v=0,d=0,cinco=0,dos=0,uno=0;
    cin>>x;
    while(x>0){
        if(x/500>=1){
            q++;
            x=x-500;
        } else if(x/100>=1){
            c++;
            x=x-100;
        } else if(x/50>=1){
            cinc++;
            x=x-50;
        } else if(x/20>=1){
            v++;
            x=x-20;
        } else if(x/10>=1){
            d++;
            x=x-10;
        } else if(x/5>=1){
            cinco++;
            x=x-5;
        } else if(x/2>=1){
            dos++;
            x=x-2;
        } else if(x/1>=1){
            uno++;
            x=x-1;
        }
    }

    if(q>0){
        cout<<q<<" monedas de 500"<<endl;
    }
    if(c>0){
        cout<<c<<" monedas de 100"<<endl;
    }
    if(cinc>0){
        cout<<cinc<<" monedas de 50"<<endl;
    }
    if(v>0){
        cout<<v<<" monedas de 20"<<endl;
    }
    if(d>0){
        cout<<d<<" monedas de 10"<<endl;
    }
    if(cinco>0){
        cout<<cinco<<" monedas de 5"<<endl;
    }
    if(dos>0){
        cout<<dos<<" monedas de 2"<<endl;
    }
    if(uno>0){
        cout<<uno<<" monedas de 1"<<endl;
    }

    return 0;
}
