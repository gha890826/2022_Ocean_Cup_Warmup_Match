#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Team{
	public:
		string name;
		int a,b,c,sum;
		void count(){sum=a+b+c;}
};

bool compare_sum(Team a, Team b)
{
	return a.sum>b.sum;
}

int main()
{
	int n;
	cin>>n;
	vector<Team> teams(n);
	for(int i=0;i<n;i++)
	{
		cin>>teams[i].name>>teams[i].a>>teams[i].b>>teams[i].c;
		teams[i].count();
	}
	stable_sort(teams.begin(),teams.end(),compare_sum);
	for(int i=0;i<n;i++)
		cout<<teams[i].name<<endl;
}


