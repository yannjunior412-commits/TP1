#include <stdio.h>

int main(){
    int a,b,res=0;
    printf("Entrez a et b (>0): ");
    scanf("%d %d",&a,&b);

    for(int i=0;i<b;i++){
        res+=a;
    }

    printf("a × b = %d\n",res);
    return 0;
}

