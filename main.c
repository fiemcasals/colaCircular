#include <stdio.h>
#include "helper.h"

int main() {

    int vector[4]; //cola circular
    int respuesta;
    int cabecera=0;
    int ult=0;

    printf("ingrese el numero 0 para encolar o 1 para desencolar\n");
    scanf("%d", &respuesta);

    do {
        if (respuesta == 0) {
            encolar(vector,&cabecera,&ult);
        }
        if (respuesta == 1){
            desencolar(vector,&cabecera,ult);
        }

        printf("ingrese 0 para encolar, 1 para desencolar u otro numero para salir e imprimir la lista\n");
        fflush(stdin);
        scanf("%d", &respuesta);
        if(respuesta!= 0 && respuesta != 1){

            if(ult+1!=cabecera){vector[ult+1]='\0';}
        }
    }while(respuesta== 0 || respuesta == 1);

    imprimir_vector(vector,cabecera,ult);
    return 0;
}
