#include <stdio.h>

long long largestPrimeFactor(long long n)
{
long long largestPrime = 2;
while (n > largestPrime)
{
if (n % largestPrime == 0)
{
n /= largestPrime;
}
else
{
largestPrime++;
}
}
return largestPrime;
}

int main()
{
long long number = 612852475143;
long long result = largestPrimeFactor(number);
    
printf("%lld\n", result);
    
return 0;
}
