#include <iostream>
#include <set>
using namespace std;
 
int main()
{
    int n;
    set<int> ss;
    cin>>n;
    int xp,yp;
    cin>>xp;
    for(int i=0;i<xp;i++)
    {
        int t;
        cin>>t;
        ss.insert(t);
    }
    cin>>yp;
    for(int i=0;i<yp;i++)
    {
        int t;
        cin>>t;
        ss.insert(t);
    }
    if(ss.size()==n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
 
}