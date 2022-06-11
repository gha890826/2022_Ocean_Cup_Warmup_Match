#include<iostream>
using namespace std;

int main()
{
	int k;
	cin>>k;
	if(k==0)
	{
		cout<<"No one wants a master degree?";
		return 0;
	}
	k*=20;
	int h=18,m=30;
	m+=k;
	h+=m/60;
	m%=60;
	h%=24;
	cout<<h<<' '<<m;
}
