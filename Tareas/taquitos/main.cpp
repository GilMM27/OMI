#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n,x,y,vendidos=0,clientes=0;
    cin>>n;
    queue<int> q;
    for(int i;i<n;i++){
        cin>>x;
        if(x==1){
            cin>>y;
            q.push(y);
            clientes++;
        } else if(x==2){
            if(!q.empty()){
                vendidos+=q.front();
                q.pop();
                clientes--;
            }
        } else if(x==3){
            cout<<clientes<<endl;
        } else {
            cout<<vendidos<<endl;
        }
    }
    return 0;
}
