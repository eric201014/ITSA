#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int cmp(const void *a,const void *b){  
    return *(int*)a-*(int*)b;  
}  
int main(){  
    int i,j,cas;  
    char S[100000];  
    char *tok;  
    scanf("%d",&cas);  
    gets(S);  
    for(i=0;i<cas;i++){  
        int N[1010];  
        int min=99999999;  
        int top=0;  
        fgets(S,100000,stdin);  
        tok=strtok(S," \n");  
        while(tok!=NULL){  
            N[top++]=atoi(tok);  
            tok=strtok(NULL," \n");  
        }  
        qsort(N,top,sizeof(int),cmp);  
        for(j=1;j<top;j++)  
            min=abs(N[j]-N[j-1])<min?abs(N[j]-N[j-1]):min;  
        printf("%d\n",min);  
    }  
    return 0;  
}  
