#include <iostream>
#include <map>
using namespace std;
int main () {
typedef map<string, int> mapType;
mapType populationMap;
populationMap.insert(pair<string, int>("Maharashtra", 702365));
populationMap.insert(pair<string, int>("Rajasthan", 549681));
populationMap.insert(pair<string, int>("Karnataka", 789465));
populationMap.insert(pair<string, int>("Punjab", 469452));
populationMap.insert(pair<string, int>("West Bengal", 123524));

mapType :: iterator iter;
cout<<"Size of population map is : "<<populationMap.size()<<endl;

string statename;
cout<<"Enter name of the state : ";
getline(cin>>ws, statename);
iter = populationMap.find(statename);
if (iter != populationMap.end())
cout<<statename<<"'s population is : "<<iter -> second<<endl;
else
cout<<"Key is not in the population Map"<<endl;
populationMap.clear();
return 0;
}

