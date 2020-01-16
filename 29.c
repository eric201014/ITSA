#include    <stdio.h>  
#include    <stdlib.h>  
#include    <string.h>  
#include    <ctype.h>  
#define Max 99999  
  
int main(){  
    char line[Max]={'\0'};  
    char t;  
    char temp[Max]={'\0'};  
    int timcnt=0,test,i,j,tcnt=0;  
    int times[Max]={0},cnt=0,key,num;  
  
    while((fgets(line,Max,stdin))!=NULL){  
        tcnt=0;timcnt=0;key=0;  
  
        line[strlen(line)-1] = '\0';  
        for(i=0;line[i]!='\0';i++){  
            t = line[i];  
  
            test = isdigit(t);  
            if(test!=0){  
                if(key==1){  
                    for(j=0,cnt=0;j<timcnt;j++){  
                        cnt = cnt*10;  
                        cnt = cnt + times[j];  
                    }  
                    for(j=1;j<=cnt;j++)  
                        printf("%s",temp);  
                    key=0;  
                    timcnt=0;  
                    tcnt=0;  
  
                    for(j=0;j<Max;j++)  
                        temp[j] = '\0';  
                }  
  
  
                num = t -'0';  
                times[timcnt]=num;  
                timcnt++;  
            }  
            else{  
                temp[tcnt] = t;  
                tcnt++;  
                key=1;  
            }  
        }  
  
        for(j=0,cnt=0;j<timcnt;j++){  
            cnt = cnt*10;  
            cnt = cnt + times[j];  
        }  
        for(j=1;j<=cnt;j++)  
            printf("%s",temp);  
        printf("\n");  
        key=0;  
        timcnt=0;  
        tcnt=0;  
  
        for(j=0;j<Max;j++)  
            temp[j] = '\0';  
    }  
  
    return 0;  
}  
