#include <stdio.h>  
#include <stdlib.h>  
  
void compute_carry(int a, int b, int *answer, int *carry){  
    while(a!=0 && b!=0){  
        if((*carry)+a%10+b%10 > 9){  
            (*answer)++;  
            (*carry) = 1;  
        }  
        else  
            (*carry) = 0;  
  
        a /= 10;  
        b /= 10;  
    }  
}  
  
void compute_carry_one(int number, int *answer, int *carry){  
    while(number != 0){  
        if((*carry)+number%10 > 9){  
            (*answer)++;  
            (*carry) = 1;  
        }  
        else  
            (*carry) = 0;  
  
        number /= 10;  
    }  
}  
  
int main(){  
    int a, b;  
    int answer, carry;  
  
    while(scanf("%d %d", &a, &b)!=EOF){  
        if(a == 0 && b == 0)  
            break;  
  
        answer = 0, carry = 0;  
  
        while(a!=0 && b!=0){  
            if(carry+a%10+b%10 > 9){  
                answer++;  
                carry = 1;  
            }  
            else  
                carry = 0;  
  
            a /= 10;  
            b /= 10;  
        }  
  
        while(a != 0){  
            if(carry+a%10 > 9){  
                answer++;  
                carry = 1;  
            }  
            else{  
                carry = 0;  
            }  
  
            a /= 10;  
        }  
  
        while(b != 0){  
            if(carry+b%10 > 9){  
                answer++;  
                carry = 1;  
            }  
            else  
                carry = 0;  
  
            b /= 10;  
        }  
  
        if(answer == 0)  
            printf("No carry operation.\n");  
        else  
            printf("%d carry operation%s.\n", answer, answer==1?"":"s");  
    }  
  
    return 0;  
}  
