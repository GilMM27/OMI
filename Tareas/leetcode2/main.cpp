#include <iostream>
#include <vector>


using namespace std;

int main()
{
    vector<int> nums;
    int x;
    for(int i=0;i<9;i++){
        cin>>x;
        nums.push_back(x);
    }
    int k;
    cin>>k;

    vector<int> avr;
        //iniciales
        for(int i=0;i<k && i<nums.size();i++){
            avr.push_back(-1);
        }
        long long tamano=nums.size()-k;
        int ult=0;
        int apoyo;
        //primer avr
        if(k*2<nums.size()){
            for(int j=0;j<k*2+1;j++){
            ult+=nums[j];
            }
            //cout<<ult<<endl;
            apoyo=ult/(k*2+1);
            avr.push_back(apoyo);
        }
        //sacar avrs
        for(int i=k+1;i<tamano;i++){
            //cout<<nums[i-k-1]<<" "<<nums[i+k]<<endl;
            ult=ult-nums[i-k-1]+nums[i+k];
            //cout<<ult<<endl;
            apoyo=ult/(k*2+1);
            avr.push_back(apoyo);
        }
        //finales
        for(int i=nums.size()-k;i<nums.size() && i>k;i++){
            avr.push_back(-1);
        }
        for(int i=0;i<9;i++){
            cout<<avr[i]<<" ";
        }

    return 0;
}
