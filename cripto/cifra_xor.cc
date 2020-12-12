#include<iostream>
#include<string>
#include<fstream>
#include <vector>
#include "f_cripto.h"

void CifraXor(std::string nombre_del_arcivo, std::string contrasena,std::string nombre_del_arcivo_salida){
  std::vector<char> contrasena_xor(contrasena.begin(),contrasena.end());
  for(int i=0; i < contrasena_xor.size(); i++ ){
    contrasena_xor[i] = contrasena_xor[i] xor 128;
  }
  char modificado;
  char lectura;
  std::string lista_encriptada;
  std::ifstream finput(nombre_del_arcivo+".txt", std::ios_base::in);
  while(finput>> std::noskipws >>lectura){
    int letra_contrasena= 0;
    if(lectura!=' '){
      modificado = lectura xor contrasena_xor[letra_contrasena];
      lista_encriptada.push_back(modificado);
      letra_contrasena++;
      if(letra_contrasena==contrasena_xor.size()){
        letra_contrasena= 0;
      }
    }else{
      lista_encriptada.push_back(' ');
    }
    std::ofstream foutput(nombre_del_arcivo_salida+".txt", std::ios_base::out);
    foutput << lista_encriptada << std::endl;
  }
}