#include <stdio.h>
int main(){
    int n,cont=1,aux,comp=0,i,j;
    scanf("%d",&n);
    int v[n],c[n];
    for(i=0;i<n;i++)c[i]=1;
    for(i=0;i<n;i++){
        scanf("%d",&aux);
        if(i==0)v[i]=aux;
        else{
            for(j=0;j<cont;j++){
                if(aux==v[j]){
                    cont--;
                    c[j]++;
                    comp=1;
                    break;
                }
            }
            cont++;
            if(comp==0)v[cont-1]=aux;
            comp=0;

        }
    }
    for(i=0;i<cont-1;i++){
        for(j=i+1;j<cont;j++){
            if(v[i]>v[j]){
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;
            aux=c[i];
            c[i]=c[j];
            c[j]=aux;
            }
        }
    }
    for(i=0;i<cont;i++){
        printf("%d %d\n",v[i],c[i]);
    }
    return 0;
}
