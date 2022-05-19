#ifndef __TRANSFERENCIA_H__
#define __TRANSFERENCIA_H__

#include <string>
#include "contaBancaria.h"

class Transferencia{
public:
    Transferencia(int id, float valorTransf, std::string tipoTransf, contaBancaria emissor, contaBancaria receptor);
    ~Transferencia();
private:
    int m_ID;
    float m_valorTransf;
    std::string m_tipoTransf;
    contaBancaria m_emissor;
    contaBancaria m_receptor;
};

#endif