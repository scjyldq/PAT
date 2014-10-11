#include<iostream>
#include<vector>
using namespace std;
struct Node
{
	int start;
	int sum;
	int num;
};
int main()
{
	vector<Node> Seq;
	int k;
	scanf("%d",&k);
	Seq.resize(k);
	for(int i=0;i<k;i++)
		scanf("%d",&Seq[i].num);
	//find the largest sum end up with i;
	Seq[0].start=0;
	Seq[0].sum=Seq[0].num;
	for(int i=1;i<k;++i)
	{
		if(Seq[i-1].sum >=0)
		{
			Seq[i].sum=Seq[i-1].sum+Seq[i].num;
			Seq[i].start=Seq[i-1].start;
		}
		else
		{
			Seq[i].sum=Seq[i].num;
			Seq[i].start=i;
		}
	}
	int maxK=0;
	//find the largest sum;
	for(int i=1;i<k;i++)
		if(Seq[i].sum>Seq[maxK].sum)
			maxK=i;
	//output;
	if(Seq[maxK].sum<0)
		printf("0 %d %d\n",Seq[0].num,Seq[k-1].num);
	else
		printf("%d %d %d\n",Seq[maxK].sum,Seq[Seq[maxK].start].num,Seq[maxK].num);
	//getchar();
	return 0;
}