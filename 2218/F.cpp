#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        int n=x+y;
        if(x>y || (n%2==0 && x==0))
        {
            cout<<"NO"<<endl;
            continue;
        }
        int pos=0;
        vector<pair<int,int>> ans;
        if(n%2==0)
            x--;
        else
            y--;
        n--;
        while (x)
        {
            ans.push_back({pos,pos+1});
            pos++;
            if (n % 2 == 0)
                x--;
            else
                y--;
            n--;
        }
        
        int pos2=pos;
        while (y--)
            ans.push_back({pos,++pos2});
        cout<<"YES"<<endl;
        for (auto [u, v] : ans)
            cout << u + 1 << " " << v + 1 << "\n";
    }
}
