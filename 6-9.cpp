#include <iostream.h>
int fun(int m, int a[])
{
        int n = 0;
        int i;

        for (i = 1; i < m; ++i)
        {
                if (i%7==0 ||i%11==0)
                {
                        a[n] = i;
                        n++;
                }
        }
        return n;
}
void main()
{   
        int n;
        int count;
        int a[100];
        int i;

       cout<<"please input m:";
       cin>>n;

        count = fun(n, a);
        cout<<"<<endl;
        for (i = 0; i < count; ++i)
        {     
			cout<<a[i]<<endl; 
        }
		cout<<"<<count<<endl; 
        return 0;
}
? 2017 GitHub, Inc.