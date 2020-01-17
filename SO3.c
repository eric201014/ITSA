#include<stdio.h>  
#include<stdlib.h>  
int cmp(const void *a,const void *b){  
    return *(int*)a-*(int*)b;  
}  
int main(){  
    int num,s,i,j;  
    while(1){  
        scanf("%d",&num);  
        if(num==0)  
        break;  
        int E[num],S[num];  
        for(i=0;i<num;i++)  
            scanf("%d",&E[i]);  
        for(i=0;i<num;i++)  
            scanf("%d",&S[i]);  
        qsort(E,num,sizeof(int),cmp);  
        qsort(S,num,sizeof(int),cmp);  
        for(i=j=num-1,s=0;j>=0;j--)  
            if(S[i]>E[j]){  
                s++;  
                i--;  
            }  
        printf("%d\n",s);  
     }  
     return 0;  
}  
