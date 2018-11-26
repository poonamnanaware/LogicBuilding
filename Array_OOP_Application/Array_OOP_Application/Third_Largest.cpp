#include<stdio.h>

int ThirdMax(int *arr,int);

int main()
{
	int arr[20];

	int i=0,iRet=0,n=0;

	printf("\nEnter Array Elements:-");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");

	iRet=ThirdMax(arr,n);

	printf("Third Maximum:-%d",iRet);

	return 0;
}

int ThirdMax(int arr[],int value)
{
	int m1=arr[0];
	int m2=arr[0];
	int m3=arr[0];
	int i=0;

	for(i=0;i<value;i++)
	{
		if((arr[i]>m1)&&(arr[i]>m2)&&(arr[i]>m3))
		{
			m3=m2;
			m2=m1;
			m1=arr[i];
		}
		else if((arr[i]<m1)&&(arr[i]>m2)&&(arr[i]>m3))
		{
			m3=m2;
			m2=arr[i];
		}
		else if((arr[i]<m1)&&(arr[i]<m2)&&(arr[i]>m3))
		{
			m3=arr[i];
		}
		else if(m2==m3)
		{
			m3=arr[i];
		}
	}
	return m3;
}
