#include <stdio.h>

void print_Roll_Name();

void rearrangeArray(int arr[], int n);

void print_Roll_Name() {
    printf("\t\tHarshita Sharma\n\t\tRoll:23BCS081\n\n");
}

int main() {
    print_Roll_Name();
    printf("6. Rearrange an array such that the first element is the maximum, the second is the minimum, the third is the second maximum, and so on, without using extra space.\n");

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrangeArray(arr, n);

    printf("Rearranged array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void rearrangeArray(int arr[], int n) {
    int temp[n];
    int small = 0, large = n - 1;
    int flag = 1;

    for (int i = 0; i < n; i++) {
        if (flag)
            temp[i] = arr[large--];
        else
            temp[i] = arr[small++];
        flag = !flag;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}
