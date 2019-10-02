#include <stdio.h>

int main()
{
	int n,W,k;
	char str_1[100],*str_2;
	
		int x=0;
		int count=0,sum=0;
		printf("Enter:\n");
	scanf("%s", str_1);
	for(n=0; str_1[n]!='\0'; n++)
	{
		count++;
	}
	n=0;
	while(str_1[n]<='1' && str_1[n]>='0' && str_1[n]!='\0')
	{
		str_2[x]=str_1[n];
		x++;
		k=count;
		W=1;
		if(str_1[n]=='1')
		{
			while(k!=1)
		    {
			    W=W*2;
			    k--;
		    }
		    sum=sum+W;
		}
		count--;
		n++;
	}
	if((str_1[n]<='1' && str_1[n]>='0') || str_1[n]=='\0')
	{
		printf("Binary number = %s  ", str_2);
	    printf("\nDecimal number = %d\n", sum);
	}else
	printf("Error\n");
	return 0;
}
