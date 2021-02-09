#include<stdio.h>
char str;
int strlen (char str[])
{
    int i=0;
    scanf("%s",str);
    while(str[i]!=' \0')
        i++;
        return i;

}
int main()
{
    int j;
    j=strlen(str);
    printf("%d\n",j);

    return 0;
}
