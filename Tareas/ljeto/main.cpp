#include <iostream>

using namespace std;

int main()
{
    //tp <5
    //tb >4
    int n,t,x,y,tp=0,tb=0;
    int dub[8]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t>>x>>y;
        if(t<=dub[x-1]){
            if(x<5){
                tp+=150;
            }else{
                tb+=150;
            }
            dub[x-1]=t+10;
        }else{
            if(x<5){
                tp+=100;
            }else{
                tb+=100;
            }
            dub[x-1]=t+10;
        }
    }
    cout<<tp<<" "<<tb;
    return 0;
}
