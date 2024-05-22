#include <iostream>
#include <vector>

using namespace std;

vector<int> s;
int n;

void swap(int from,int to){
    int apoyo;
    apoyo=s[from];
    s[from]=s[to];
    s[to]=apoyo;
}
int locate(int start){
    int min=s[start],mini=start;
    for(int i=start;i<n;i++){
        if(s[i]<min){
            min=s[i];
            mini=i;
        }
    }
    return mini;
}

int main()
{
    cin>>n;
    int input;
    for(int i=0;i<n;i++){
        cin>>input;
        s.push_back(input);
    }
    for(int i=0;i<n-1;i++){
        swap(locate(i),i);
    }
    for(int j=0;j<n;j++){
        cout<<s[j]<<" ";
    }

    return 0;
}
