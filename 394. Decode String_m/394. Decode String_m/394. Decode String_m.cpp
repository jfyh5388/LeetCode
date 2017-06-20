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
    string decodeString(string s) {
        int i=0;
		string ans="";
		string num;
		string lstr="";
		int loop=0;
		int inum=0;
		int len=s.size();
		while(s.find('[')!=string::npos)
		{
			for(i;i<len;i++)
			{
				if(s[i]>='0'&&s[i]<='9')
				{
					num+=s[i];
				}
				else if(s[i]==']')
				{
					loop=atoi(num.c_str());
					for(int p=0;p<loop;p++)
					{
						ans=ans+lstr;
					}
					lstr="";
					loop=0;
					num="";
				}
				else if(s[i]>='a'&&s[i]<='z')
				{
					lstr+=s[i];
					
				}
			}
			s=ans;
		}
		return ans;
    }
};
int main()
{
	Solution so;
	string ss="3[a2[c]]";
	cout<<so.decodeString(ss)<<endl;
	return 0;

}