#include <stdio.h>
#include <stdlib.h>

int Bsearch(int, int, int, int*);

int main()
{
    int intValues[]={10, 20, 21, 25, 54, 58, 60, 66, 87, 99};
    int i = 0,key;
    int N=9;

    printf("Input Key Values: ");
    scanf("%d", &key);
    Bsearch(i, N, key, intValues);

}

int Bsearch(int low, int high, int key, int *arr){
    int middle = ((low + high) / 2);
    if (low > high) {
        printf("Not Found\n");
        return -1;
    }
    else if (arr[middle] < key) {
        return Bsearch(middle + 1, high, key, arr);
    }
    else if (arr[middle] > key) {
        return Bsearch(low, middle - 1, key, arr);
    }
    else if (arr[middle] == key) {
        printf("Found. Index = %d", middle + 1);
        return 0;
    }

}
