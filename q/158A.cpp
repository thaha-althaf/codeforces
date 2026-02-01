#include <iostream>
using namespace std;
 
int main()
{
	int n,m,ans=0;
	cin>>n>>m;
	int t[n];
	for (int i=0;i<n;i++)
		cin>>t[i];
	m=t[m-1];
	for (int i=0;i<n;i++)
	{
		if(t[i]!=0&&t[i]>=m)
			ans++;
	}
	cout<<ans;
}