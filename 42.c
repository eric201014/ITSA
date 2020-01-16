#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
  
int main(){  
    int i,j,num[10],tmp;  
    for(i=0;i<10;i++){  
        scanf("%d",&num[i]);  
    }  
      
    for(i=0;i<10;i++)  
        for(j=0;j<9;j++)  
            if(num[j]<num[j+1]){  
                tmp=num[j];  
                num[j]=num[j+1];  
                num[j+1]=tmp;  
            }  
    printf("Largest number = %d\n",num[0]);  
    printf("Smallest number = %d\n",num[9]);              
    return 0;  
}  
