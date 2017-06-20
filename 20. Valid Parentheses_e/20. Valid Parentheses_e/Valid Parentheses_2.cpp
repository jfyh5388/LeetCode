#include<string>
#include<stack>
#include<iostream>
using namespace std;
class Solution {
public:
 bool isValid(string s) {  
     stack<char> st;
       int len=0;
       int i=0;
       char ch;
       len=s.length();
       if(len==0)return true;
       if(len%2!=0)return false;
       for(;i<len;i++)
       {
           if(s[i]=='('||s[i]=='['||s[i]=='{')
           st.push(s[i]);
           else 
           {
               if(st.empty())return false;
               if(s[i]==')')
               {
                    if(st.top()!='(')return false;
                    st.pop();   
                    
               }
               if(s[i]==']')
               {
                    if(st.top()!='[')return false;
                    st.pop();   
                    
               }
               if(s[i]=='}')
               {
                    if(st.top()!='{')return false;
                    st.pop();   
                    
               }
            }
       }
      return st.empty();
 }
 };
void main()
{
	string st="[";
	Solution so;
	cout<<(so.isValid(st)?"true":"false")<<endl;
}