#include<iostream>
#include<memory.h>
#include<math.h>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
//	ifstream cin("test.txt");
	double A[1001],B[1001];
	memset(A,0,sizeof(double)*1001);
	memset(B,0,sizeof(double)*1001);
	int itemNo,indexA,indexB,outNo=0;
	cin>>itemNo;
	while(itemNo)
	{
		cin>>indexA;
		cin>>A[indexA];
		itemNo--;
	}
	cin>>itemNo;
		while(itemNo)
		{
			cin>>indexB;
			cin>>B[indexB];
			itemNo--;
		}
		for(int i=0;i<1001;i++)
		{
			if(fabs(A[i]+B[i])>10e-5)
				outNo++;
		}
		cout<<outNo;
		for(int i=1000;i>=0;i--)
			if(fabs(A[i]+B[i])>10e-5)
				cout<<" "<<i<<" "<<setiosflags(ios::fixed) << setprecision(1)<<A[i]+B[i];
		cout<<endl;
//		getchar();
	return 0;
}