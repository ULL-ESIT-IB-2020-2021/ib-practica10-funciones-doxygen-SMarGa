#include<iostream>
#include<string>
#include<fstream>
#include "f_cripto.h"

void DesCesa(std::string nombre_del_arcivo, int contrasena,std::string nombre_del_arcivo_salida){
  int contrasena_cesar = contrasena*(-1); 
  char modificado;
  char lectura;
  std::string lista_encriptada;
  std::ifstream finput(nombre_del_arcivo+".txt", std::ios_base::in);
  while(finput>> std::noskipws >>lectura){
    if(lectura!=' '){
      if(lectura=='z'){
        lista_encriptada.push_back('a');
      }else{
      modificado = lectura + contrasena_cesar;
      lista_encriptada.push_back(modificado);
      }
    }else{
      lista_encriptada.push_back(' ');
    }
    std::ofstream foutput(nombre_del_arcivo_salida+".txt", std::ios_base::out);
    foutput << lista_encriptada << std::endl;
    
  }
}

void CifraCesa(std::string nombre_del_arcivo, int contrasena,std::string nombre_del_arcivo_salida){
  int contrasena_cesar = contrasena; 
  char modificado;
  char lectura;
  std::string lista_encriptada;
  std::ifstream finput(nombre_del_arcivo+".txt", std::ios_base::in);
  while(finput>> std::noskipws >>lectura){
    if(lectura!=' '){
      if(lectura=='z'){
        lista_encriptada.push_back('a');
      }else{
      modificado = lectura + contrasena_cesar;
      lista_encriptada.push_back(modificado);
      }
    }else{
      lista_encriptada.push_back(' ');
    }
    std::ofstream foutput(nombre_del_arcivo_salida+".txt", std::ios_base::out);
    foutput << lista_encriptada << std::endl;
    
  }
}