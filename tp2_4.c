#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct{
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
}compu;

void cargarComputadoras(compu *computadoras, char tipos[6][10]);
void mostrarComputadoras(compu *computadoras);
void mostrasMasAntigua(compu *computadoras);
void mostrasMasVeloz(compu *computadoras);

int main(){
    char tipos[6][10]={"Intel","AMD", "Celeron","Athlon", "Core", "Pentium"};
    compu pcs[5];
    cargarComputadoras(pcs, tipos);
    mostrarComputadoras(pcs);
    mostrasMasAntigua(pcs);
    mostrasMasVeloz(pcs);
}

void cargarComputadoras(compu *computadoras, char tipos[6][10]){
    
    int indiceAleatorio;
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        computadoras[i].velocidad = rand()%3+1;
        computadoras[i].anio = rand()%9+2015;
        computadoras[i].cantidad = rand()%8+1;
        indiceAleatorio = rand()%6;
        computadoras[i].tipo_cpu = tipos[indiceAleatorio];
    }
}

void mostrarComputadoras(compu *computadoras){
    for (int i = 0; i < 5; i++)
        {
            printf("--------------- Computadora %d --------------------\n", i+1);
            printf("Velocidad: %d \n", computadoras[i].velocidad);
            printf("Anio: %d \n",computadoras[i].anio);
            printf("Cantidad: %d \n",computadoras[i].cantidad);
            printf("Tipo de CPU: %s \n",computadoras[i].tipo_cpu);
        }
}

void mostrasMasAntigua(compu *computadoras){
    int antigua = 0;
    int ant = 2024;
    for (int i = 0; i < 5; i++)
    {
        if (computadoras[i].anio < ant)
        {
            antigua = i;
        }
        ant = computadoras[i].anio;
    }
    printf("--------------- Computadora Mas Vieja --------------------\n");
    printf("Velocidad: %d \n", computadoras[antigua].velocidad);
    printf("Año: %d \n",computadoras[antigua].anio);
    printf("Cantiguaidad: %d \n",computadoras[antigua].cantidad);
    printf("Tipo de CPU: %s \n",computadoras[antigua].tipo_cpu);
}

void mostrasMasVeloz(compu *computadoras){
    int veloz = 0;
    int aux = 1;
    for (int i = 0; i < 5; i++)
    {
        if (computadoras[i].velocidad > aux)
        {
            veloz = i;
        }
        aux = computadoras[i].velocidad;
    }
    printf("--------------- Computadora Mas Veloz --------------------\n");
    printf("Velocidad: %d \n", computadoras[veloz].velocidad);
    printf("Año: %d \n",computadoras[veloz].anio);
    printf("Cvelozidad: %d \n",computadoras[veloz].cantidad);
    printf("Tipo de CPU: %s \n",computadoras[veloz].tipo_cpu);
}
