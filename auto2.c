#include<stdio.h>
int a= 9260;
void practice()
{
    int x=5555;
    printf("inside practice value of local x is %d\n", x);
} 
char demo()
{
    char p=shree swami samarth;
    printf(" inside demo value of local p is %d\n", p);
}
int main()
{
    printf("value of global a is %d\n",);
    practice();
    demo();
    return 0;
}