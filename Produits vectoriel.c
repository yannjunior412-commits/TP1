#include <stdio.h>

int main(){
    int A[3],B[3],C[3];
    printf("Vecteur A (3 dim): ");
    for(int i=0;i<3;i++) scanf("%d",&A[i]);
    printf("Vecteur B (3 dim): ");
    for(int i=0;i<3;i++) scanf("%d",&B[i]);

    C[0]=A[1]*B[2]-A[2]*B[1];
    C[1]=A[2]*B[0]-A[0]*B[2];
    C[2]=A[0]*B[1]-A[1]*B[0];

    printf("Produit vectoriel: (%d,%d,%d)\n",C[0],C[1],C[2]);
    return 0;
}

