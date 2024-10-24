#include <complex.h>
#include <math.h>
#include <stdio.h>

#include "domain.h"


void solve_quadratic_equation(
   const struct coefficients* coefficients,
   struct roots* result)
{
   if (!are_coefficients_valid(coefficients))
   {
      return;
   }
   double complex delta = coefficients->b * coefficients->b - 4 * coefficients -> a * coefficients -> c;

   result->first = (-coefficients->b - csqrt(delta)) / (2 * coefficients ->a);
   result->second = (-coefficients->b + csqrt(delta)) / (2 * coefficients ->a);
   printf("fdgasghwdsgad");
}
