#include <iostream>
using namespace std;

int n;
int **arr,**greedy;
int big_x,big_y,big_way;

bool inarr(int x, int y)
{
	return x>=0&&x<n&&y>=0&&y<n;
}

int find_the_way(int x, int y)
{
	int way=0;
	int value[5]={-1,-1,-1,-1,-1};
	//self
	value[0]=arr[x][y];
	//up
	if(inarr(x,y-1)) value[1]=arr[x][y-1];
	//down
	if(inarr(x,y+1)) value[2] = arr[x][y+1];
	//left
	if(inarr(x-1,y)) value[3] = arr[x-1][y];
	//right
	if(inarr(x+1,y)) value[4] = arr[x+1][y];
//	cout<<"find way of "<<x<<' '<<y<<endl;
	for(int i=0;i<5;i++)
	{
//		cout<<value[i]<<" ";
		if(value[i]>value[way])
		{
			way=i;
		}
	}
//	cout<<endl;
	
	return way; //1:up, 2:down, 3:left, 4:right, 0:noway
}

int walk(int x,int y)
{
	if(greedy[x][y]!=0) return greedy[x][y];
	int way=find_the_way(x,y);
//	cout<<x<<' '<<y<<"gose "<<way<<endl;
	if(way==0)//self
	{
		greedy[x][y]=arr[x][y];
	}
	else if(way==1)//up
	{
		if(greedy[x][y-1]==0) walk(x,y-1);
		greedy[x][y]=arr[x][y]+greedy[x][y-1];
	}
	else if(way==2)//down
	{
		if(greedy[x][y+1]==0) walk(x,y+1);
		greedy[x][y]=arr[x][y]+greedy[x][y+1];
	}
	else if(way==3)//left
	{
		if(greedy[x-1][y]==0) walk(x-1,y);
		greedy[x][y]=arr[x][y]+greedy[x-1][y];
	}
	else if(way==4)//right
	{
		if(greedy[x+1][y]==0) walk(x+1,y);
		greedy[x][y]=arr[x][y]+greedy[x+1][y];
	}
	return greedy[x][y];
}

int main()
{
	cin>>n;
	arr=new int*[n];
	for(int i=0;i<n;i++)arr[i]=new int[n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			cout<<arr[i][j]<<' ';
//		}
//		cout<<endl;
//	}
	greedy = new int*[n];
	for(int i=0;i<n;i++)greedy[i]=new int[n]{0};
	big_x=0,big_y=0,big_way=arr[0][0];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int temp=walk(i,j);
			if(temp>=big_way)
			{
				big_way=temp;
				big_x=i;
				big_y=j;
			}
		}
	}
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			cout<<greedy[i][j]<<' ';
//		}
//		cout<<endl;
//	}
//	cout<<"***end\n";
	cout<<big_x+1<<' '<<big_y+1<<'\n'<<big_way;
}

