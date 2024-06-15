#include<stdio.h>
#include<string.h>
void sort(struct st *);
struct st
{
    int roll;
    char name[20];
    float marks;
}s[5];
int main()
{
	int *p = &op;
        sort(&op);
}
void sort(struct st *p)
{
	 int i,j;
        char ch[20];
for(i=0;i<5;i++)
{
printf("Enter The Student %d Details:\n",i);
scanf("%d%s%f",&s[i].roll,s[i].name,&s[i].marks);
}
printf("Before sorting\n");
for(i=0;i<5;i++)
printf("\n%d  %s  %f\n",s[i].roll,s[i].name,s[i].marks);

printf("1.roll sort, 2.name sort, 3.mark sort\n");
scanf("%c",op);
}
switch(op)
{
case '1':printf("roll number sorting");
for(i=0;i<5;i++)
{
    for(j=0;j<5-1-i;j++)
    {
       if((s[j].roll>s[j+1].roll)&&(j!=5-i) )
       {
         s[j].roll=s[j].roll+s[j+1].roll-(s[j+1].roll=s[j].roll) ;

        strcpy(ch,s[j].name);
       strcpy(s[j].name,s[j+1].name);
        strcpy(s[j+1].name,ch);

        s[j].marks=s[j].marks+s[j+1].marks-(s[j+1].marks=s[j].marks) ;

       }}}
break;
case '2': printf("name sorting");
for(i=0;i<5;i++)
{
    for(j=0;j<5-1-i;j++)
    {
       if((s[j].roll>s[j+1].roll)&&(j!=5-i) )
       {
         s[j].roll=s[j].roll+s[j+1].roll-(s[j+1].roll=s[j].roll) ;

        strcpy(ch,s[j].name);
        strcpy(s[j].name,s[j+1].name);
        strcpy(s[j+1].name,ch);

        s[j].marks=s[j].marks+s[j+1].marks-(s[j+1].marks=s[j].marks) ;

       }}}
break;
case 3:printf("marks sorting");
for(i=0;i<5;i++)
{
    for(j=0;j<5-1-i;j++)
    {
       if((s[j].roll>s[j+1].roll)&&(j!=5-i) )
       {
         s[j].roll=s[j].roll+s[j+1].roll-(s[j+1].roll=s[j].roll) ;

        strcpy(ch,s[j].name);
        strcpy(s[j].name,s[j+1].name);
        strcpy(s[j+1].name,ch);

        s[j].marks=s[j].marks+s[j+1].marks-(s[j+1].marks=s[j].marks) ;

       }}}
break;
default: printf("enter the value op");
break;
}
