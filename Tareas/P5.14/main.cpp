#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
//declaración de variables que usare durante todo el proyecto
string unidades(float);
string decimas(float);
string centecimas(float);
float num;
float numtemp;

int main()
{
    srand(time(0));
    //interacción con el usuario para obtener los datos requeridos
    cout<<"name: ";
    string n,n2,n3;
    cin>>n>>n2>>n3;
    cout<<"hour rate: ";
    float hrate;
    cin>>hrate;
    cout<<"hours worked: ";
    float hwork;
    cin>>hwork;

    //se imprime el formato inicial del cheque
    cout<<endl<<"BANCO          Numero de cheque:"<<endl<<"El Malagamba   "<<1+rand()%1000<<endl;
    cout<<endl<<"Fecha: "<<1+rand()%29<<"/"<<1+rand()%12<<"/21"<<endl;
    cout<<"A nombre de: "<<n<<" "<<n2<<" "<<n3<<endl;
    cout<<endl<<"Cantidad: ";
    //se calcula la cantidad de paga
    if(hwork<=40){
        //paga normal de horas trabajadas multiplicadas por la paga de cada hora
        num=hrate*hwork;
        cout<<num<<endl;
    } else {
        //como se trabajo más de 40 horas, cada hora después de esto se paga multiplicado por 1.5
        num=(40*hrate)+((hwork-40)*(hrate*1.5));
        cout<<num<<endl;
    }
    //declaración de algunas variables de apoyo
    float apoyo1 = num;
    int apoyo2 = num;
    num = apoyo2;
    //statements que checan la cantidad de paga y llaman funciones especificas para convertirla a palabras
    if(num<=15){
        cout<<unidades(num);
    } else if(num<100){
        cout<<decimas(num);
        cout<<unidades(num);
    } else if(num<1000){
        cout<<centecimas(num);
        if(num!=0){
        if(num<=15){
            cout<<unidades(num);
        } else {
        cout<<decimas(num);
        cout<<unidades(num);
        }
        }
    } else {
        numtemp = num;
        num = num/1000;
        int numtemp2 = num;
        num = numtemp2;
        if(num==1){
            num--;
        }
        else if(num<=15){
        cout<<unidades(num);
    } else if(num<100){
        cout<<decimas(num);
        cout<<unidades(num);
    } else if(num<1000){
        cout<<centecimas(num);
        if(num!=0){
        if(num<=15){
            cout<<unidades(num);
        } else {
        cout<<decimas(num);
        cout<<unidades(num);
        }
        }
    }
    cout<<" MIL ";
    int apoyo = numtemp/1000;
    num = numtemp - (apoyo*1000);
        if(num<=15){
        cout<<unidades(num);
    } else if(num<100){
        cout<<decimas(num);
        cout<<unidades(num);
    } else if(num<1000){
        cout<<centecimas(num);
        if(num!=0){
        if(num<=15){
            cout<<unidades(num);
        } else {
        cout<<decimas(num);
        cout<<unidades(num);
        }
        }
    }
    }
    //si la paga tiene decimales, aqui se encuentran esos decimales y se imprimen
    if(apoyo1-apoyo2!=0){
        int apoyo3 = (apoyo1-apoyo2)*100;
        cout<<" Y "<<apoyo3<<" /100"<<endl;
    }

    return 0;
}
//función llamada cuando se buscan unidades o las primeras 6 decimas que tienen nombres especiales
string unidades(float n){
    if(n==1){
        return "UNO";
    }
    else if(n==2){
        return "DOS";
    }
    else if(n==3){
        return "TRES";
    }
    else if(n==4){
        return "CUATRO";
    }
    else if(n==5){
        return "CINCO";
    }
    else if(n==6){
        return "SEIS";
    }
    else if(n==7){
        return "SIETE";
    }
    else if(n==8){
        return "OCHO";
    }
    else if(n==9){
        return "NUEVE";
    }
    else if(n==10){
        return "DIEZ";
    }
    else if(n==11){
        return "ONCE";
    }
    else if(n==12){
        return "DOCE";
    }
    else if(n==13){
        return "TRECE";
    }
    else if(n==14){
        return "CATORCE";
    }
    else if(n==15){
        return "QUINCE";
    } else {
        return "";
    }
}
//función llamada cuando se buscan decimas
string decimas(float n){
    if(n==10){
       num=num-10;
       return "DIEZ";
    }
    else if(n<20){
        num=num-10;
        return "DIECI";
    }
    else if(n==20){
       num=num-20;
       return "VEINTE";
    }
    else if(n<30){
        num=num-20;
        return "VEINTI";
    }
    else if(n==30){
       num=num-30;
       return "TREINTA";
    }
    else if(n<40){
        num=num-30;
        return "TREINTA Y ";
    }
    else if(n==40){
       num=num-40;
       return "CUARENTA";
    }
    else if(n<50){
        num=num-40;
        return "CUARENTA Y ";
    }
    else if(n==50){
       num=num-50;
       return "CINCUENTA";
    }
    else if(n<60){
        num=num-50;
        return "CINCUENTA Y ";
    }
    else if(n==60){
       num=num-60;
       return "SESENTA";
    }
    else if(n<70){
        num=num-60;
        return "SESENTA Y ";
    }
    else if(n==70){
       num=num-70;
       return "SETENTA";
    }
    else if(n<80){
        num=num-70;
        return "SETENTA Y ";
    }
    else if(n==80){
       num=num-80;
       return "OCHENTA";
    }
    else if(n<90){
        num=num-80;
        return "OCHENTA Y ";
    }
    else if(n==90){
       num=num-90;
       return "NOVENTA";
    }
    else if(n<100){
        num=num-90;
        return "NOVENTA Y ";
    } else {
        return "";
    }
}
//función llamada cuando se buscan centecimas
string centecimas(float n){
    if(n==100){
        num=num-100;
        return "CIEN";
    }
    else if(n<200){
       num=num-100;
       return "CIENTO ";
    }
    else if(n<300){
       num=num-200;
       return "DOSCIENTOS ";
    }
    else if(n<400){
       num=num-300;
       return "TRESCIENTOS ";
    }
    else if(n<500){
       num=num-400;
       return "CUATROCIENTOS ";
    }
    else if(n<600){
       num=num-500;
       return "QUINIENTOS ";
    }
    else if(n<700){
       num=num-600;
       return "SEICIENTOS ";
    }
    else if(n<800){
       num=num-700;
       return "SETECIENTOS ";
    }
    else if(n<900){
       num=num-800;
       return "OCHOCIENTOS ";
    }
    else if(n>1000){
       num=num-900;
       return "NOVECIENTOS ";
    } else {
        return "";
    }
}
