#include <stdio.h>
  
int main() {
    int coluna,i,j;
    float mat[12][12],soma=0;
    char operacao;
    scanf("%d\n%c",&coluna,&operacao);
    for(i=0;i<=11;i++) {
        for(j=0;j<=11;j++) {
            scanf("%f",&mat[i][j]);
            if(j==coluna)
                soma+=mat[i][j];
        }
    }
    if(operacao=='S')
        printf("%.1f\n",soma);
    else if(operacao=='M')
        printf("%.1f\n",soma/12);
    return 0;
}
