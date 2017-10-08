#include<iostream.h>
void main()
{
	int score;
	cin>>score;
   switch(score)
   {
case 10000:
case 1000:cout<<score<<":10000~\n";break;
case 999:
case 100:cout<<score<<":100~999\n";break;
case 99:
case 10:cout<<score<<":10~99\n";break;
case 9:
case 0:cout<<score<<":~10\n";break;
   }
