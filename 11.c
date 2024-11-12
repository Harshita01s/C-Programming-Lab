#include <stdio.h>
#include <stdlib.h>

void sortArray(int *arr, int n);
void printArray(int *arr, int n);

void print_Roll_Name() {
    printf("\t\tHarshita Sharma\n\t\tRoll:23BCS081\n\n");
}

int main() {
    print_Roll_Name();
    printf("11. Dynamically allocate memory for an array of integers, then sort and print the array using pointer notation.\n");

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    sortArray(arr, n);
    printf("Sorted array: ");
    printArray(arr, n);

    free(arr);
    return 0;
}

void sortArray(int *arr, int n) { // Using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
