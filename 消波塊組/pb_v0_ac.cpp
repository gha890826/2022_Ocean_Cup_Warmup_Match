/*
 9��A�C��]�t�@�Ӿ��x<=100
 �e�|��]�t�C�ӥ\�Ҧ��Z
 �a5�������
 ��6-8�� winning rate
 9 �������i 
*/

#include <iostream>
using namespace std;

int main()
{
	float score[9];
	for(int i=0;i<9;i++)
	{
		cin>>score[i];
	}
	
	float final=0;
	
	for(int i=0;i<4;i++)
	{
		final+=score[i]*0.1;
	}
	//cout<<"final= "<<final<<endl;
	
	final += score[4]*0.3; //midterm
	
	float proj=0;
	for(int i=5;i<8;i++)
	{
		proj+=score[i]*0.2;
	}
	proj+=score[8];
	//cout<<"proj= "<<proj<<endl;
	
	final+=proj*0.3;
	
	if(final>=90)
		cout<<"A+";
	else if(final>=85)
		cout<<"A";
	else if(final>=80)
		cout<<"A-";
	else if(final>=77)
		cout<<"B+";
	else if(final>=73)
		cout<<"B";
	else if(final>=70)
		cout<<"B-";
	else if(final>=67)
		cout<<"C+";
	else if(final>=63)
		cout<<"C";
	else if(final>=60)
		cout<<"C-";
	else
		cout<<"F";
		
}
