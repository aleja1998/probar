#include <stdio.h>


int main(){

int entrada1;
int entrada2;
int limite1;
int limite2;


printf("Inicio filas: ");
scanf("%d", &limite1);
printf("Inicio columna: ");
scanf("%d", &limite2);

printf("Ingrese filas: ");
scanf("%d", &entrada1);
printf("Ingrese columnas: ");
scanf("%d",&entrada2);

for(int i=limite1;i<entrada1+limite1;i++){
    for(int j=limite2;j<entrada2+limite2;j++){
        int valor=i*j;
        printf("%d \t", valor);

    }
    printf("\n");

}
}