#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
#include <ctype.h>  
  
int main(){  
    char s[1024];  
    fgets(s,1024,stdin);  
    int i,len=strlen(s);  
    for(i=0;i<len;i++){  
        if(s[i]>='A'&& s[i]<='Z'){  
            s[i]=s[i]+13;  
            if(s[i]>'Z'){  
                s[i]=s[i]-26;  
            }  
        }  
        if(s[i]>='a' && s[i]<='z'){  
            if(s[i]>'m')  
                s[i]=s[i]-13;  
            else  
                s[i]=s[i]+13;  
        }  
        printf("%c",s[i]);  
    }  
//  printf("%s\n",s);  
    return 0;  
}  
