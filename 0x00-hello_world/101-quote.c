#include <stdio.h>
#include <unistd.h>

/**
* main - Program that prints without puts and printf
* follwed by a new line, to the standard error.
* Return: 0 (SUCCESSFUL)
*
**/

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
