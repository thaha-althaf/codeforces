#include <iostream>
#include <set>
using namespace std;
 
int main()
{
	string a1;
	cin>>a1;
    set<char> map;
    for(auto &x:a1)
        map.insert(x);
    if(map.size()%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
}