#include <stdio.h>

int main(){
    int n,i,sorted=1;
    printf("Taille: ");
    scanf("%d",&n);
    int T[n];
    printf("Elements:\n");
    for(i=0;i<n;i++) scanf("%d",&T[i]);

    for(i=0;i<n-1;i++){
        if(T[i]>T[i+1]){
            sorted=0; break;
        }
    }
    if(sorted) printf("Tableau trie en ordre croissant.\n");
    else printf("Tableau NON trie.\n");
    return 0;
}

