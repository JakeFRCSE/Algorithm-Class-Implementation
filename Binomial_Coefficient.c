#include<stdio.h>

int minimum(int a, int b) {
 if (a >= b) {
    return b;
 }
 else return a;
}

void bin(int n, int k, int mat[n+1][k+1]) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= minimum(i, k); j++) {
            if (( j == 0) || (j == i) ) {
                mat[i][j] = 1;
            }
            else {
                mat[i][j] = mat[i - 1][j - 1] + mat[i - 1][j];
            }
        }
    }
 }




int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    if (k > n) {
        printf("error: k is greater than n");
        return 1;
    }
    int mat[n + 1][k + 1];
    bin(n, k, mat);
    printf("nCk = %d", mat[n][k]);
}
