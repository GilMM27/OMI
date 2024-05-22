#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    cout<<v[0];
    cout<<v[1];
    cout<<endl<<v.capacity()<<v.size();
    return 0;
}
