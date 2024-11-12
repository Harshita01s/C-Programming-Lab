#include <stdio.h>

void print_Roll_Name();

void generateMagicSquare(int n);

void print_Roll_Name() {
    printf("\t\tHarshita Sharma\n\t\tRoll:23BCS081\n\n");
}

int main() {
    print_Roll_Name();
    printf("7. Create a magic square (where the sum of elements in every row, column, and both diagonals is the same) for a given N x N matrix.\n");

    int n;
    printf("Enter the size of the magic square (odd number): ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number.\n");
    } else {
        generateMagicSquare(n);
    }

    return 0;
}

void generateMagicSquare(int n) {
    int magicSquare[n][n];

    // Initialize all positions as 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            magicSquare[i][j] = 0;
        }
    }

    // Position for 1
    int i = n / 2;
    int j = n - 1;

    // One by one put all values in magic square
    for (int num = 1; num <= n * n; ) {
        if (i == -1 && j == n) { // Condition 4
            j = n - 2;
            i = 0;
        } else {
            // Wrap around the row
            if (i < 0) {
                i = n - 1;
            }
            // Wrap around the column
            if (j == n) {
                j = 0;
            }
        }

        if (magicSquare[i][j] != 0) { // Condition 2
            j -= 2;
            i++;
            continue;
        } else {
            magicSquare[i][j] = num++; // Set number
        }

        j++;
        i--; // Move to next location
    }

    // Print the magic square
    printf("The Magic Square for n=%d:\nSum of each row or column: %d\n\n", n, n * (n * n + 1) / 2);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ", magicSquare[i][j]);
        }
        printf("\n");
    }
}