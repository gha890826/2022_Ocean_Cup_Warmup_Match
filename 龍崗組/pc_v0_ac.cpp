#include<iostream>
using namespace std;

int main()
{
	int k;
	cin>>k;
	
	cout<<' ';
	for(int i=0;i<k;i++)cout<<'_';
	cout<<"   ";
	for(int i=0;i<k;i++)cout<<'_';
	cout<<endl;
	
	for(int i=0;i<k;i++)
	{
		cout<<'|';
		if(i==k-1)
			for(int j=0;j<k;j++)cout<<'_';
		else
			for(int j=0;j<k;j++)cout<<' ';
		cout<<"| |";
		for(int j=0;j<k;j++)cout<<' ';
		cout<<" |";
		cout<<endl;
	}
	
	
	for(int i=0;i<k;i++)
	{
		cout<<'|';
		for(int j=0;j<k;j++)cout<<' ';
		cout<<"| |";
		if(i==k-1)
			for(int j=0;j<k;j++)cout<<'_';
		else
			for(int j=0;j<k;j++)cout<<' ';
		cout<<" |";
		if(i==k-1)
			for(int j=0;j<k;j++)cout<<'_';
		cout<<endl;
	}
}
