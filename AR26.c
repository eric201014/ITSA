#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
#include <ctype.h>  
  
int main(){  
    int i,j,row,col,a=0,b=0,d;  
    scanf("%d%d",&row,&col);  
    for(i=0;i<row;i++){  
        for(j=0;j<col;j++){  
            scanf("%d",&d);  
            if(d==0)  
                a++;  
            else if(d==1)  
                b++;  
        }  
    }  
  
    if(a>b ){  
        printf("0\n");  
    }  
    else if(b>a ){  
        printf("1\n");  
    }  
    else if(a==b){  
        printf("2\n");  
    }  
    return 0;  
}  
