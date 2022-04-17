#include <stdio.h>
#include <stdlib.h>
#include "bass.h"



int main()
{
    setbuf(stdout,NULL);
    char confirmar='n';
    int contador1=0;
    int contador2=0;
    int contador3=0;
    char sobreescribir;
   do
   {
        int menu();

        switch(menu())
        {
        case 1:

            km();

            contador1=1;

            break;
        case 2:
            if(contador1==1)
            {
                precioA();

                precioL();

                system("cls");
            }
            else
            {
                printf("primero debe ingresar una cantidad de kilometros...\n");
                system("pause");
                system("cls");
            }
            break;
        case 3:
            if(contador2==1)
            {
                printf("calculando...\n");

               debA(precioA());
               debL(precioL());
               credA(precioA());
               credL(precioL());
               btcA(precioA());
               btcL(precioL());
               unitA(precioA(),km());
               unitL(precioL(),km());
               difLA(precioA(), precioL());

                printf("\ncalculado!\n");

                system("pause");
                system("cls");
                contador3=1;
            }
            else
            {
                printf("primero debe ingresar los precios de aerolineas argentinas y de latam...\n");
                system("pause");
                system("cls");
            }
            break;
        case 4:
            if(contador3==1)
            {
                printf("resultados:\n\nKMs ingresados: %f\n\nPrecio Aerolineas: %f\na) Precio con tarjeta de credito: %f\nb) Precio con tarjeta de debito: %f\nc) Precio pagado con bitcoin: %f\nd) mostrar precio unitario: %f\n\nPrecio Latam: %f\na) Precio con tarjeta de credito: %f\nb) Precio con tarjeta de debito: %f\nc) Precio pagado con bitcoin: %f\nd) mostrar precio unitario: %f\n\nLa diferencia de precio es: %f",km(),precioA(),debA(),credA(),btcA(),unitA(),precioL(),debL(),credL(),btcL(),unitL(),difLA());
                system("cls");
            }
            else
            {
                printf("primero debe calcular...\n");
                system("pause");
                system("cls");
            }
            break;
        case 5:
            if(contador3==1)
            {
                printf("desea sobreescribir los datos ingresados?\n");
                scanf("%c", &sobreescribir);
                switch(sobreescribir)
                {
                case 's':
                    printf("Recibido!\ncargando carga forzada de datos...\n");

                    opcionCinco();

                    system("pause");
                    system("cls");
                    break;
                case 'n':
                    printf("a sus ordenes !");
                    system("pause");
                    system("cls");
                    break;
                default:
                    printf("invalido, ingrese de vuelta\n");
                    scanf("%c", &sobreescribir);
                    system("pause");
                    system("cls");
                    break;
                }
            }
            else
            {
                printf("usted ya calculo los precios!, presione 4 para mostrarlos\n");
                system("pause");
                system("cls");
                break;
            }
        case 6:
            printf("desea salir?\n\n");
            scanf("%c", &confirmar);
        default:
            printf("opcion invalida, ingrese de vuelta\n");
            system("pause");
            system("cls");
            break;
        }

   }
   while(confirmar!='s');
}
