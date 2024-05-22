#include <iostream>

using namespace std;

int n;

int main()
{
    cin>>n;
    int x1,x2,y1,y2;
    //int a[n];
    int c[n][4];
    int total=0;
    for(int i=0;i<n;i++){
        cin>>c[i][0]>>c[i][1]>>c[i][2]>>c[i][3];
        total+=(c[i][2]-c[i][0])*(c[i][3]-c[i][1]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            x1=0;
            y1=0;
            //buscar traslapos y restar a total
            if(c[i][0]>=c[j][0] && c[i][2]>=c[j][2] && c[i][0]<c[j][2]){
                x1=c[j][2]-c[i][0];
            }else if(c[i][0]>=c[j][0] && c[i][2]<=c[j][2]){
                x1=c[i][2]-c[i][0];
            }else if(c[i][0]<=c[j][0] && c[i][2]<=c[j][2] && c[i][2]>c[j][0]){
                x1=c[i][2]-c[j][0];
            }else if(c[i][0]<=c[j][0] && c[i][2]>=c[j][2]){
                x1=c[j][2]-c[j][0];
            }
            if(c[i][1]>=c[j][1] && c[i][3]>=c[j][3] && c[i][1]<c[j][3]){
                y1=c[j][3]-c[i][1];
            }else if(c[i][1]>=c[j][1] && c[i][3]<=c[j][3]){
                y1=c[i][3]-c[i][1];
            }else if(c[i][1]<=c[j][1] && c[i][3]<=c[j][3] && c[i][3]>c[j][1]){
                y1=c[i][3]-c[j][1];
            }else if(c[i][1]<=c[j][1] && c[i][3]>=c[j][3]){
                y1=c[j][3]-c[j][1];
            }
                //cout<<x1<<" "<<y1<<endl;
            total-=x1*y1;
        }
    }
    cout<<total;
    /*
    2
    10 10 20 20
    15 15 25 30
    */
    /*
    2
    0 0 10 10
    15 15 25 25
    */
    return 0;
}
