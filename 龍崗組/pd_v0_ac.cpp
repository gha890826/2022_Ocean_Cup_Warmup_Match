#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int max=0,temp=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='R') temp++;
		else
		{
			if(temp>max) max=temp;
			temp=0;
		}
	}
	if(temp>max)
			max=temp;
	cout<<max<<endl;
}

