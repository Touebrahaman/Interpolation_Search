#include<stdio.h>
int main()
{
	int n,i,element,found=0;
	//int arr[]={12,23,31,45,56,60};
	printf("enter size of an array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array's elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array's elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	int low=0,high=n-1;
	printf("enter which element you will find\n");
	scanf("%d",&element);
	while(low<=high&&element>=arr[low]&&element<=arr[high])
	{
		int pos;
		pos=low+(((element-arr[low])*(high-low))/(arr[high]-arr[low]));
		if(element<arr[pos])
		{
			high=pos-1;
		}
		else if(element>arr[pos])
		{
			low=pos+1;
		}
		else if(element==arr[pos])
		{
			printf("element found at location %d\n",pos);
			found=1;
			break;
		}
	}
	if(!found)
	{
		printf("element not found\n");
	}
	return 0;
}
