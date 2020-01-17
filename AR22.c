#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
#include <ctype.h>  
  
int main(){  
    char s[300];  
    scanf("%s",s);  
    int i,len=strlen(s);  
    for(i=0;i<len;i++)  
        s[i]-=3;  
    printf("%s\n",s);  
    return 0;  
}  
