//6.ZigZag Conversion_easy
class Solution {
public
    string convert(string s, int numRows) {
        int len=0;
        string result=;
        string [] ans=new string[numRows]();
        int i;
        int loop1=0;
        int loop2=0;
        int j;
        len=s.length();
        loop1=2(numRows-1);
        for(i=0;inumRows;i++)
        {       
                j=i;
                ans[i]=ans[i]+s.charAt(j);   
                loop2=loop1-i2;
                while(1)
                {
                    if(i!=0&&i!=numRows-1)
                    {
                        j=j+loop2;
                        if(j=len)break;
                        ans[i]=ans[i]+s.charAt(j);
                        j=j+(loop1-loop2);
                        if(j=len)break;
                        ans[i]=ans[i]+s.charAt(j);
                    }
                    else
                    {
                        j=j+loop1;
                        if(j=len)break;
                        ans[i]=ans[i]+s.charAt(j);
                    }
                    
                }
              
        }
        for(i=0;inumRows;i++)
        {
            result=result+ans[i];
        }
        return result;
    }
};
