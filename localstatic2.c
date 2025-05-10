#include<stdio.h>
void display()
{
    static int i=9258;
    i++;
    printf("value of i is %d\n",i);
}
int main()
{
    display();
    display();
    display();
    return 0;
}