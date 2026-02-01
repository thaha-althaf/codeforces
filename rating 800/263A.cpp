#include <iostream>
using namespace std;
 
int main()
{
	int r;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>r;
			if(r==1)
			{
				cout<<abs(i-2)+abs(j-2);
				break;
			}
		}
	}
}