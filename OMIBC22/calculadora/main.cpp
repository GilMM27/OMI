#include <iostream>

using namespace std;

double prueba(double num1,char p,double num2){
    if(p=='+'){
        return num1+num2;
    }
    if(p=='-'){
        return num1-num2;
    }
    if(p=='/'){
        return num1/num2;
    }
    if(p=='*'){
        return num1*num2;
    }
    return -1.0;
}

int main()
{
    double a,b;
    char op;
    cin>>a>>op>>b;
    cout<<prueba(a,op,b);
    return 0;
}
