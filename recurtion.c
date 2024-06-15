// Online C compiler to run C program online
#include <stdio.h>
int fact(int);
int main() {
    int f,n;
    printf("enter the num:");
    scanf("%d",&n);
   f= fact(n);
   printf("%d",f);
    return 0;
}
int fact(int n)
{
    if(n==1)
    return 1;
    return  n* fact(n-1);
}
