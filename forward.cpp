#include <iostream>
#include <cstdio>
#include <cmath>

double f (double x);
double forward_deriv( double x, double h);

int main(void){

  double h, x;

  x=3.7;
  for (int ii=1; ii<=10; ii++){

    h = std::pow(10.0, -ii);
    std::printf( "%25.16e%25.16e%25.16e\n", h, forward_deriv(x,h), 2*std::cos(2*x));
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
