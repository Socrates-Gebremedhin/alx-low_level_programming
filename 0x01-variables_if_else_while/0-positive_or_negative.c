#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int comp = 0;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > comp)
{
printf("%u is positive\n", n);
}
else if (n == comp)
{
printf("%u is zero\n", n);
}
else
{
printf("%u is negative\n", n);
}
return (0);
}
