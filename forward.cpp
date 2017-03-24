#include <iostream>
#include <cstudio>
#include <cmath>

double f (double x);
double forward_deriv( double x, double h);

int main(void){

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
