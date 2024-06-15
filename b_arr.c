#include<stdio.h>
int main()
{
    int c=0,n, ele,n,a[] = {10,20,22,30,10,40,50,22,10,88,34,50,20,40,30};
    ele=sizeof a/sizeof a[0];
    printf("enter the num\n");
    scanf("%d",&n);
    for(i=0;i<ele;i++)
    {
    if(n==a[i])
    c++;
    }
    printf("%d --> %d",n,c);
}
