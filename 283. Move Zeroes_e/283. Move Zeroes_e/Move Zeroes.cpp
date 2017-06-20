#include<iostream>
#include<vector>
using namespace std;
class Solution 
{
public:
    void moveZeroes(vector<int>& nums) 
	{
		int len=nums.size();
		for(int j=0,ci=0;ci<len;ci++)
		{
			if(nums[j]==0)
			{
				nums.erase(nums.begin()+j);
				nums.push_back(0);
				j--;
			}
			j++;
		}		
    }
};
int main()
{
	int n[5]={0,0,2};
	vector<int> ns(n,n+3);
	Solution so;
	so.moveZeroes(ns);
	for(int i=0;i<ns.size();i++)
	cout<<ns[i]<<endl;
	return 0;	
}