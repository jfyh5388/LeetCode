#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int findNthDigit(long long n) {
		long long len=1;
		long long count=9;
		long long start=1;
		long long num=0;
		char ans[100]={0};
		if(n<=0)
			return 0;
		while(n>len*count)
		{
			n-=len*count;		
			count*=10;
			start*=10;			
			len+=1;
		}
		num=start+(n-1)/len;
		sprintf(ans,"%d",num);
		return ans[(n-1)%len]-'0';
    }
};
int main()
{
	Solution so;
	cout<<so.findNthDigit(1000000000)<<endl;
	return 0;
}