#include<stdio.h>
int main(void){
    int box[15][15] = {0, };
    for(int i = 1;i<15;i++){
        box[0][i] = i;
    }
    for(int i = 1;i<15;i++){
        for(int j = 1;j<15;j++){
            for(int z = 1;z<=j;z++){
                box[i][j] += box[i-1][z];
            }
        }
    }
    int y,k,n;
    scanf("%d", &y);
    for(int i = 0;i<y;i++){
        scanf("%d", &k);
        scanf("%d", &n);
        printf("%d\n", box[k][n]);
    }
    return 0;
}