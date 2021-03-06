// Test for math.h.

#include <stdio.h>
#include <math.h>

#define PI 3.14159265

unsigned long long ullmax = 18446744073709551615ull;

void test_acos()
{
  double param, result;
  param = 0.5;
  result = acos(param) * 180.0 / PI;
  printf("The arc cosine of %f is %.3f degrees.\n", param, result);
}

void test_asin()
{
  double param, result;
  param = 0.5;
  result = asin(param) * 180.0 / PI;
  printf("The arc sine of %f is %.3f degrees\n", param, result);
}

void test_atan()
{
  double param, result;
  param = 1.0;
  result = atan(param) * 180 / PI;
  printf("The arc tangent of %f is %.3f degrees\n", param, result);
}

void test_atan2()
{
  double x, y, result;
  x = -10.0;
  y = 10.0;
  result = atan2(y, x) * 180 / PI;
  printf("The arc tangent for (x=%f, y=%f) is %.3f degrees\n", x, y, result);
}

void test_ceil()
{
  printf("ceil of 2.3 is %.1f\n", ceil(2.3));
  printf("ceil of 3.8 is %.1f\n", ceil(3.8));
  printf("ceil of -2.3 is %.1f\n", ceil(-2.3));
  printf("ceil of -3.8 is %.1f\n", ceil(-3.8));
}

void test_cos()
{
  double param, result;
  param = 60.0;
  result = cos(param * PI / 180.0);
  printf("The cosine of %f degrees is %f.\n", param, result);
}

void test_cosh()
{
  double param, result;
  param = log(2.0);
  result = cosh(param);
  printf("The hyperbolic cosine of %f is %f.\n", param, result);
}

void test_exp()
{
  double param, result;
  param = 5.0;
  result = exp(param);
  printf("The exponential value of %f is %f.\n", param, result);
}

void test_fabs()
{
  printf("The absolute value of 3.1416 is %f\n", fabs(3.1416));
  printf("The absolute value of -10.6 is %f\n", fabs(-10.6));
}

void test_floor()
{
  printf("floor of 2.3 is %.1f\n", floor(2.3));
  printf("floor of 3.8 is %.1f\n", floor(3.8));
  printf("floor of -2.3 is %.1f\n", floor(-2.3));
  printf("floor of -3.8 is %.1f\n", floor(-3.8));
}

void test_fmod()
{
  printf("fmod of 5.3 / 2 is %f\n", fmod(5.3, 2));
  printf("fmod of 18.5 / 4.2 is %f\n", fmod(18.5, 4.2));
}

void test_ldexp()
{
  double param, result;
  int n;

  param = 0.95;
  n = 4;
  result = ldexp(param, n);
  printf("%f * 2^%d = %f\n", param, n, result);
}

void test_log()
{
  double param, result;
  param = 5.5;
  result = log(param);
  printf("log(%f) = %f\n", param, result);
}

void test_log10()
{
  double param, result;
  param = 1000.0;
  result = log10(param);
  printf("log10(%f) = %f\n", param, result);
}

void test_pow()
{
  printf("7 ^ 3 = %f\n", pow(7.0, 3.0));
  printf("4.73 ^ 12 = %f\n", pow(4.73, 12.0));
  printf("32.01 ^ 1.54 = %f\n", pow(32.01, 1.54));
}

void test_sin()
{
  double param, result;
  param = 30.0;
  result = sin(param * PI / 180);
  printf("The sine of %f degrees is %f.\n", param, result);
}

void test_sinh()
{
  double param, result;
  param = log(2.0);
  result = sinh(param);
  printf("The hyperbolic sine of %f is %f.\n", param, result);
}

void test_sqrt()
{
  double param, result;
  param = 1024.0;
  result = sqrt(param);
  printf("sqrt(%f) = %f\n", param, result);
}

void test_tan()
{
  double param, result;
  param = 45.0;
  result = tan(param * PI / 180.0);
  printf("The tangent of %f degrees is %f.\n", param, result);
}

void test_tanh()
{
  double param, result;
  param = log(2.0);
  result = tanh(param);
  printf("The hyperbolic tangent of %f is %f.\n", param, result);
}

int main()
{
  test_acos();
  test_asin();
  test_atan();
  test_atan2();
  test_ceil();
  test_cos();
  test_cosh();
  test_exp();
  test_fabs();
  test_floor();
  test_fmod();
  test_ldexp();
  test_log();
  test_log10();
  test_pow();
  test_sin();
  test_sinh();
  test_sqrt();
  test_tan();
  test_tanh();

  return 0;
}
