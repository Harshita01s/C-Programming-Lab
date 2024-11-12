#include <stdio.h>
#include <ctype.h>

void countFileContents(const char *filename, int *lines, int *words, int *characters);

void print_Roll_Name() {
    printf("\t\tHarshita Sharma\n\t\tRoll:23BCS081\n\n");
}

int main() {
    print_Roll_Name();
    printf("14. Count the number of lines, words, and characters in a file.\n");

    const char *filename = "example.txt";
    int lines = 0, words = 0, characters = 0;

    countFileContents(filename, &lines, &words, &characters);

    printf("File: %s\n", filename);
    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", characters);

    return 0;
}

void countFileContents(const char *filename, int *lines, int *words, int *characters) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return;
    }

    char ch;
    int inWord = 0;
    while ((ch = fgetc(file)) != EOF) {
        (*characters)++;

        if (ch == '\n') {
            (*lines)++;
        }

        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            (*words)++;
        }
    }

    fclose(file);
}
