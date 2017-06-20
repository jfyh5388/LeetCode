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
class Solution {
public:
    string countAndSay(int n) {
        int i;
        int count=0;
		char mi[100]={0};
        char midpre='1',mid=0;
        string olds="1",news=olds;
        for(i=1;i<n;i++)
        {
            olds=news;
			news="";
			count=0;
            for(int j=0;j<olds.size();j++)
            {
				mid=olds[j];
				if(j==0)
				{
					
					midpre=mid;
					count++;
				}
				else
				{

					if(mid==midpre)
					{
						count++;
					}
					else
					{
						sprintf(mi, "%d", count);
						news=news+mi+midpre;
						count=1;
						midpre=mid;
					}
				}
                
                
            }
			sprintf(mi, "%d", count);
            news=news+mi+mid;
        
        }
        return news;
    }
};
int main()
{
	int m=5;
	Solution so;
	cout<<so.countAndSay(m)<<endl;
	return 0;
}