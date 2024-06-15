#include<stdio.h>
int main() 
{
    int len=0,i,c;
    char s[100],s1[100];
    printf("enter the string:\n");
    scanf("%[^\n]",s);
    printf("%s",s);
    printf("\n");
    for(i=0;s[i]!='\0';i++){
        c++;
    }
    len=i;
    printf("%d\n",len);
    
    for(i=len-1;s[i];i--)
    printf("%c",s[i]);
}
