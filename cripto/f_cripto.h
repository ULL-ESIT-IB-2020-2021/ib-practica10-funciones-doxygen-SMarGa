/**
  * Universidad de La Lagunaslogía
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file cripto.h
  * @author Saúl Martín alu0101405810@ull.edu.es
  * @date 12 Dic 2020
  * @brief Este programa encriptara un archivo .txt siguiendo dos formas encriptar conocidas,
  *        el Cifrado Cesar y el Cifrado xor.
  *        (El cifrado xor no está implementado)
  * @bug No hay bugs conocidos
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */

#ifndef _f_cripto
#define _f_cripto
#include "cifra_cesa.cc"

void CifraCesa(std::string nombre_del_arcivo, int contrasena);
void DesCesa(std::string nombre_del_arcivo, int contrasena);


#endif
