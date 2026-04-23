#include <iostream>
#include <vector>
#include <bitset>

using namespace std;
 
int main()
{
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++)
    {
        long long c,n;
        cin>>c>>n; 
        vector<string> a(n);
        for(long long j=0;j<n;j++)
            cin>>a[j];
        vector<bitset<26>> bm(c,0);
        for (long long j=0;j<n;j++)
            for (long long m=0;m<c;m++)
                bm[m] |= (1<< (a[j][m]-'a'));
        for(long long q=1;q<=c/2;q++)
        {
            vector<bitset<26>> fm;
            bitset<26> tem=0;
            for(long long h=0;h<q;h++)
            {
                if(c%q!=0)
                    break;
                bitset<26> curr;
                curr.set(); 
                long long occ=0;
                for(long long l=h;l<c;l=l+q)
                {
                    occ++;
                    curr&=bm[l];
                }
                if(curr==0)
                {
                    tem=0;
                    break;
                }
                tem|=curr;
                fm.push_back(curr);
            }
            if(tem==0)
            {
                if(q==c/2)
                    cout<<a[0]<<endl;
                continue;
            }
            string ans="";
            for(long long w=0;w<fm.size();w++)
            {
                unsigned long long x=fm[w].to_ullong();
                long long p=__builtin_ctz(x);
                ans+=('a'+p);
            }
            string anss="";
            long long o=c/q;
            for(long long w=0;w<o;w++)
                anss+=ans;
            cout<<anss<<endl;
            break;
        }
    }
}
