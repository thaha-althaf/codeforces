#include <iostream>
using namespace std;
 
int main()
{
	string a1,ans;
	cin>>a1;
    sort(a1.begin(),a1.end());
    a1=a1.substr(a1.size()/2);
    for(auto &x:a1)
        ans=ans+x+"+";
    ans.pop_back();
    cout<<ans;
}