#include <stdio.h>
#include<string.h>
int isLetter(char ch);
int main()
{
    char ch[100];
    char prev,current;
    int n = sizeof(ch) / sizeof(char), i;
    printf("ENTER\n");
    gets(ch);
    for(i=1;ch[i]!='\0';i++)
    {
        prev=ch[i-1];
        current=ch[i];
        printf("%c",current);
        if(isLetter(prev) && !isLetter(current))
        printf("\n");
        
    }
    return 0;
}
int isLetter(char ch)
{
    if(ch>='a' && ch<='z')
    return 1;
    if(ch>='A' && ch<='Z')
    return 1;
    return 0;
}