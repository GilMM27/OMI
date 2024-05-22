#include <iostream>

using namespace std;

int main()
{
    cout<<"A";
    int t;
    cin>>t;
    int n;
    int a[200001];
    int p[20001][2];
    int top,bot,cont;

    for(int j=0;j<t;j++){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cont=0;
        bot=0;
        top=n-1;
        while(top>=bot){
            if(a[bot]>a[top]){
                p[cont][0]=a[bot];
                bot++;
                p[cont][1]=0;
            }else{
                p[cont][0]=a[top];
                top--;
                p[cont][1]=1;
            }
            cont++;
        }

        //izquierda (bot) al revez
        for(int i=n-1;i>=0;i--){
            if(p[i][1]==0){
                cout<<p[i][0]<<" ";
            }
        }
        for(int i=0;i<n;i++){
            if(p[i][1]==1){
                cout<<p[i][0]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
