#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Done");
    system("sh pull.sh");
    system("sh compile_all.sh");
    return 0;
}