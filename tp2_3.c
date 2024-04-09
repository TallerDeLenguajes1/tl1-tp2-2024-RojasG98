#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 5
#define M 7

int main(){
    int i,j;
    float mt[N][M];
    float *puntmt;
    puntmt = mt;
    srand(time(NULL));

    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            *puntmt=1+rand()%100;
            printf("%lf ", *puntmt);
            puntmt++;
        }
        printf("\n");
    }
    return 0;
}
 