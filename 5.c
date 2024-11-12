#include <stdio.h>

void print_Roll_Name() {
    printf("\t\tHarshita Sharma\n\t\tRoll:23BCS081\n\n");
}

void findUnion(int [], int [] , int, int);
void findIntersection(int [], int [] , int, int);

int main() {
    print_Roll_Name();
    printf("5. Find the union and intersection of two arrays.\n");

    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    findUnion(arr1, arr2, n1, n2);
    findIntersection(arr1, arr2, n1, n2);

    return 0;
}


void findUnion(int arr1[], int arr2[], int n1, int n2) {
    int unionArr[n1 + n2];
    int k = 0;

    for (int i = 0; i < n1; i++) {
        unionArr[k++] = arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        int j;
        for (j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                break;
            }
        }
        if (j == n1) {
            unionArr[k++] = arr2[i];
        }
    }

    printf("Union of the two arrays: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
}

void findIntersection(int arr1[], int arr2[], int n1, int n2) {
    printf("Intersection of the two arrays: ");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");
}