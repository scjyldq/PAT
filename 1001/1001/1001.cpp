#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,residual;
	while(1)
	{
	cin>>a>>b;
	residual=a+b;
	if(residual<0)
	{
		cout<<"-";
		residual=0-residual;
	}

	if(residual>=1000)
	{
		int div=residual/1000;
		if(div>1000)
			{
				cout<<div/1000<<",";
				div=div%1000;
				cout<<setfill('0')<<setw(3)<<div<<",";
		    }
		else cout<<div<<",";
		residual=residual%1000;
		cout<<setfill('0')<<setw(3)<<residual<<endl;
	}

	else
		cout<<residual<<endl;
	}
	//getchar();
	return 0;
}