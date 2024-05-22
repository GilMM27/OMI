#include <iostream>

using namespace std;
//funcion para encontra en que dia queda el primer dia del mes
int dayweek(int year, int month, int day){
    int y = year;
    int m = month - 1;
    if(month<3){
        y--;
        m=m+4;
    }
    return ((y+y/4-y/100+y/400+3*m+4-(m-m/8)/2+day)%7);
}

int main()
{
    //declaración y lectura de variables
    int month, year, tdays, day;
    while(month<1 || month>12){
    cout<<"Month (number): ";
    cin>>month;
    if(month<1 || month>12){
        cout<<"please try again"<<endl;
    }
    }
    cout<<"Year: ";
    cin>>year;
    cout<<endl<<"      ";
    //dependiendo del mes ingresado se imprimira su nombre y se guardara la cantidad de dias que tiene el mes
    if(month==1){
        cout<<"January";
        tdays=31;
    } else if(month==2){
        cout<<"February";
        tdays=28;
    } else if(month==3){
        cout<<"March";
        tdays=31;
    } else if(month==4){
        cout<<"April";
        tdays=30;
    } else if(month==5){
        cout<<"May";
        tdays=31;
    } else if(month==6){
        cout<<"June";
        tdays=30;
    } else if(month==7){
        cout<<"July";
        tdays=31;
    } else if(month==8){
        cout<<"August";
        tdays=31;
    } else if(month==9){
        cout<<"September";
        tdays=30;
    } else if(month==10){
        cout<<"Octuber";
        tdays=31;
    } else if(month==11){
        cout<<"November";
        tdays=30;
    } else if(month==12){
        cout<<"December";
        tdays=31;
    }
    //se imprime la cabezera del calendario
    cout<<" year"<<endl<<" Su Mo Tu We Th Fr Sa"<<endl;
    //dependiendo de en que dia cae el primer dia del mes se imprimira cierta cantidad de espacios
    for(int i=0;i<dayweek(year,month,1);i++){
        cout<<"   ";
    }
    //se imprime el resto del calendario
    for(int i=dayweek(year,month,1),j=1;j<=tdays;i++,j++){
        if(i==7){
            i=0;
            cout<<endl;
            if(j<10){
                cout<<" ";
            }
            cout<<" "<<j;
        } else {
            if(j<10){
                cout<<" ";
            }
            cout<<" "<<j;
        }
    }

    return 0;
}

