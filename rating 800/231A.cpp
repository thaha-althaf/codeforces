#include <iostream>
using namespace std;
 
int main()
{
	int n,ans=0;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		int n1,n2,n3;
		cin>>n1>>n2>>n3;
		if(n1+n2+n3>=2)
			ans++;
	}
	cout<<ans;
}