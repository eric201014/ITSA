#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
#include <ctype.h>  
  
typedef struct q{  
    int num;  
    int time;   
}q;  
  
int main(){  
    q ins[50],tmp;  
    int i,j=0,k,inp,flag=0;  
    scanf("%d",&inp);  
    while(inp!=-999){  
        for(i=0;i<j;i++)  
            if(inp==ins[i].num){  
                ins[i].time++;  
                flag=1;  
                break;  
            }  
        if(flag==0){  
            ins[j].num=inp;  
            ins[j].time=1;  
            j++;  
        }  
        flag=0;  
        scanf("%d",&inp);  
    }     
    for(i=0;i<j;i++)    
        for(k=0;k<j-1;k++)    
            if(ins[k].num<ins[k+1].num){    
                tmp=ins[k];    
                ins[k]=ins[k+1];    
                ins[k+1]=tmp;    
            }    
    for(i=0;i<j;i++){  
        printf("%d %d\n",ins[i].num,ins[i].time);  
    }          
      
    return 0;  
}  
