#include<stdio.h>
bool isPalindrome(int x) 
{
    int len_l=0,len=0,len_cha=0,i,m=0,n=0,di=1,mid=x;
    if(x<0)
		return false;
	else if(x==0)
		return true;
    else
    {
        while(x)
		{	
			for(mid=x,len=0,di=1;mid;mid=mid/10,len++);
			if(len_l>len)
			len_cha=len_l-len-2;
			while(len_cha)
			{
				if(x%10!=0)return false;
				x=x/10;
				len_cha--;
				len--;
			}
				

			len_l=len;
			if(len==1) return true;
			while(len-1)
			{
				di=di*10;
				len--;
			}
			m=x%10;
			n=x/di;
			if(m!=n)return false;
			else
				x=x%di/10;
		}
		return true;
    }    
}
void main()
{
	int a=1012101;
	printf("%s",isPalindrome(a)==true?"ture":"false");

}