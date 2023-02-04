#include<stdio.h>
int PerfectNum(int n,int sum,int b)
{
if(n%b==0 && b<n)
{
    sum=sum+b;
}
    if(b<n) {
    b++;
    PerfectNum(n,sum,b);
    }
    else if(b==n) {
    return sum;
    }
}
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int i,sum=0,b=1;
    sum=PerfectNum(n,sum,b);
    if(sum==n) {
    printf("\n%d is a perfect number.",n);
    }
    else {
    printf("\n%d is not perfect number.",n);
    }
}


