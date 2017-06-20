#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution 
{
public:
    vector<int> lexicalOrder(int n) 
	{
        int i=1;
		int j=0;
		int ins=0;
		char str_mid[10]="0";
		int in_mid=0;
		vector<int> ans;
		char str_com[10]="1";
		ans.push_back(1);
		for(i=2;i<=n;i++)
		{
			sprintf(str_mid,"%d",i);
			ins=0;
			for(j=0;j<ans.size();j++)
			{
				sprintf(str_com,"%d",ans[j]);
				if(strcmp(str_mid,str_com)<0)
				{
					sscanf(str_mid,"%d",&in_mid);
					ans.insert(ans.begin()+j,in_mid);
					ins=1;
					break;
				}				
			}
			if(ins==0)
				ans.push_back(i);
			
		}
		return ans;
    }
};
int main()
{
	int n=998;
	vector<int> ivec;
	vector<int>::iterator int_ite;
	Solution s; 
	ivec=s.lexicalOrder(n);
	for(int_ite=ivec.begin();int_ite!=ivec.end();int_ite++)
		cout<<"ivec: "<<*int_ite<<endl;
	return 0;
}