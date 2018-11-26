#include<stdio.h>

void fun(int *p,int a[5])
{
	int i=0;
	for(i=0;i<5;i++)
	{
		printf("\n%d \t %d\n",*p,a[i]);
		p++;
	}
	printf("\n%d\t%d\t%d\n",sizeof(p),sizeof(*p),sizeof(a));
}


int main()
{
	int arr[]={10,20,30,40,50};
	fun(arr,arr);
	return 0;
}
