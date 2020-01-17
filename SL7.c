#include    <stdio.h>  
#include    <string.h>  
#include    <ctype.h>  
 
#define Max 100  
  
int main(void){  
    char line[Max],c;  
    int test,i;  
    int ans=0;  
  
    while((fgets(line,Max,stdin))!=NULL){  
        ans =0;  
        line[strlen(line)-1]='\0';  
        if(strcmp(line,"end")==0){break;}  
        for(i=0;line[i]!='\0';i++){  
            c = line[i];  
            test = isupper(c);  
            if(test!=0){  
                if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')  
                    ans = ans + 6;  
                else  
                    ans = ans + 3;  
            }  
            else{  
                if(c=='a'|| c=='e'|| c=='i'||c=='o'||c=='u')  
                    ans = ans + 5;  
                else  
                    ans = ans + 2;  
            }  
        }  
        printf("%d\n",ans);  
    }  
    return 0;  
}  
