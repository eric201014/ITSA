#include<stdio.h>    
#include<stdlib.h>    
#include<string.h>    
#include <ctype.h>    
typedef struct team{  
    int num;  
    int score;  
}team;  
int main(){    
    int i,j,num,a,d,c;    
    team b[3],tmp;  
    char str[1024],co[123],wr[123];    
    strcpy(co,"correct");    
    strcpy(wr,"wrong");    
    for(i=0;i<3;i++){  
        b[i].num=i+1;  
        b[i].score=0;  
    }   
    scanf("%d",&num);    
    for(i=0;i<num;i++){    
        for(j=0;j<3;j++){    
            scanf("%s",str);    
            if(strcmp(str,co)==0){    
                b[j].score+=10;    
            }    
            else if(strcmp(str,wr)==0){    
                b[j].score-=10;    
            }    
        }    
    }    
    for(i=0;i<3;i++){    
        for(j=0;j<2;j++){    
            if(b[j].score<b[j+1].score){    
                tmp=b[j];    
                b[j]=b[j+1];    
                b[j+1]=tmp;    
            }    
        }    
    }    
 for(i=0;i<3;i++){  
        if(i==2)  
            printf("(%d,%d)\n",b[i].num,b[i].score);  
        else if(b[i+1].score!=b[i].score)  
            printf("(%d,%d)\n",b[i].num,b[i].score);  
        else  
            printf("(%d,%d)",b[i].num,b[i].score);  
    }  
    return 0;       
}  
