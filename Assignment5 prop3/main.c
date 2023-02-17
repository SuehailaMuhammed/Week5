#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    int c[3]={0};
    fun(a,b,c,3);
    for(int i=0;i<3;i++)
    {
        printf("%d ",*(c+i));
    }

    return 0;
}
void fun(int *a,int *b,int *c,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        *(c+i)=*(a+i)**(b+i);

    }


}
