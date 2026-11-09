#include <stdio.h>
#include <string.h>

int main(void) {
    char str[30] = "happy C programming";

    printf("The length of string \"%s\" : %d\n", str, (int)strlen(str));

    return 0;
}