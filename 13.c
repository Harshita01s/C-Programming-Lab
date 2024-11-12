#include <stdio.h>

void copyFileContents(const char *sourceFile, const char *destinationFile);

void print_Roll_Name() {
    printf("\t\tHarshita Sharma\n\t\tRoll:23BCS081\n\n");
}

int main() {
    print_Roll_Name();
    printf("13. Copy the contents of one file to another file.\n");

    const char *sourceFile = "source.txt";
    const char *destinationFile = "destination.txt";

    copyFileContents(sourceFile, destinationFile);

    return 0;
}

void copyFileContents(const char *sourceFile, const char *destinationFile) {
    FILE *source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error: Could not open source file.\n");
        return;
    }

    FILE *destination = fopen(destinationFile, "w");
    if (destination == NULL) {
        printf("Error: Could not open destination file.\n");
        fclose(source);
        return;
    }

    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(destination);
}
