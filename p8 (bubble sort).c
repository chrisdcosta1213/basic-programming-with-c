#include <stdio.h>


int binary_search(int arr[], int n, int key) {
    int l = 0, h = n - 1;
    while (l <= h) {
        int m = l + (h - l) / 2;
        if (arr[m] == key) return m;
        else if (arr[m] < key) l = m + 1;
        else h = m - 1;
    }
    return -1;
}

int main(void) {
    int arr[] = {11, 22, 33, 44, 55}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Array (sorted): ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\nEnter number to search: ");
    if (scanf("%d", &key) != 1) return 1;

    int idx = binary_search(arr, n, key);
    if (idx != -1)
        printf("Value %d found at index %d\n", key, idx);
    else
        printf("Value %d not found\n", key);

    return 0;
}
