#include<stdio.h>

int main()
{
    int n,i;
    printf("please enter an integer\n");
    scanf("%d",&n);
    while(n!=0)
    {
        if (n%2==0)
            printf("1");
        else
            printf("0");

        n=n/2;
    }
    return 0;
}
