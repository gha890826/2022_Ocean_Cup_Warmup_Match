#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


bool palindrome(string s)
{
	for(int i=0;i<s.size()/2;i++)
	{
		if(s[i]!=s[s.size()-1-i]) return false;
	}
	//cout<<"***palindrome\n";
	return true;
}

int main()
{
	string in1,in2,in3,a,b,c;
	cin>>in1>>in2>>in3;
	int num=0;
	vector<string> ori,ans;
	for(int i=0;i<8;i++)
	{
		switch (i)
		{
			case 0:
				a=in1;
				b=in2;
				c=in3;
				break;
			case 1:
				a=in1;
				b=in2;
				c=in3;
				reverse(a.begin(),a.end());
				break;
			case 2:
				a=in1;
				b=in2;
				c=in3;
				reverse(b.begin(),b.end());
				break;
			case 3:
				a=in1;
				b=in2;
				c=in3;
				reverse(a.begin(),a.end());
				reverse(b.begin(),b.end());
				break;
			case 4:
				a=in1;
				b=in2;
				c=in3;
				reverse(c.begin(),c.end());
				break;
			case 5:
				a=in1;
				b=in2;
				c=in3;
				reverse(a.begin(),a.end());
				reverse(c.begin(),c.end());
				break;
			case 6:
				a=in1;
				b=in2;
				c=in3;
				reverse(b.begin(),b.end());
				reverse(c.begin(),c.end());
				break;
			case 7:
				a=in1;
				b=in2;
				c=in3;
				reverse(a.begin(),a.end());
				reverse(b.begin(),b.end());
				reverse(c.begin(),c.end());
				break;
		}
		ori.push_back(a+b+c);//abc
		ori.push_back(a+c+b);//acb
		ori.push_back(b+a+c);//bac
		ori.push_back(b+c+a);//bca
		ori.push_back(c+a+b);//cab
		ori.push_back(c+b+a);//cba 
	}
	for(int i=0;i<ori.size();i++)
		if(palindrome(ori[i])&&find(ans.begin(),ans.end(),ori[i])==ans.end())
		{
			num++;
			ans.push_back(ori[i]);
		}
	cout<<num<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<ans[i]<<endl;
	}
}

