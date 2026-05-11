#include <stdio.h>

#define N 16
typedef int fix_matrix[N][N];

void fix_set_diag(fix_matrix A, int val) {
    long i;
    for (i = 0; i < N; i++) {
        A[i][i] = val;
    }
}

void fix_set_diag_opt(fix_matrix A, int val) {
    int *Aptr = &A[0][0];
    int *Aend = &A[N][N];
    do {
        *Aptr = val;
        Aptr += N + 1;
    } while (Aptr != Aend);
}

void print_matrix(fix_matrix A) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    fix_matrix A = {0};
    fix_set_diag_opt(A, 7);
    print_matrix(A);
    return 0;
}
