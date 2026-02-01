#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
    int sum=0;
    vector<int> a(n);
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end());
    int ans=0;
    int p=0;
    while(2*p<=sum)
    {
        p+=a.back();
        a.pop_back();
        ans++;
    }
    cout<<ans;
}