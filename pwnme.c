//gcc -m32 -fno-stack-protector -z execstack -o pwnme pwnme.c
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void owned(){
    printf("Owned :)");
    exit(0);
}

int main(int argc, char *argv[]) {
        char buffer[100];
        strcpy(buffer, argv[1]);
        printf("Val: %s\n", buffer);

        return 0;
}

