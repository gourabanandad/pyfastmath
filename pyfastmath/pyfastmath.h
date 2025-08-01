#ifndef FASTMATH_H
#define FASTMATH_H
#include<stdbool.h>

long long int gcd(long long int a, long long int b);
bool is_prime(unsigned long long int a);
long long mod_exp(long long base, long long exp, long long mod);
long long int lcm(long long int a, long long int b);
unsigned long long int factorial(int n);
long long int ncr(int n, int r);
long long int npr(int n, int r);
#endif
