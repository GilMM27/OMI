#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string deck[n];
    for(int i=0;i<n;i++){
        cin>>deck[i];
    }
    int sett=0;
    bool check;
    for(int i=0;i<=n-3;i++){
        for(int j=i+1;j<=n-2;j++){
            for(int y=j+1;y<n;y++){
                check=true;
                for(int car=0;car<k;car++){
                    if((deck[i][car]==deck[j][car] && deck[j][car]==deck[y][car]) || (deck[i][car]!=deck[j][car] && deck[j][car]!=deck[y][car] && deck[i][car]!=deck[y][car])){

                    }else{
                        check=false;
                        break;
                    }
                }
                if(check==true){
                    sett++;
                }
                //cout<<deck[i]<<" "<<deck[j]<<" "<<deck[y]<<" "<<check<<endl;
            }
        }
    }
    cout<<sett;
    return 0;
}
