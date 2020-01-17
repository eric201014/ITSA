#include<stdio.h>  
#include<math.h>  
int main(){  
    int i,inp,t,a,b;  
    while(scanf("%d",&inp)!=EOF){  
        t=inp;b=1;  
        for(i=2;i<=sqrt(inp);i++)  
            if(t%(i*i)==0){  
                b*=i;  
                t/=i*i;  
                i--;  
            }  
        a=t;  
        printf("%d = %d*%d^2\n",inp,a,b);  
    }  
    return 0;  
}  
