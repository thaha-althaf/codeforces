#include <iostream>
using namespace std;
 
int main()
{
    int  people,noofbottles,mlperbottle,limes,slices,salt,drink,saltlick;
    cin>>people>>noofbottles>>mlperbottle>>limes>>slices>>salt>>drink>>saltlick;
 
    int totalml=noofbottles*mlperbottle;
    int d=totalml/(drink*people);
    int s=salt/(saltlick*people);
    int l=slices*limes/people;
    cout<<min({d,s,l});
}