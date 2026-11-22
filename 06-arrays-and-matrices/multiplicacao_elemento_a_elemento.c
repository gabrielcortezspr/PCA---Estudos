#include<stdio.h>

/* Multiplica duas matrizes quadradas elemento a elemento (produto de Hadamard). */
void multiplicar(int tammatriz, int matrizA[tammatriz][tammatriz], int matrizB[tammatriz][tammatriz])
{
    int i, j;
    int matrizC[tammatriz][tammatriz];
    
    for(i=0; i<tammatriz; i++)
    {
        for(j=0; j<tammatriz; j++)
        {
            matrizC[i][j]=matrizA[i][j]*matrizB[i][j];
        }
    }
    
    for(i=0; i<tammatriz; i++)
    {
        for(j=0; j<tammatriz; j++)
        {
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int tammatriz, i, j;
    
    printf("tam das matrizes: ");
    scanf("%d", &tammatriz);
    
    int matrizA[tammatriz][tammatriz];
    int matrizB[tammatriz][tammatriz];
    
    for(i=0; i<tammatriz; i++)
    {
        for(j=0; j<tammatriz; j++)
        {
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    for(i=0; i<tammatriz; i++)
    {
        for(j=0; j<tammatriz; j++)
        {
            scanf("%d", &matrizB[i][j]);
        }
    }
    
    if(tammatriz<=0)
    {
        printf("nao e possivel multiplicar as matrizes ");
    }
    else
    {
        multiplicar(tammatriz, matrizA, matrizB);
    }
    
    return 0;
}
