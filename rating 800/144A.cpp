#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector<int>t(n);
    int maxx=INT_MIN;
    int minn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
        maxx=max(maxx,t[i]);
        minn=min(minn,t[i]);
    }
    int ans=0;
    auto it = find(t.begin(),t.end(),maxx);
    int p = distance(t.begin(),it);
    ans+=p;
    t.insert(t.begin(),maxx);
    t.erase(t.begin()+p+1);
 
    auto rit = find(t.rbegin(),t.rend(),minn);
    p = distance(t.rbegin(),rit);
    ans+=p;
  
    cout<<ans;
}