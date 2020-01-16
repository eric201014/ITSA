#include<stdio.h>  
#include<stdlib.h>  
int cmp(const void *a,const void *b){  
    return *(int*)a-*(int*)b;  
}  
int main(){  
    int i,j,cas,n,k;  
    scanf("%d",&cas);  
    for(i=0;i<cas;i++){  
        scanf("%d%d",&n,&k);  
        int N[n];  
        for(j=0;j<n;j++)  
            scanf("%d",&N[j]);  
        qsort(N,n,sizeof(int),cmp);  
        printf("%d\n",N[n-k]);  
    }  
    return 0;  
}  
