#include <stdio.h>

int main(){
    int n,m,i,j;
    printf("Entrez dimensions du vecteur (1×n) et matrice (n×m): ");
    scanf("%d %d",&n,&m);

    int V[n], M[n][m], R[m];

    printf("Vecteur V:\n");
    for(i=0;i<n;i++) scanf("%d",&V[i]);

    printf("Matrice M:\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&M[i][j]);

    for(j=0;j<m;j++){
        R[j]=0;
        for(i=0;i<n;i++)
            R[j]+=V[i]*M[i][j];
    }

    printf("Resultat V×M:\n");
    for(j=0;j<m;j++) printf("%d ",R[j]);
    printf("\n");
    return 0;
}

