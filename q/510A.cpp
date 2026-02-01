#include <vector>
#include <iostream>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>>s(n,vector<char>(m,'.'));
    
    for(int i =0;i<n;i+=2)
        for(int j=0;j<m;j++)
            s[i][j]='#';
    bool flag=true;
    for(int i=1;i<n;i+=2)
    {
        if(flag)
        {
            s[i][m-1]='#';
            flag=false;
        }
        else
        {
            s[i][0]='#';
            flag=true;
        }
    }    
 
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<s[i][j];
        }
        cout<<endl;
    }
}
