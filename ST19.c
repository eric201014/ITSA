#include    <stdio.h>  
#include    <stdlib.h>  
#include    <string.h>  
 
#define Max 40  
char Stack[Max];  
int top = 0;  
int p_cnt=-1;  
  
  
int priority(char sym){  
        switch(sym){  
                case '#': return 1;  
                case '@':  
                        p_cnt++;  
                        return 2 + p_cnt;  
                default: return 0;  
        }  
}  
  
void Push(char sym){  
  
        if(top == Max-1)  
                return;  
  
        Stack[++(top)] = sym;  
}  
  
char Pop(){  
        if(top==0)  
                return 0;  
        else  
                return Stack[(top)--];  
}  
  
int main(void){  
    char line[Max]={'\0'},ans[Max]={'\0'},sym,x;  
    int t,i,cnt=0;  
  
    while((fgets(line,Max,stdin))!=NULL){  
        p_cnt=-1;  
        cnt = 0;  
        line[strlen(line)-1] = '\0';  
        for(i=0;line[i]!='\0';i++){  
            t = isalpha(line[i]);  
            if(t!=0){  
                ans[cnt] = line[i];  
                cnt++;  
            }  
            else{  
                sym = line[i];  
                switch(sym){  
                    case '(':  
                            Push(sym);  
                            break;  
                    case '#': case '@':  
                            while( priority(Stack[top])>= priority(sym)){  
                                x = Pop();  
                                ans[cnt]=x;  
                                cnt++;  
                            }  
                            Push(sym);  
                            break;  
                    case ')':  
                            x = Pop();  
                            while(x!='('){  
                                ans[cnt]=x;  
                                cnt++;  
                                x = Pop();  
                            }  
                            break;  
                }  
            }  
        }  
        while(top!=0){  
            x=Pop();  
            if(x==')'){break;}  
            ans[cnt]=x;  
            cnt++;  
        }  
  
        printf("%s\n",ans);  
        for(i=0;i<cnt;i++)  
            ans[i] = '\0';  
  
    }  
  
    return 0;  
}  
