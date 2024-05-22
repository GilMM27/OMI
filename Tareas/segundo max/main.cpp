#include <iostream>

using namespace std;

int segundoMaximo(int arr[],int size){
    int max=-1,max2=-1;
    //encuentra el segundo maximo y lo guarda en max2, max siendo el maximo
    //funciona ya que se analiza cada elemento del arreglo y se encuentra el maximo
    //cuando un elemento no es mayor que el maximo pero es mayor al segundo maximo se guarda
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max2=max;
            max=arr[i];
        }else if(arr[i]>max2){
            max2=arr[i];
        }
    }
    return max2;
}

int main()
{
    int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<segundoMaximo(a,size);
    return 0;
}
