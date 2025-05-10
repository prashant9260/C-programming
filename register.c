#include<stdio.h>
void demo()
{
    auto int i;
    register int j; 
    printf("value of i\n",&i);
    printf("value of j\n",j);

}
int main()
{
    demo();
    return 0;
}
