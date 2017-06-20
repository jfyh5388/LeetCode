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
	map<char,int> ma;
	map<char,int>::iterator it;
	int havem(string st,int m)
	{
		int len=st.size();
		int i=0;
		int j=0;  
		int cha=0;
		for(;i<len;i++)
		{
			ma[st[i]]++;
		}
		for(it=ma.begin();it!=ma.end();++it)
		{
			if(it->second<m)
			{
				ma.clear();
				return 0;
			}
		}
		ma.clear();
		return 1;
	}

    int longestSubstring(string s, int k)
	{
        int len=s.size();
		int p=0;
		int del=0;
		string mid="";
		if(k>len)
			return 0;
		while(len!=0)
		{
			for(p=0;p<=del;p++)
			{
				mid=s.substr(0+p,len);
				if(havem(mid,k)==1)
					return mid.size();
			}
			len--;
			del++;			
		}
		return 0;

    }
};

int main()
{
	string s="ab";
	int k=100000;
	Solution so;
	cout<<so.longestSubstring(s,k)<<endl;
	return 0;
}
