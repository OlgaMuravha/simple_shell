#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H
#endif

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char input[100];
printf("Enter something: ");
if (fgets(input, sizeof(input), stdin) != NULL);
{
printf("You entered: %s", input);
}
else
{
printf("Error reading input.\n");
}
return(0);
}
