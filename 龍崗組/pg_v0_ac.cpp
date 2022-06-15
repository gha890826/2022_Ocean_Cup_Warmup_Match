#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int x,num=0;
		cin>>x;
		while(x>0)
		{
			if(x%2==1)
			{
				num++;
			}
			x/=2;
		}
		cout<<num<<endl;
	}
}

