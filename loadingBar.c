#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <memory.h>


int main(void){


char *arr = malloc(30 * (sizeof(char)));

arr = "Hello, world!";
printf("%s", arr);
free(arr);

return 0;}
