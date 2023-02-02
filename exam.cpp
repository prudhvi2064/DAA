#include<stdio.h>
int main()
{
	int a[]={10,12,32,45,65,78,90,98};
	int m,n,min,max;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter the number");
	scanf("%d",&m);
	
	min = a[n-1];
	max = a[8-m];
	printf("%d is minimum",min);
	printf("   %d is maximum",max);
return 0;	
}
