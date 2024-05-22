#include <iostream>

using namespace std;

int main()
{
    int veces;
    cin>>veces;
    for(int h=0;h<veces;h++){
        int m,n,t;
        cin>>m>>n>>t;
        //cantidad de hamburguesas pequenas posibles
        //uso las pequenas primero porque pide la mayor cantidad de hamburguesas posibles
        int cant=t/m;
        //multiplico la cantidad por el tiempo que se tarda para sacar el tiempo que le toma comer todas esas
        int tiempo=cant*m;
        //variables para guardar el mejor caso si es que no se llega al tiempo exacto
        int top=tiempo,ham=0;
        bool flag=false;
        for(int i=cant;i>=0 && flag==false;i--){
            //rellenar el tiempo con las hamburguesas grandes
            while(tiempo+n<=t){
                cant++;
                tiempo+=n;
            }
            //checar si se llego exactamente al tiempo maximo
            if(tiempo==t){
                flag=true;
                cout<<cant<<endl;
                break;
            }
            //si se alcanzo un nuevo mejor tiempo guardo el tiempo y la cantidad de hamburguesas
            //esto es por si al final nunca llega a a el tiempo exacto y tiene que beber cerveza
            if(tiempo>=top){
                top=tiempo;
                ham=cant;
            }
            //resto uno de la cantidad pequena para que en el siguiente ciclo intente rellenarla de grandes
            tiempo-=m;
            //ya que reste una chica tengo q restar 1 a mi contador de hamburguesas
            cant--;
        }
        //si nunca logro llegar al tiempo exacto pasa a este condicional
        if(flag==false){
            //doy la cantidad de hamburguesass con el tiempo sobrante
            cout<<ham<<" "<<t-top;
        }
    }
    return 0;
}
