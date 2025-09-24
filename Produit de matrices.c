#include <stdio.h>

int main() {
    int i, j, n, m;
    printf("Entrez le nombre de lignes et colonnes: ");
    scanf("%d %d", &n, &m);

    int A[n][m], B[n][m], C[n][m];

    printf("Entrez la matrice A:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("Entrez la matrice B:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &B[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Somme des matrices:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

