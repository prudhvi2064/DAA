#include <stdio.h>
void swap(int a ,int b )
{
	int temp = a;
	a = b;
	b= temp;
	printf("%d %d",a , b);
	
}
int main()
{
	swap(100,23);
	return 0;
}
