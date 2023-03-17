#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 * write -  system call that is used to write data out of a buffer
 * Return: Always 1 (Success)
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\"\n"
	"- Dora Korpar, 2015-10-19\n";
	write(2, quote, strlen(quote, sizeof(quote)));
	return (1);
}
