#include "monty.h"

/**
 * bus - global variable to carry values through the program
 */
bus_t bus = {NULL, NULL, NULL, 0};

/**
 * main - monty code interpreter
 * @argc: number of arguments
 * @argv: monty file location
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr, "Usage: %s <file>\n", argv[0]);
exit(EXIT_FAILURE);
}
bus.file = fopen(argv[1], "r");
if (bus.file == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
char *line = NULL;
size_t len = 0;
ssize_t read;
while ((read = getline(&line, &len, bus.file)) != -1)
{
if (line[read - 1] == '\n')
line[read - 1] = '\0';
execute(line, &bus.stack, bus.line_number, bus.file);
bus.line_number++;
}
free(line);
fclose(bus.file);
free_stack(bus.stack);
return (0);
}

