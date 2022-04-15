#include <stdio.h>
#include <stdlib.h>
#include "bass.h"

int menu(){
    int opcion;

        system("cls");
        printf("  *** Menu de Opciones ***\n\n");
        printf("1. Ingresar Kilometros: \n");
        printf("2. Ingresar Precio de Vuelos: \n");
        printf("3. Calcular todos los costos: \n");
        printf("4. Informar Resultados. \n");
        printf("5. Carga forzada de datos. \n");
        printf("6. Salir\n\n");
        printf("Ingrese opcion: ");
        scanf("%d", &opcion);

        system("cls");

        return opcion;
}

void calculo(float precioA, float precioL, int kmIngresado){

    float precioDebA;
    float precioDebL;
    float precioCredA;
    float precioCredL;
    float valorBtc=4606954.55;
    float precioBtcA;
    float precioBtcL;
    float precioUniA;
    float precioUniL;
    float difPrecioLA;

    printf("calculando...\n\n");

    precioDebA=precioA-(precioA*0.1);
    precioDebL=precioL-(precioL*0.1);
    precioCredA=precioA+(precioA*0.25);
    precioCredL=precioL+(precioL*0.25);
    precioBtcA=precioA/valorBtc;
    precioBtcL=precioL/valorBtc;
    precioUniA=kmIngresado/precioA;
    precioUniL=kmIngresado/precioL;
    difPrecioLA=precioL-precioA;

    printf("calculado !\n\n");

        printf("KMs ingresados: %d\n\nPrecio Aerolineas: %.2f\n",kmIngresado,precioA);
        printf("a) Precio con tarjeta de debito: %.2f\n",precioDebA);
        printf("b) Precio con tarjeta de credito: %.2f\n",precioCredA);
        printf("c) Precio pagado con bitcoin: %.2f\n",precioBtcA);
        printf("d) mostrar precio unitario: %.2f\n\n",precioUniA);
        printf("Precio Latam: %.2f\n",precioL);
        printf("a) Precio con tarjeta de debito: %.2f\n",precioDebL);
        printf("b) Precio con tarjeta de credito: %.2f\n",precioCredL);
        printf("c) Precio pagado con bitcoin: %.2f\n",precioBtcL);
        printf("d) mostrar precio unitario: %.2f\n\n",precioUniL);
        printf("La diferencia de precio es: %.2f\n\n",difPrecioLA);
}

void opcionCinco()
{
    int kmIngresado=7090;
    float precioA=162965;
    float precioL=159339;
    float precioDebA;
    float precioDebL;
    float precioCredA;
    float precioCredL;
    float valorBtc=4606954.55;
    float precioBtcA;
    float precioBtcL;
    float precioUniA;
    float precioUniL;
    float difPrecioLA;

    printf("calculando...\n\n");

    precioDebA=precioA-(precioA*0.1);
    precioDebL=precioL-(precioL*0.1);
    precioCredA=precioA+(precioA*0.25);
    precioCredL=precioL+(precioL*0.25);
    precioBtcA=precioA/valorBtc;
    precioBtcL=precioL/valorBtc;
    precioUniA=kmIngresado/precioA;
    precioUniL=kmIngresado/precioL;
    difPrecioLA=precioL-precioA;

    printf("KMs ingresados: %d\n\nPrecio Aerolineas: %.2f\n",kmIngresado,precioA);
    printf("a) Precio con tarjeta de debito: %.2f\n",precioDebA);
    printf("b) Precio con tarjeta de credito: %.2f\n",precioCredA);
    printf("c) Precio pagado con bitcoin: %.2f\n",precioBtcA);
    printf("d) mostrar precio unitario: %.2f\n\n",precioUniA);
    printf("Precio Latam: %.2f\n",precioL);
    printf("a) Precio con tarjeta de debito: %.2f\n",precioDebL);
    printf("b) Precio con tarjeta de credito: %.2f\n",precioCredL);
    printf("c) Precio pagado con bitcoin: %.2f\n",precioBtcL);
    printf("d) mostrar precio unitario: %.2f\n\n",precioUniL);
    printf("La diferencia de precio es: %.2f\n\n",difPrecioLA);

}

void confirmarSalida(char* p){
    char confirma;
    printf("Confirma salida?: ");
    fflush(stdin);
    scanf("%c", &confirma);

    // asigno el valor de la variable confirma a la variable salir de main
    // a traves de p que recibe la direccion de salir
    *p = confirma;

}
