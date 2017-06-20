#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <string>
using namespace std;
class Solution 
{
public:
    bool validUtf8(vector<int>& data) 
    {
        int i=0;
        int len=data.size();
        for(;i<len;)
        {
			if(len-i>=1&&data[i]<=127)
			{
				i++;
				continue;
			}
			else if(len-i>=2&&data[i]>=192&&data[i]<=223&&data[i+1]>=128&&data[i+1]<=191)
			{
				i=i+2;
				continue;
			}
			else if(len-i>=3&&data[i]>=224&&data[i]<=239&&data[i+1]>=128&&data[i+1]<=191&&data[i+2]>=128&&data[i+2]<=191)
			{
			   i=i+3;
			   continue;
			}
			else if(len-i>=4&&data[i]>=240&&data[i]<=247&&data[i+1]>=128&&data[i+1]<=191&&data[i+2]>=128&&data[i+2]<=191&&data[i+3]>=128&&data[i+3]<=191)
			{
			   i=i+4;
			   continue;
			}
			else
				return false;
		}
			return true;
	}
};
int main()
{
	Solution so;

	return 0;

}