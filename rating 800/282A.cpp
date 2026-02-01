#include <iostream>
using namespace std;
 
int main()
{
	int n,ans=0;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		string operation;
		cin>>operation;
		if(operation.substr(0,2)=="++"||operation.substr(1,2)=="++")
			ans++;
		else if(operation.substr(0,2)=="--"||operation.substr(1,2)=="--")
			ans--;
	}
	cout<<ans;
}