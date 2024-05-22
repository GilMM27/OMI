#include <iostream>

using namespace std;

void rotar(int n,int a[]){
    for(int i=0;i<n-1;i++){
        swap(a[n-1],a[i]);
    }
}

void rotarX(int n,int a[],int x){
    int apoyo[n];
    for(int i=0;i<n;i++){
        apoyo[i]=a[i];
    }
    int index=n-(x%n);
    for(int i=0;i<n;i++){
        if(index>=n){
            index=0;
        }
        a[i]=apoyo[index];
        index++;
    }
}

void log(int n,int a[]){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    rotarX(n,a,x);
    log(n,a);
    return 0;
}
