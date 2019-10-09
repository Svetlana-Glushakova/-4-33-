#include <stdio.h>
#include <stdlib.h>

void perevod(int kolvo,int arr[])
{
	int i=0,k,x=0,W,fl,sum=0,count=0;
	int *arr_d,*arr1;
	arr_d=(int*)calloc(kolvo,sizeof(int));
	for(i=0; i!=kolvo; i++)
	{
		arr1[i]=arr[i];
	}
	
	for(i=0; i!=kolvo; i++)
	{
		while (arr[i]!=0)
	    {
		    k=arr[i]%10;
		    arr[i]=arr[i]/10;
		    W=1;
		    fl=count;
		    if(k==1)
		    {
			    if(fl==0)
			    {
				    sum++;
			    }else 
			    {
				    while(fl>0)
		            {
			            W=W*2;
			            fl--;
		            }
		            sum=sum+W;
			    }
		    }
		    count++;
	    }
	    arr_d[x]=sum;
	    x++;
	    sum=0;
	    count=0;
	}
	for (x=0; x!=kolvo; x++)
	{
		printf("Binary  %5d; Decimal  %3d\n", arr1[x], arr_d[x]);
	}
}



int main()
{
	char kolvo;
	int i=0,n=0;
	int *arr,*arr_d;
	printf("Enter the number of numbers\n");
	scanf("%d", &kolvo);
	arr=(int*)calloc(kolvo,sizeof(int));
	printf("\nEnter %d",kolvo);printf(" numbers\n");
	while(i<kolvo)
	{
		scanf("%d", arr+i);
		i++;
	}
	perevod(kolvo,arr);
	
	return 0;
}
