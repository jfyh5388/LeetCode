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
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        int sum=0;
        int sumpre=0,sumnow=0;
        int max=0;
        for(int i=0;i<A.size();i++)
        {
            sum=sum+A[i];
            sumpre=sumpre+i*A[i];
        }
        max=sumpre;
        for(int i=1;i<A.size();i++)
        {
            sumnow=sumpre+sum-A.size()*A[A.size()-i];
            if(sumnow>max)
                max=sumnow;
            sumpre=sumnow;
        }
        return max;
    }
};
int main()
{
	Solution so;
	vector<int> a;
	a.push_back(4);
	a.push_back(3);
	a.push_back(2);
	a.push_back(6);
	cout<<so.maxRotateFunction(a)<<endl;
	return 0;
}