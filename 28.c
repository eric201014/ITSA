#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
#include <ctype.h>  
  
int main(){  
    int i,j,num,a[6000],c,co=0;   
    scanf("%d",&num);  
    for(i=0;i<num;i++){  
        scanf("%d",&c);  
        a[i]=c;  
    }     
    for(i=0;i<num;i++)  
        for(j=i;j<num;j++){  
            if(i<j && a[i]>2*a[j]){  
                co++;  
            }  
        }  
    printf("%d\n",co);        
    return 0;  
}  
