#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string words1[5];
    string words2[3];
    string x;
    for(int i=0;i<5;i++){
        cin>>words1[i];
    }
    for(int i=0;i<3;i++){
        cin>>words2[i];
    }

        int cont=0,times;
        bool check;
        /*for(int i=0;i<words1.size();i++){
            cout<<words1[i]<<" ";
        }*/
        for(int i=0;i<5;i++){
            check=true;
            times=0;
            for(int h=0;h<5 && check==true;h++){
                if(words1[i]==words1[h] && i!=h){
                    check=false;
                }
                cout<<words1[h]<<" "<<h<<endl;
            }
            for(int j=0;j<3 && check==true;j++){
                if(words1[i]==words2[j]){
                    times++;
                }
                if(times>1){
                    break;
                }
            }
            if(check==true && times==1){
                cont++;
            }
        }
        cout<<cont<<endl;
    return 0;
}
