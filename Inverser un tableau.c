#include <stdio.h>

int main(){
    int n,i;
    printf("Taille: ");
    scanf("%d",&n);
    int T[n];
    for(i=0;i<n;i++) scanf("%d",&T[i]);

    for(i=0;i<n/2;i++){
        int tmp=T[i];
        T[i]=T[n-1-i];
        T[n-1-i]=tmp;
    }

    printf("Tableau inverse:\n");
    for(i=0;i<n;i++) printf("%d ",T[i]);
    printf("\n");
    return 0;
}

