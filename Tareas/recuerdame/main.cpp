#include <iostream>

using namespace std;

int recordado;

void recuerdame(int num){
    recordado=num;
}

bool soy(int m){
    if(m==recordado){
        return true;
    } else {
        return false;
    }
}

int main()
{
    return 0;
}

