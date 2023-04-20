#include <stdio.h>
#include <stdlib.h>
void print_opcodes(char *start, int num_bytes);
/**
 * main - prints it's opcodes
 * @argc: arg count
 * @argv: pointer to array of string
 * Return: o on success
 */
int main(int argc, char **argv)
{
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);

    if (num_bytes < 0) {
        printf("Error\n");
        return 2;
    }

    char *start = (char*) &main;
    print_opcodes(start, num_bytes);

    return 0;
}
/**
 * print_opcodes - display the main's opcode
 * @start: value to begin
 * @num_bytes: to end
 * Return: nothing
 */
void print_opcodes(char *start, int num_bytes)
{
	int i;
    for (i = 0; i < num_bytes; i++) {
        printf("%02hhx ", start[i]);
    }
    printf("\n");
}

