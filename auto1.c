#include<stdio.h>
 int x =20;
void demo()
{
    int i=10;
    printf("inside demo value of local i is %d\n",i);
    printf("inside demo value of global x is %d\n",x);
}
void hello()
{
    int j=51;
    printf("inside hello value of local j is %d\n",j);
    printf("inside hello value of global x is %d\n",x);
}
int main()
{
printf("inside of global x inside main is:%d\n",x);
demo();
hello();
return 0;
}



