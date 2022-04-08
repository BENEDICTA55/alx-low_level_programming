#include <stdio.h>
/**
 *main - main block
 *Description: prints the alphabet in lowercase,
 *and then uppercase, followed by a new line.
 *Return: 0
 */
int main(void)
{
char c ='a';
while (c <= 'z')
{
putchar(c);
c++;
}
c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
