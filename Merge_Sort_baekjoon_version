#include <stdio.h>
 
#define MAX 1000000
 
int d[MAX];
int temp[MAX];
 
void MergeSort(int L, int R) {
	int l, r;
    if (L >= R) return;
 
    int M = (L + R) / 2;
 
    // Divide
 
    MergeSort(L, M);
    MergeSort(M + 1, R);
 
    // Conquer
    int i;
    for (i = L , l = L , r = M + 1;
        l != M + 1 || r != R + 1;
        i++) {
 
        if ((r != R + 1 && l <= M && d[l] < d[r]) || r == R + 1) {
            temp[i] = d[l++];
        } else {
            temp[i] = d[r++];
        }
    }
 
    for (i = L; i <= R; i++) {
        d[i] = temp[i];
    }
}
 
int main() {
    int n;
 	int i;
    scanf("%d", &n);
 
    for (i = 0; i < n; i++)
        scanf("%d", &d[i]);
 
    MergeSort(0, n - 1);
 
    for (i = 0; i < n; i++)
        printf("%d\n", d[i]);
}
