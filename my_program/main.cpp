#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "contaBancaria.h"
#include "transferencia.h"

int main(){
    std::ifstream data("entrada.txt");
    std::string str, array[11];
    std::getline(data,str); //Pula linha de variáveis do txt
    std::getline(data,str); // Pula linha vazia
    std::getline(data,str);
    std::string delimiter = "|";

    size_t pos = 0;
    int i = 0;
    std::string token;

    while ((pos = str.find(delimiter)) != std::string::npos){
        token = str.substr(0,pos);
        array[i] = token;
        str.erase(0, pos + delimiter.length());
        i++;
    }

    int idTransf = std::stoi(array[0]); //converte ID de string pra int
    float valorTransf = std::stof(array[1]);
    std::string tipoTransf = array[2];
    std::string nomeEmissor = array[3];
    int agenciaEmissor = std::stoi(array[4]);
    int contaEmissor = std::stoi(array[5]);
    std::string CPFEmissor = array[6];
    std::string nomeReceptor = array[7];
    int agenciaReceptor = std::stoi(array[8]);
    int contaReceptor = std::stoi(array[9]);
    std::string CPFReceptor = array[10];

    contaBancaria Emissor(nomeEmissor,CPFEmissor,agenciaEmissor,contaEmissor);
    contaBancaria Receptor(nomeReceptor,CPFReceptor,agenciaReceptor,contaReceptor);
    Transferencia transferencia(idTransf,valorTransf,tipoTransf,Emissor,Receptor);

    transferencia.makeTransference(Emissor,Receptor);
}

