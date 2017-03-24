//Imprimir la derivada como función de X
#include <iostream>
#include <cstdio>
#include <cmath>

double f (double x);
double forward_deriv( double x, double h);

int main(void){

  double h, x, dx,  d, dexact;

  h = 0.0001; 
  dx = 0.1;
  for ( x=0; x<=10; x+=dx){

    d = forward_deriv(x,h);
    dexact = 2*std::cos(2*x);
    std::printf( "%25.16e%25.16e\n", x, d);
  }
  return 0;
  
}

double f (double x)
{
  return std::sin(2*x);
}
double forward_deriv( double x, double h)
{
  return (f(x+h)-f(x))/h;
}
