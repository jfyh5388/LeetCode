#include<iostream>
#include<vector>
#define uint32_t unsigned int
using namespace std;
class Solution 
{
public:
    uint32_t reverseBits(uint32_t n) 
    {
        vector<int> bits(32,0);
        int i=0;
        uint32_t ans=0;
        uint32_t mul=1;
        while(n)
        {
            bits[i]=n%2;
            n=n/2;
            i++;
        }
        for(i=0;i<32;i++)
        {
            if(bits[31-i])
                ans=ans+bits[31-i]*mul;
            mul=mul*2;
        }
        return ans;
    }
};
int main()
{
	Solution s;
	cout<<s.reverseBits(1)<<endl;
}