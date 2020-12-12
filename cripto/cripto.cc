/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file cripto.cc
  * @author Saúl Martín alu0101405810@ull.edu.es
  * @date 12 Dic 2020
  * @brief Este programa encriptara un archivo .txt siguiendo dos formas encriptar conocidas,
  *        el Cifrado Cesar y el Cifrado xor.
  *        (El cifrado xor no está implementado)
  * @bug No hay bugs conocidos
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */
#include<iostream>
#include<string>
#include<fstream>
#include "f_cripto.h"

int main ( int argc, char* argv[]) {
  std::string name = argv[1];
  if(name=="--help"){
    std::cout << "fichero_entrada: Fichero a codificar" << std::endl;
    std::cout << "fichero_salida:  Fichero codificado" << std::endl;
    std::cout << "método:          Indica el método de encriptado" << std::endl;
    std::cout << "                   1: Cifrado xor " << std::endl;
    std::cout << "                   2: Cifrado de César" << std::endl;
    std::cout << "password:        Palabra secreta en el caso de método 1, Valor de K en el método 2" << std::endl;
    std::cout << "operación:       Operación a realizar en el fichero" << std::endl;
    std::cout << "                   +: encriptar el fichero" << std::endl;
    std::cout << "                    -: desencriptar el fichero" << std::endl;
    return 1;
  }
  std::string outname = argv[2];
  int cifrado = atoi(argv[3]);
  std::string modo = argv[5];
  if(cifrado==2){
  int contrasena = atoi(argv[4]);
    if(modo =="+"){
      CifraCesa(name,contrasena,outname);
    }
    if((modo =="-")){
      DesCesa(name,contrasena,outname);
    }
  }
  return 0;
}

