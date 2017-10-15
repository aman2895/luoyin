#include<iostream.h>
void main()
{
  int score,a;
  cout<<"please input score:"<<endl;
	  cin>>score;
  if(score%3==0);
	 a=1;
	 if(score%7==0)
		 a=1;
  else
	 a=0;
  if(a==1)
	cout<<score<<":yes\n";
	else
		cout<<score<<":no\n";
}