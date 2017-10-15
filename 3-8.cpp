#include<iostream.h>
void main()
{
	float x,y,a,b;
	char op;
	cout<<"输入表达式：\n";
	cin>>x>>op>>y;
	if(y%x==0)
	{cout<<x<<op<<y<<'='<<x/y<<endl;}
	if(y%x!=0)
	a=x/y;
	b=x%y;
	{cout<<x<<op<<y<<'='<<a<<b<<endl;}
}