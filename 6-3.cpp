#include<iostream.h>
void main()
{
	int i,j,sum=0,a[4][4];
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>a[i][j];
		if(i==j)
			sum=sum+a[i][j];
		}
	}
	cout<<"?¡Â???????a????o¨ª¡êo"<<sum<<endl;
	{
		for(i=0;i<4;i++)
  for(j=4;j>i;j--)
		{a[i][j]+=1;
		}
	}
	{
		for(i=0;i<4;i++)
  for(j=0;j<i;j--)
		{a[i][j]-=1;
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	
	cout<<"\n";
}