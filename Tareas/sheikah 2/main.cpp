#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    //0 = distancia
    //1 = altura
    int a[n][2];
    int resta;
    int max1,max2;
    int maxx1,maxx2;
    maxx1=0;
    maxx2=0;
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
        if(maxx1<a[i][1]){
            max1=i;
            maxx1=a[i][1];
        } else if(maxx2<=a[i][1]){
            max2=i;
            maxx2=a[i][1];
        }
    }

    resta=a[max2][0]-a[max1][0];
    if(resta<0){
        resta*=-1;
    }
    if(a[max1][1]>=a[max1][1]){
        cout<<a[max2][1]*resta;
    } else {
        cout<<a[max1][1]*resta;
    }
    return 0;
}
