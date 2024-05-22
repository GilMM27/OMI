#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mayor = -1,seg=-1;
    for(int i=0;i<n;i++){
        if(mayor<a[i]){
            seg=mayor;
            mayor=a[i];
        }else if(mayor>=a[i] && a[i]>seg){
            seg=a[i];
        }
        //cout<<mayor<<" "<<seg<<endl;
    }
    cout<<seg;
    return 0;
}
