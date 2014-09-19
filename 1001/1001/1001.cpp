#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,residual;
	cin>>a>>b;
	residual=a+b;
	if(residual<0)
	{
		cout<<"-";
		residual=0-residual;
	}
	if(residual>=1000000)
		cout<<residual/1000000<<","<<setfill('0')<<setw(3)<<(residual%1000000)/1000<<","<<setfill('0')<<setw(3)<<((residual%1000000)%1000);
	else if(residual>=1000)
		cout<<residual/1000<<","<<setfill('0')<<setw(3)<<(residual%1000);
	else
		cout<<residual<<endl;
	return 0;
}