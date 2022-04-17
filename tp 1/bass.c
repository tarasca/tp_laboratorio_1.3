#include <stdio.h>
#include <stdlib.h>
#include "bass.h"

int menu();

float km();
float precioA();
float precioL();

float debA(float);
float debL(float);
float credA(float);
float credL(float);
float btcA(float);
float btcL(float);
float unitA(float);
float unitL(float);
float difLA(float, float);
void opcionCinco();

int menu()
{
    int opcion;

    printf("***Menu Principal***\n\n1. Ingreso de kilometros:\n2. Ingreso de precios segun aerolinea o latam\n3. Calcular todos los precios: \n4. Mostrar resultados: \n5. Ingreso forzado de datos: \n6. Salir:\n");
    scanf("%d", &opcion);
    system("cls");

    return opcion;
}


float km ()
{
    float km;

    printf("Ingrese kilometros: \n");
    scanf("%f", &km);
    while(km<=0)
        {
            printf("error, dato invalido. ingrese de vuelta.\n");
            scanf("%f", &km);
        }

    system("cls");

    return km;
}

float precioA ()
{
    float precioA;

    printf("ingrese el precio de aerolineas:\n");
    scanf("%f", &precioA);
    while(precioA<=0)
        {
            printf("error, dato invalido. ingrese de vuelta.\n");
            scanf("%f", &precioA);
        }
    return precioA;
}

float precioL()
{
    float precioL;

    printf("ahora ingrese precio de latam:\n");
    scanf("%f", &precioL);
    while(precioL<=0)
        {
            printf("error, dato invalido. ingrese de vuelta.\n");
            scanf("%f", &precioL);
        }
    return precioL;
}

float debA (float precioA)
{
    float debA;

    debA=precioA-(precioA*0.1);

    return debA;
}

float debL (float precioL)
{
    float debL;

    debL=precioL-(precioL*0.1);

    return debL;
}

float credA (float precioA)
{
    float credA;

    credA=precioA+(precioA*0.25);

    return credA;
}

float credL (float precioL)
{
    float credL;

    credL=precioL+(precioL*0.25);

    return credL;
}

float btcA (float precioA)
{
    float btcA;
    float btc=4606954.55;

   btcA=precioA/btc;

    return btcA;
}

float btcL (float precioL)
{
    float btcL;
    float btc=4606954.55;

    btcL=precioL/btc;

    return btcL;
}

float unitA (float precioA, float km)
{
    float unitA;

    unitA=km/precioA;

    return unitA;
}

float unitL (float precioL, float km)
{
    float unitL;

    unitL=km/precioL;

    return unitL;
}

float difLA (float precioA, float precioL)
{
    float difLA;

    difLA=precioL-precioA;

    return difLA;
}

void opcionCinco()
{
    float km=7090;
    float precioA=162965;
    float precioL=159339;
    float btc=4606954.55;
    float debA;
    float debL;
    float credA;
    float credL;
    float btcA;
    float btcL;
    float unitA;
    float unitL;
    float difLA;

    debA=precioA-(precioA*0.1);
    debL=precioL-(precioL*0.1);
    credA=precioA+(precioA*0.25);
    credL=precioL+(precioL*0.25);
    btcA=precioA/btc;
    btcL=precioL/btc;
    unitA=km/precioA;
    unitL=km/precioL;
    difLA=precioL-precioA;

    printf("resultados:\n\nKMs ingresados: %f\n\nPrecio Aerolineas: %f\na) Precio con tarjeta de credito: %f\nb) Precio con tarjeta de debito: %f\nc) Precio pagado con bitcoin: %f\nd) mostrar precio unitario: %f\n\nPrecio Latam: %f\na) Precio con tarjeta de credito: %f\nb) Precio con tarjeta de debito: %f\nc) Precio pagado con bitcoin: %f\nd) mostrar precio unitario: %f\n\nLa diferencia de precio es: %f\n",km,precioA,debA,credA,btcA,unitA,precioL,debL,credL,btcL,unitL,difLA);

}
