#include<stdio.h>

int arr_copy[7];

void merge_sort(int,int, int[]);
void merge(int, int, int, int[]);

int main() {
    int arr[7] = {38, 27, 43, 3, 9, 82, 10};
    merge_sort(0, (sizeof(arr) / sizeof(arr[0])) - 1, arr);
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr_copy[i]);
    }
}

void merge_sort(int low, int high, int arr[]) {
    if (low >= high) {
    }
    else {
        merge_sort(low, (low + high) / 2, arr);
        merge_sort(((low + high) / 2) + 1, high, arr);
        merge(low, (low + high) / 2, high, arr);
    }

}

void merge(int low, int mid, int high, int arr[]) {
    int i, j, k = low;
    for (i = low, j = mid + 1; (i <= mid) && (j <= high);) {
        if (arr[i] <= arr[j]) {
            arr_copy[k++] = arr[i++];
        }
        else {
            arr_copy[k++] = arr[j++];
        }
    }
    if (i > mid) {
        while (j <= high) {
            arr_copy[k++] = arr[j++];
        }
    }
    else {
        while (i <= mid) {
            arr_copy[k++] = arr[i++];
        }
    }
    for (i = low; i <= high; i++) {
        arr[i] = arr_copy[i];
    }
}
