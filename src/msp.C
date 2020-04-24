#include "msp.h"

float mabs(complex a)
{
 float m;
 m=a.real*a.real+a.imag*a.imag;
 m=sqrt(m);
 return(m);
 }
/*-------------------------------------------------------------------*/
float msign(float a,float b)
{
 float z;
 if(b>=0) z=sqrt(pow(a,2));
 else z=-sqrt(pow(a,2));
 return(z);
 }
/*-------------------------------------------------------------------*/
complex cexp(complex a)
{
 complex z;
 z.real=exp(a.real)*cos(a.imag);
 z.imag=exp(a.real)*sin(a.imag);
 return(z);
 }
