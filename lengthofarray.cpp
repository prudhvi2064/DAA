#include<stdio.h>
int main()
{
	int arr[]={12,13,14,45,67,88,99},n;
	n = sizeof(arr)/sizeof(arr[0]);
	printf("%d",n);
	return 0;
}
