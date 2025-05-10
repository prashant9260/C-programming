#include<stdio.h>
int Addition( int a, int b)
{
    int Add=0;
    Add=a+b;
    return Add;
}

int main()
{
    int no1=10, no2=20, ans=0;
    ans= Addition(no1,no2);
    printf("addition is : %d\n",ans);

    return 0;
}