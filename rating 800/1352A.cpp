#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        string p;
        cin>>p;
        string ans="";
        int l=0;
        for(int m=1,i=p.length()-1;i>=0;i--,m*=10)
        {
            if(p[i]=='0')
                continue;
            int o=(p[i]-'0')*m;
            l++;
            ans=ans+to_string(o)+" ";
        }
        cout<<l<<endl;
        cout<<ans<<endl;
    }
}