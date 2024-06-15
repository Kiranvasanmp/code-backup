#include<stdio.h>
#include<string.h>
void sorting(char*,int);
void capital(char*);
void rem(char*);
int main()
{
	char s1[20],s2[20];
	int i,j,x,y,z;
	printf("enter the string s1:");
	scanf("%[^\n]",s1);
	printf("enter the string s2:");
        scanf(" %[^\n]",s2);
	
	rem(s1);
	rem(s2);
		
	x=strlen(s1);
	y=strlen(s2);
	
	capital(s1);
	capital(s2);
		
	sorting(s1,x);
	sorting(s2,y);
	
	z=strcmp(s1,s2);
	if(z==0)
		printf("it is anagram\n");
	else
		printf("it is not an anagram\n");
}
void rem(char *a)
{
	int i,j;
	for(i=0;a[i];i++)
	{
	if(((a[i]>=97)&&(a[i]<=122))||((a[i]>=65)&&(a[i]<=90)))
		continue;
	else
	{
		for(j=i;a[j];j++)
			a[j]=a[j+1];
	i--;	
	}}}
void capital(char* a)
{
	int i;
	for(i=0;a[i];i++)
	{
		if(a[i]>=97)
			a[i]=a[i]-32;
	}}
void sorting(char*a,int n)
{
	int i,j;
	char temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}}}}
