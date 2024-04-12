#include <stdio.h>
#include <stdlib.h>

int main() {
    int N = 0;
    scanf("%d", &N);
    if (N < 0){
        printf("n/a");
    } else {
        int** A = (int**)malloc(N * sizeof(int*));
        int** B = (int**)malloc(N * sizeof(int*));
        int** C = (int**)malloc(N * sizeof(int*));
        
        for (int i = 0; i < N; ++i) {
            A[i] = (int*)malloc(N * sizeof(int));
            B[i] = (int*)malloc(N * sizeof(int));
            C[i] = (int*)malloc(N * sizeof(int));
        }
        
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j){
                scanf("%d", &A[i][j]);
            }
        }

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j){
                scanf("%d", &B[i][j]);
            }
        }

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j){
                C[i][j] = 0;
                for(int k = 0; k < N; ++k)
                    C[i][j] += A[i][k] * B[k][j];
            }
        }

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j){
                printf("%d", C[i][j]);
                if (j != (N - 1))
                    printf(" ");
            }
            printf("\n");
        }

        for (int i = 0; i < N; ++i) {
            free(A[i]);
            free(B[i]);
            free(C[i]);
        }
        free(A);
        free(B);
        free(C);
    }
    return 0;
}