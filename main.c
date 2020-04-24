#include <stdio.h>
#include "msp.h"

int main()
{
    int iX,iY;
    iX = 1;
    iY = 2;
    // struct complex fu={
    // 	real:1.1 ,
    // 	imag:2.2
    // };
    // fu = {1.1 , 2.2};
    // struct complex fu ;
    // fu.real =1.1;
    // fu.imag =2.2 ;
    printf("f\n",fu.real);
    printf("hello world:x=%d,y=%d\n",iX,iY);
    mspbfct(iX,iY);
    printf("hello world:x=%d,y=%d\n",iX,iY);
    return 0;
}
