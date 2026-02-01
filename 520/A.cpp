#include <iostream>
#include <set>
using namespace std;
 
int main()
{
    int n1;
    cin>>n1;
    string s;
    cin>>s;
    set<int> ss;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(auto &x:s)
        ss.insert(x);
    if(ss.size()==26)
        cout<<"YES";
    else
        cout<<"NO";
}