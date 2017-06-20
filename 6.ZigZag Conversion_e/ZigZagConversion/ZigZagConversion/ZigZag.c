#include<stdio.h>
#include<string.h>
char* convert(char* s, int numRows) 
{
	int len=0;
	char result[65530]={0};
	char ans[1000][100];
	int i;
	int loop1=0;
	int loop2=0;
	int j;
	int wei=0;
	memset(ans,0,1000*sizeof(ans[0]));
	len=strlen(s);
	if(numRows==1)
		return s;
	else
	{
		loop1=2*(numRows-1);
		for(i=0;i<numRows&&i<len;i++)
		{      
			wei=0;
  			j=i;
			ans[i][wei++]=s[j];
			loop2=loop1-i*2;
			while(1)
			{
				if(i!=0&&i!=numRows-1)
				{
					j=j+loop2;
					if(j>=len)break;
					ans[i][wei++]=s[j];
					j=j+(loop1-loop2);
					if(j>=len)break;
					ans[i][wei++]=s[j];
				}
				else
				{
					j=j+loop1;
					if(j>=len)break;
					ans[i][wei++]=s[j];
				}
                    
			}
		}
	for(i=0;i<numRows;i++)
	{
		strcat(result,ans[i]);
	}
	return result;
	}
}

void main()
{
	char *s="ucqxswyqdntdmfrtzlqsekejhzksklfepxchvczysvdgcxbbiswmeaylzifktmoikssfxtgpojxqiysrsqfwqdjqnqcgdqrnlluieazvmwnuufnnxvloyvgmliuqandlyavfauaosnlnvacsvpiumoiawcqxswkqwgxyazntnaikameybnuqbcqaggxachrynqxqqmlfotpqhvokiiammqmvxjvbsoaifzyxnjcberrnmixxsyjhovengbpyqrixqgwdrygxrxkfhicainhwilkqmbpeszdigznzxtzqsjwatycbmjawwmninepfduplucltxmkpvgrrgtuseurageltkcapwpbqromqawixezqkvlfbhwcocpjmrmbpbegvsuluqtuuvkesvjtdhvtjmexfqbvufdpaxcwnwqjtbplyzedicwsodpwtqrpyuearhwgfnpaqelofrsotqiktxipqzeqvlqmuoubbjbrpmixfclbstnosvdkujcpwsdqhxrkiueziowoqjpiecwxxbjtnmkjgncpmvauqgtausokbfugjtfiu";

	int n=199;
	printf("%s",convert(s,n));

}