#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
#include <ctype.h>  
  
int main(){  
    int i,j,row,col,tmp;  
    scanf("%d%d",&row,&col);  
    int matr[row][col];  
    for(i=0;i<row;i++)  
        for(j=0;j<col;j++){  
            scanf("%d",&tmp);  
            matr[i][j]=tmp;  
        }  
    for(i=0;i<row;i++)  
        for(j=0;j<col;j++){  
            scanf("%d",&tmp);  
            matr[i][j]+=tmp;  
        }  
    for(i=0;i<row;i++){  
        for(j=0;j<col;j++){  
            if(j==0)  
                printf("%d",matr[i][j]);  
            else  
                printf(" %d",matr[i][j]);  
        }     
        printf("\n");  
    }     
    return 0;  
}  

