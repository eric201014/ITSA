#include<stdio.h>  
#define MAX 7  
int main()  
{  
    long long perfectnum[MAX] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328}, num;  
    int i,j,n, ans;  
    scanf("%d", &n);  
    for(i=0;i<n;i++){  
        scanf("%lld", &num);  
        ans = 0;  
        for(j=0;j< MAX;j++)  
        {  
            if(num == perfectnum[j])  
                ans = 1;  
        }  
        if(ans)   
            printf("perfect\n");  
        else   
            printf("nonperfect\n");  
    }  
    return 0;  
}  
