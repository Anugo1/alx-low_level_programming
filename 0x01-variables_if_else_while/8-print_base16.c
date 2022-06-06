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
char alpha;

for (n  = 0; n  <= 9  ; n++)
printf("%d", n);
for (alpha = 'a'; alpha <= 'f' ; alpha++)
putchar(alpha);
printf("\n");
return (0);
}
