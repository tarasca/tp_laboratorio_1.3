#include <stdio.h>
#include <stdlib.h>
#include "bass.h"

int menu();

void calculo(float precioA, float precioL, int kmIngresado);

void confirmarSalida(char* p);


int main()
{
    char salir = 'n';
    int flagUno = 1; // si vale 1 significa que no se saludo
    int flagDos = 1; // si vale 1 significa que no se brindo
    int flagTres= 1;
    int kmIngresado;
    float precioA;
    float precioL;
    int flag2=0;

    do{

        switch(menu()){
            case 1:
                printf("Ingrese cantidad de kilometros\n");
                scanf("%d", &kmIngresado);
                while(kmIngresado<=0)
                {
                    printf("error, cantidad invalida\ningrese de vuelta\n");
                    scanf("%d", &kmIngresado);
                }
                flagUno = 0;
                    break;
            case 2:
                if(flagUno == 0)
                {
                    if(flag2==0)
                    {
                    printf("ingrese precio de aerolineas\n");
                    scanf("%.2f", &precioA);
                    while(precioA<=0)
                    {
                        printf("error, cantidad invalida\ningrese de vuelta\n");
                        scanf("%d", &precioA);
                    }
                    flag2=1;
                    }
                    else if(flag2==1)
                    {
                    printf("ingrese precio de Latam\n");
                    scanf("%.2f", &precioL);
                    while(precioL<=0)
                    {
                        printf("error, cantidad invalida\ningrese de vuelta\n");
                        scanf("%d", &precioL);
                    }
                    }
                    flagDos=0;
                }
                else
                {
                    printf("primero debe ingresar kilometros.\n");
                }
                    break;
            case 3:
                if(flagDos == 0){
                     void calculo(float,float,int);
                     flagTres= 0;
                }
                else if(flagUno == 1){
                    printf("primero debe ingresar en la opcion 1...\n");
                }
                else{
                    printf("primero debe ingresar en la opcion 2...\n");
                }
                    break;
            case 4:
                if(flagTres==0){
                    void calculo(float,float,int);
                }
                break;
            case 5:
                if(flagUno==1 && flagDos==1)
                {
                    opcionCinco();
                }
                else
                {
                    printf("esta opcion sobreescribira datos.\n");
                }
                break;
            case 6: confirmarSalida(&salir);
                    break;
            default:
                    printf("Opcion Invalida!\n\n");
                    scanf("%d", menu);
        }
        system("pause");

    }while(salir != 's');

    return 0;
}


