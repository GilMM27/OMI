#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    //0 = distancia
    //1 = altura
    int a[n][2];
    int temp=0, area=0;
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1]
    }
    //checar solo el castillo mas lejano y el mas alto
    /*
    int resta;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            resta=a[i][0]-a[j][0];
            if(resta<0){
                resta*=-1;
            }
            if(a[i][1]>=a[j][1]){
                temp=resta*a[j][1];
            } else {
                temp=resta*a[i][1];
            }
            if(temp<0){
                temp=temp*-1;
            }
            if(temp>area){
                area=temp;
            }
        }
    }
    */
    int resta;
    int max[2];
    for(int i=0;i<n;i++){
        max[0]=0;
        max[1]=0;
        for(int j=0;j<n;j++){
            if(a[j][1]>max[1]){
                max[1]=j;
            }
            resta=a[i][0]-a[j][0];
            if(resta>max[0]){
                max[0]=j;
            }
        }
        for(int j=0;j<2;j++){
            resta=a[i][0]-a[max[j]][0];
            if(resta<0){
                resta*=-1;
            }
            if(a[i][1]>=a[max[j]][1]){
                temp=resta*a[max[j]][1];
            } else {
                temp=resta*a[i][1];
            }
            if(temp<0){
                temp=temp*-1;
            }
            if(temp>area){
                area=temp;
                //cout<<resta<<" "<<max[j]<<" "<<i<<endl;
            }
        }
    }
    cout<<area;
    return 0;
}
