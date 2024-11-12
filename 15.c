#include <stdio.h>
#include <string.h>

void printLinesWithWord(const char *filename, const char *word);

void print_Roll_Name() {
    printf("\t\tHarshita Sharma\n\t\tRoll:23BCS081\n\n");
}

int main() {
    print_Roll_Name();
    printf("15. Read a file and print only those lines that contain a specific word.\n");

    const char *filename = "example.txt";
    const char *word = "words";

    printLinesWithWord(filename, word);

    return 0;
}

void printLinesWithWord(const char *filename, const char *word) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return;
    }

    char line[256];
    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, word) != NULL) {
            printf("%s", line);
        }
    }

    fclose(file);
}
