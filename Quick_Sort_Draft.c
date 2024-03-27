#include<stdio.h>

void quicksort(int, int, int[]);
void switchn(int, int, int[]);

int main() {
    int arr[] = {54, 26, 93,17, 77, 31, 44, 55, 20};
    quicksort(0, 8, arr);
    for (int i = 0; i < 9; i++) {
        printf("%d ", arr[i]);
    }

}

void quicksort(int l, int r, int arr[]) {
    int key = arr[l];
    int lp = (l + 1), rp = r;
    if (l + 2 == r) {
        if (arr[lp] > arr[rp]){
            switchn(lp, rp, arr);
        }
        if ((key < arr[lp])){

        }
        else if ((key >= arr[lp]) && (key < arr[rp])) {
            switchn(l, lp, arr);
        }
        else if (key >= arr[rp]) {
            switchn(l, rp, arr);
            switchn(l, lp, arr);
        }
    }
    else if (l + 1 == r) {
        if (arr[l] > arr[r]) {
            switchn(l, r, arr);
        }
    }
    else if ((lp + 1) < rp) {

        while (lp < rp) {
            if ((arr[lp] > key) && (arr[rp] <= key)) {
                int temp = arr[lp];
                arr[lp] = arr[rp];
                arr[rp] = temp;
            }
            if (arr[lp] <= key) {
                lp++;
            }
            if (arr[rp] > key) {
                rp--;
            }
            if(lp == rp) {
                if (arr[lp] > key) {
                    lp--;
                }
                else {
                    rp++;
                }
            }
        }
        for (int i = 0; i < rp; i++) {
            arr[i] = arr[i + 1];
        }
        arr[rp] = key;

        quicksort(l, rp, arr);
        quicksort(rp + 1, r, arr);
    }
}

void switchn(int a, int b, int arr[]) {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
}


