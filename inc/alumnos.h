/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/
/*!
* \biref Estructura para almacenar datos de alumnos
* @struc alumno_s: nombre de la esctructura alumno_t
* @param apellido: apellido del alumno
* @param nombres: nombre/es del alumno, se debe separar por , en caso de ser mas de uno
* @param documento: número de documento del alumno
* 
*/
typedef struct alumno_s {
    char apellidos[30];
    char nombres[30];
    char documento[11];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/
/*!
* \biref Imprime los datos del alumno 
*
* Esta funcion imprime los datos del alumno en formato documento / apellido / nombres
* @param cadena: Puntero al inicio de la cadena a serializar con los datos del alumno
* @param espacio: largo de la cadena con los datos del alumno
* @param alumno: alumno a serializar
* @return resultado: devuelve un bool indicando si se pudo realizar la operación
*/
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);
/*!
* \biref Imprime los datos de todos los alumnos
*
* Esta funcion imprime los datos de todos los alumnos cargados en una cadena
* @param cadena: Puntero al inicio de la cadena con todos los alumnos serealizados
* @param espacio: largo de la cadena con los datos de los alumnos
* @return resultado: devuelve un bool indicando si se pudo realizar la operación
*/
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
