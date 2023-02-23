//
// Created by mauri on 06/09/22.
//

#include <stdio.h>
#include "helper.h"


void encolar(int * vector,int *cabecera, int* ult) {

    int numero;

    printf("ingrese el nuevo numero a encolar\n");
    scanf("%d", &numero);

    if (*ult == *cabecera) {
        vector[*cabecera] = numero;
        *ult+=1;  //ultimo siempre marca la primera posicion libre a continuacion de la posicion usada para ingresar el ultimo numero
        return;
    }
    if((*ult)%4==*cabecera) {
        printf("no posee suficiente espacio en el vector para \n");
        return;
    }else{
        vector[*ult%4] = numero;
        *ult+=1;
    }

}

    void imprimir_vector(int * vector, int cabecera,int ult){

        for(int i=0; i<4;i++){
            printf("%d; ", vector[i]);
        }
    }

void desencolar(int * vector, int * cabecera, int ult) {

    int aux=*cabecera;
    printf("se desencola el numero %d\n", vector[aux]);
    vector[aux]='\0';
    *cabecera=*cabecera+1;

}
