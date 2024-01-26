#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[] = "example.txt";

    FILE *fw = fopen(filename, "w");
    if (fw == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }
    fprintf(fw, "Hello, World!");
    fclose(fw);

    FILE *fr = fopen(filename, "r");
    if (fr == NULL) {
        printf("Error opeing file for reading\n");
        return 1;
    }
    char line[100];
    while (fgets(line, sizeof(line), fr) != NULL) {
        printf("%s", line);
    }
    fclose(fr);

    return 0;
}