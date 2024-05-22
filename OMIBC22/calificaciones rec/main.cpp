#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<long long> v;
    vector<long long> v2;
    string s;

    getline(cin,s);
    //cout<<s<<endl;//eliminar
    long long posi=-1,maxPosi=-1;
    for(long long i=0;i<s.size();i++){
        if(s[i]=='('){
            posi++;
            if(maxPosi<posi){
                maxPosi=posi;
                v2.push_back(0);
                v.push_back(0);
            }
        }else if(s[i]==')'){
            posi--;
        }else{
            //cout<<s[i]<<" "<<posi<<endl;//eliminar
            v2[posi]+=1;
            v[posi]+=s[i]-'0';
        }
    }
    v[v.size()-1]=v[v.size()-1]/v2[v.size()-1];
    //cout<<v[v.size()-1]<<" ";//eliminar
    for(long long i=v.size()-2;i>=0;i--){
        v[i]=(v[i]+v[i+1])/(v2[i]+1);
        //cout<<v[i]<<" ";//eliminar
        //cout<<"llego";
    }
    //cout<<endl;//eliminar
    cout<<v[0];
    return 0;
}
