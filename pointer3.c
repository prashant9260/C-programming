#include<stdio.h>
int main()
{
    int i=51;
    int *p=&i;
    int *q=&p;

    printf("%d\n",*p);
    printf("%d\n",**q);

    return 0;
}