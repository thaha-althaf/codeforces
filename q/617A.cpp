#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    int n;	
    cin>>n;
    vector<int> dp(n+1,1);
    dp[0]=0;
    for(int i=6;i<=n;i++)
    {
        int minn=min({dp[i-1],dp[i-2],dp[i-3],dp[i-4],dp[i-5]});
        dp[i]=minn+1;
    }
    cout<<dp.back();
}