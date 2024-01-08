#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() {
    char hello[] = "Hello World";
    printf("From main: %p\n", &hello);

    int *hello2 = malloc(sizeof(hello));
    printf("From hello2: %p\n", hello2);
    strcpy(&hello2, hello);
    printf("%s\n", hello2);

    char *hello3 = hello2 + 6;
    printf("%s\n", hello3);

    return; 
}