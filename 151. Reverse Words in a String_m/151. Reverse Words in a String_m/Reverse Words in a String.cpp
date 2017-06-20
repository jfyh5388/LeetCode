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
    void reverseWords(string &s) 
	{
		int len=s.size();
		int i=0;
		int start=0;
		string word="";
		string ans="";
		for(i=len-1;i>=0;i--)
		{
			if(s[i]==' ')
			{
				start=1;				
			}
			else
			{
				if(start==1)
				{
					ans=ans+word;
					if(ans!="")
						ans+=" ";
					start=0;
					word.clear();
				}
				word=word.insert(0,1,s[i]);
			}
		}
		ans=ans+word;
		s=ans;
    }
};
int main()
{
	string s="theb";
	Solution sol;
	sol.reverseWords(s);
	cout<<s<<endl;
	return 0;
}