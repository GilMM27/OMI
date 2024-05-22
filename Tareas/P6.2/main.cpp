#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    //variables principales
    int nums[20];
    int start;
    int size;
    bool change=false,change2=false;
    //variables de apoyo para grupos después del primero
    int Tstart;
    int Tsize;
    bool Tchange=false,Tchange2=false;
    //genera los 20 tiros de dado y marca la ubicación del grupo más grande
    for(int i=0;i<20;i++){
        nums[i] = 1+rand()%6;
        if(nums[i-1]==nums[i] && change2==false){
            if(change==false){
                start=i-1;
                size=i+1;
                change=true;
            } else if(nums[start+1]==nums[i] && change2==false){
                size++;
            }
        } else if(change==true){
            change2=true;
            //segundo test para cada vez que haya un nuevo grupo después del primero
        if(nums[i-1]==nums[i]){
            if(Tchange==false){
                Tchange2=false;
                Tstart=i-1;
                Tsize=i+1;
                Tchange=true;
            } else if(nums[Tstart+1]==nums[i] && Tchange2==false){
                Tsize++;
            }
        } else if(Tchange==true && (size-start)<(Tsize-Tstart)){
            start=Tstart;
            size=Tsize;
            Tchange=false;
            Tchange2=true;
        }
        }
    }
    //imprime los números con los paréntesis
    for(int i=0;i<20;i++){
        if(start==i){
            cout<<"( ";
        }
        if(size==i){
            cout<<") ";
        }
        cout<<nums[i]<<" ";
    }
    return 0;
}
