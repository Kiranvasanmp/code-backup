#include <stdio.h>
int main()
{
   int temp,n,a[]={30,50,20,10,40};
   n=sizeof a/ sizeof a[0];
   printf("before bubble sort\n");
   for(int i=0;i<n;i++)
   printf("%d ",a[i]);
   printf("\n");
   printf("\n");
   printf("after bubble sort\n");
   /*
   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++)
       {
       if(a[i]>a[j])   //ascending order
       //if(a[i]<a[j])   //decending order
       {
           temp = a[i];
           a[i] = a[j];                         
           a[j] = temp;
        }
        }
   }
   *
   */
    for(int i=0;i<n-1;i++)
    {
	    for(int j=0;j<n-i-1;j++)
            {
		    if(a[j]>a[j+1])
                    {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    }
            }
    }


   for(int i=0;i<n;i++)
   printf("%d ",a[i]);
}
