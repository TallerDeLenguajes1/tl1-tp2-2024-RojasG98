#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct{
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
}compu;

void cargarComputadoras(compu *compus);

int main(){
    char tipos[6][10]={'Intel','AMD', 'Celeron', 'Athlon', 'Core', 'Pentium'};
    compu computadoras[5];
    int indiceAleatorio;
    srand(time(NULL));
    for (int i = 0; i < 6; i++)
    {
        computadoras[i].velocidad = rand()%3+1;
        computadoras[i].anio = rand()%9+2015;
        computadoras[i].cantidad = rand()%8+1;
        //indiceAleatorio = rand()%7;
        indiceAleatorio = 3;
        computadoras[i].tipo_cpu = tipos[indiceAleatorio];
    }
    
    for (int i = 0; i < 6; i++)
    {
        puts("-----------------------------------");
        printf("Velocidad: %d \n", computadoras[i].velocidad);
        printf("Año: %d \n",computadoras[i].anio);
        printf("Cantidad: %d \n",computadoras[i].cantidad);
        puts(computadoras[i].tipo_cpu);
    }


    
    
}
