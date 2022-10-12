#include<stdio.h>

int main()
{
	int n,i;
	printf("Enter the number of elements");
	scanf("%d",&n);
	int a[n],s,e=n-1,b=0;
	printf("\n Now enter an array in increasing order");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the number to be searched");
	scanf("%d",&s);
	int mid;
	while(b<=e)
	{	mid=(e+b)/2;
	
		if(a[mid]==s)
		{		
				break;
		}
		else if(a[mid]>s)
		{
			e=mid-1;
		}
		else if(a[mid]<s)
		{
			b=mid+1;
		}
		
		
		
	}
	if(b<=e)
		printf("\nThe position at which the number is found is %d",mid+1);
	else if(e<b)
		printf("\nYour entered number does not exist in the array");
	
	return 0;
}
