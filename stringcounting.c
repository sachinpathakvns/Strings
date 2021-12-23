#include <stdio.h>
int main()
{
    char ch[100];
    int i, upercount = 0,lowercount = 0,digit=0,ano=0;
    printf("ENTERR\n");
    gets(ch);
    for (i = 1; ch[i]!=0; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            upercount++;
        }
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            lowercount++;
        }
        if (ch[i] >= '0' && ch[i] <= '9')
        {
            digit++;
        }
        else
        {
            ano++;
        }
        
    }
     printf("UPPER %d\n", upercount);
     printf("LOWER %d\n", lowercount);
     printf("digit %d\n",digit);
     printf("another %d\n",ano);

}