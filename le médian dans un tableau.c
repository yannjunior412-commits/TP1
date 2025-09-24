#include <stdio.h>

void tri(int T[],int n){
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(T[i]>T[j]){
                int tmp=T[i];T[i]=T[j];T[j]=tmp;
            }
}

int main(){
    int n;
    printf("Taille: ");
    scanf("%d",&n);
    int T[n];
    printf("Elements:\n");
    for(int i=0;i<n;i++) scanf("%d",&T[i]);

    tri(T,n);

    if(n%2==1)
        printf("Mediane = %d\n",T[n/2]);
    else
        printf("Mediane = %.2f\n",(T[n/2-1]+T[n/2])/2.0);

    return 0;
}

