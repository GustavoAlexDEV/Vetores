#include <stdio.h>
#include <math.h>
int main(){
    int n,i,j,raiz,valor;
    scanf("%d",&n);
    int primos[10000001];
    primos[0]=1;
    primos[1]=1;
    for(i=2;i<10000001;i++){
        primos[i]=0;
    }
    raiz=sqrt(10000000);
    for(i=2;i<raiz;i++){
        if(primos[i]==0){
            for(j=i*2;j<10000001;j+=i){
                primos[j]=1;
            }
        }
    }


    for(i=0;i<n;i++){
        scanf("%d",&valor);
        if(primos[valor]==1){
            printf("composto\n");
        }else printf("primo\n");
    }
    return 0;
}