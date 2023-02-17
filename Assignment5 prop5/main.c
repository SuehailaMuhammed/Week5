#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x=4,y=6,z=8;
    int *px=&x, *py=&y, *pz=&z;
    printf("%d %d %d %d %d %d %d %d %d\n",x,y,z,px,py,pz,*px,*py,*pz);
    printf("Swapping Pointers:");
    pz=px;
    px=py;
    py=pz;
    printf("%d %d %d %d %d %d %d %d %d\n",x,y,z,px,py,pz,*px,*py,*pz);

    return 0;
}
