#include<stdio.h>
int main()
{
    int a=10;
    int *aptr=&a;
    printf("%d\n",*&a);
    return 0;
}