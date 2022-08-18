#include<stdio.h>
int main(void){
    int a;
    scanf("%d", &a);
    if(a%5==0){
        printf("%d", a/5);
    }else{
        int cnt = 0;
        int b = a;
        while(1){
            if(b == 0){
                printf("%d", cnt);
                break;
            }
            if(b<3){
                printf("-1");
                break;
            }
            if(b%5==0){
                printf("%d", cnt+(b/5));
                break;
            }
            b -= 3;
            cnt++;
        }
    }
    return 0;
}