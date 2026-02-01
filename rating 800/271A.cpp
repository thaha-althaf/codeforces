#include <iostream>
#include <set>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    for(int i=n+1;i<9877;i++)
    {
        int temp=i;
        set<int> s;
        while(temp>0)
        {
            s.insert(temp%10);
            temp/=10;
        }
        if(s.size()==4)
        {
            cout<<i;
            return 0;
        }
    }
}