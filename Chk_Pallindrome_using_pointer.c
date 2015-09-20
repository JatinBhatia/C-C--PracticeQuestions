#include<stdio.h>

main()
{
    char str[50];
    char *f,*l;
    gets(str);
    f=str;
    l=&str[(strlen(str)-1)];//str +length
    for(;f<l;f++,l--)
    {
        if(*f!=*l)
            {
                printf("Not a pallindrome");
                exit(0);
            }
    }
    printf("It is a Pallindrome");

}
