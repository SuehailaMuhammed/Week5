#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Enter two values:");
    scanf("%d\n%d",&x,&y);
    printf("%d",fun(&x,&y));
    return 0;
}
int fun(int *ptr1,int *ptr2)
{
    int z;
    z=*ptr1+*ptr2;
    return z;
}
