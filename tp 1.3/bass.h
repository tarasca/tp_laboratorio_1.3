#ifndef BASS_H_INCLUDED
#define BASS_H_INCLUDED

#endif // BASS_H_INCLUDED

/** \brief funcion para el menu
 *
 * \return int devuelve un numero
 *
 */
int menu();

/** \brief funcion para calcular y mostrar resultados
 *
 * \param precioA float precio aerolineas
 * \param precioL float precio latam
 * \param kmIngresado int kilometros ingresados para valor por km unitario
 * \return void
 *
 */
void calculo(float precioA, float precioL, int kmIngresado);

/** \brief funcion para salir
 *
 * \param p char*
 * \return void
 *
 */
void confirmarSalida(char* p);
