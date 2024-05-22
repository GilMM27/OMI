#include <iostream>

using namespace std;

string s[1000];
int n;

void swap(int from,int to){
    string apoyo;
    apoyo=s[from];
    s[from]=s[to];
    s[to]=apoyo;
}
int locate(int start){
    int min=s[start].length(),mini=start;
    for(int i=start;i<n;i++){
        if(s[i].length()<min){
            min=s[i].length();
            mini=i;
        }
    }
    return mini;
}

int main()
{

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n-1;i++){
        swap(locate(i),i);
    }
    for(int j=0;j<n;j++){
        cout<<s[j]<<" ";
    }

    return 0;
}
