#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 * write -  system call that is used to write data out of a buffer
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(2,
	"and that piece of art is useful\"- Dora Korpar, 2015-10-
19\n", 59);
	return (1);
}
