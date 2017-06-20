#include<vector>
#include<iostream>
#include<map>
using namespace std;
class NumArray {
private:
	map<pair<int,int>,int> map_count;
public :
	NumArray(vector<int> &nums) 
	{
		int sum=0;
		for (int i = 0; i < nums.size(); i++) 
		{
			sum = 0;
			for (int j = i; j < nums.size(); j++) 
			{
				sum += nums[j];
				map_count.insert(pair<pair<int,int>,int>(make_pair(i,j),sum));
			//	map_count.insert(make_pair(make_pair(i,j),sum));
			}
		}
    }
	int sumRange(int i, int j) 
	{
		return map_count[make_pair(i,j)];
    }
};
int main()
{
	int num[6]={-2, 0, 3, -5, 2, -1};
	vector<int> num_ve(num,num+6);
	NumArray numar(num_ve);
	cout<<numar.sumRange(0,2)<<endl;
	cout<<numar.sumRange(2,5)<<endl;
	cout<<numar.sumRange(0,5)<<endl;
	return 0;
}