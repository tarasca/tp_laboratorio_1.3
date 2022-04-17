#ifndef BASS_H_INCLUDED
#define BASS_H_INCLUDED

/** \brief funcion del menu
 *
 * \return int devuelve un numero
 *
 */
int menu();

/** \brief funcion para los kilometros
 *
 * \return float devuelve km
 *
 */
float km();
/** \brief funcion para el ingreso del precio de aerolineas
 *
 * \return float devuelve el precio de aerolineas
 *
 */
float precioA();
/** \brief funcion para el ingreso del precio de latam
 *
 * \return float devuelve el precio de latam
 *
 */
float precioL();

/** \brief tanto esta funcion como las demas de debA hasta difLA son para calcular un precio y devolverlo
 *
 * \param float necesita el precio de aerolineas o de latam dependiendo que calcule
 * \return float devuelve el resultado
 *
 */
float debA(float);
float debL(float);
float credA(float);
float credL(float);
float btcA(float);
float btcL(float);
float unitA(float);
float unitL(float);
float difLA(float, float);

/** \brief funcion para la opcion cinco
 *
 * \return void no devuelve
 *
 */
void opcionCinco();

#endif // BASS_H_INCLUDED
