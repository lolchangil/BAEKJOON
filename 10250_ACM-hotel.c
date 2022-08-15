#include<stdio.h>
int main(void){
    int i,n,H,W,N;
    scanf("%d", &n);
    for(i = 0;i<n;i++){
        scanf("%d %d %d",&H,&W,&N);
        if(N%H==0){
            printf("%d%02d\n",H,(N/H));
        }else{
            printf("%d%02d\n",N%H,1+(N/H));
        }
    }
    return 0;
}