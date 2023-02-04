

#include <stdio.h>
int main() {

  int i, n,sum;
  int t1 = 0, t2 = 1;

  int nextTerm = t1 + t2;
  printf("enter the terms   ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", t1, t2);
  for (i = 3; i <= (n*2); ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    sum =0;
    nextTerm = t1 + t2;
    if (i%2==0)
    {
    	sum = sum + nextTerm;
	}

  }
printf("sum of even positions %d",sum);
  return 0;
}

