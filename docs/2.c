#include<stdio.h>

void swap(int* x,int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int a,b;
    printf("please enter the value of a\n");
    scanf("%d",&a);
    printf("please enter the value of b\n");
    scanf("%d",&b);
    swap(&a,&b);
    printf("the exchanged values are a=%d and b=%d\n",a,b);


    return 0;
}
