#include<stdio.h>
#include<string.h>
int i;
struct st
{
int roll;
char name [100];
float marks;
};

void setdata(struct st*,int);
void print(struct st*, int);
void sort(struct st*,int);
void roll(struct st*, int);
void marks(struct st*, int);
void name(struct st*, int);

int main()
{
    int n;
    printf("Enter no. of students data:\n");
    scanf("%d",&n);

    struct st d[n];
    setdata(d,n);
    sort(d,n);
}
void sort(struct st*d, int n)
{
    int op;
    printf("\nselect sorting mode\n1.roll.no \n2.name \n3.marks \n");
    scanf("%d",&op);

    switch(op)
    {
        case 1:roll(d,n);
        printf("based on roll.no\n\n");
        print(d,n);
        break;
        case 2: name(d,n);
        printf("based on names\n\n");
        print(d,n);
        break;
        case 3:marks(d,n);
        printf("based on marks\n\n");
        print(d,n);
        break;
    }
}
void roll(struct st*d, int n)
{
    int j;
    struct st temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((d+i)->roll>(d+j)->roll)
            {
                temp=d[i];
                d[i]=d[j];
                d[j]=temp;
            }}}}
void name(struct st*d, int n)
{
    int j,x;
    struct st temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            x=strcmp((d+i)->name, (d+j)->name);
            if(x>0)
            {
                temp=d[i];
                d[i]=d[j];
                d[j]=temp;
            }}}}

void marks(struct st*d, int n)
{
	int j;
	struct st temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((d+i)->marks<(d+j)->marks)
			{
				temp=d[i];
				d[i]=d[j];
			       	d[j]=temp;

       			 }}}}

void setdata(struct st*d, int n)
{
    printf("enter roll.no, name, marks\n");
    for(i=0;i<n;i++)
    scanf("%d %s %f",&(d+i)->roll, (d+i)->name, &(d+i)->marks);
}

void print(struct st *d, int n)
{
    for(i=0;i<n;i++)
    printf("%d %s %.2f\n", (d+i)->roll, (d+i)->name, (d+i)->marks);
}
