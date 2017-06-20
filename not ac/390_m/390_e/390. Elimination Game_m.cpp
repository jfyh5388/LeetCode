#include<iostream>
#include<vector>
using namespace std;
class Solution 
{
public:
    int lastRemaining(int n) 
	{
        vector<int> ve;
		int loop=1;
		int loop_1=0,loop_2=0;
        for(int i=1;i<=n;i++)
            ve.push_back(i);
		while(ve.size()!=1)
		{
			if(ve.size()%2==1)
			{
				loop_1=ve.size()/2+1;
			}
			else
			{
				loop_1=ve.size()/2;	
			}
			if(loop%2==1)
			{
				for(int j=0;j<loop_1;j++)
				{
					ve.erase(ve.begin()+j);
				}
			}
			else
			{
				for(int i=0;i<loop_1;i++)
				{
					ve.erase(ve.end()-1-i);
				}
			}
			loop++;
		}
		return ve[0];
    }
};
int main()
{
	int nn=1000000;
		   10000000
	int i=1;
	Solution so;
	/*for(i=1;i<=100;i++)
	cout<<i<<" "<<so.lastRemaining(i)<<endl;*/
	cout<<so.lastRemaining(nn)<<endl;

}