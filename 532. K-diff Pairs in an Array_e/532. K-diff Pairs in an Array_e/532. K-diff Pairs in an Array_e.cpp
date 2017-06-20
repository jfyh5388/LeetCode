#include <iostream>
#include <unordered_set>
#include <set>
#include <map>
#include <vector>
using namespace std;
class Solution {
public:
    int findPairs(vector<int>& nums, int k) 
    {
        int ans=0;
        int i=0,j=0;
		int small=0,big=0;
		int abs=0;
        int len=nums.size();
        map<int,int> ma;
		for(i=0;i<len;i++)
			ma[nums[i]]++;
		if(k>0)
		{
			for(auto it=ma.begin();it!=ma.end();it++)
			{
				if(ma.find(it->first+k)!=ma.end())
				{
						ans++;
				}
			}
		}
		else if(k==0)
		{
			for(auto it=ma.begin();it!=ma.end();it++)
			{
				if(it->second>1)
					ans++;
			}
		}
        return ans;    
    }
};
int main()
{
	vector<int> a;
	int k=0;
	Solution so;
	a.push_back(1);
	a.push_back(3);
	a.push_back(1);
	a.push_back(5);
	a.push_back(4);
	cout<<so.findPairs(a,k)<<endl;
	return 0;
}
