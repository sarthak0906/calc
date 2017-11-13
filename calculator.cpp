#include<iostream>
using namespace std;
int main()
{
	double var1,var2,result,a;
	char x;
	cin >> var1;
	for (a=1;a>0;a++)
	{
		cin>>x;
		
		if (x=='+')
		{
			var2=var1;
			cin >> var1;
			result = var1+var2;
			cout<<result;
			var2=result;
			
		}
		
		if (x=='-')
		{
			var2=var1;
			cin >> var1;
			result = var1-var2;
			cout<<result;
			var2=result;
			
		}
		
		if (x=='*')
		{
			var2=var1;
			cin >> var1;
			result = var1*var2;
			cout<<result;
			var2=result;
			
		}
		if (x=='/')
		{
			var2=var1;
			cin >> var1;
			result = var2/var1;
			cout<<result;
			var2=result;
			
		}
		
		if (x=='=')
		{
			a= -1;
			/*exits the loop*/
		}
	}
	return 0;
}
