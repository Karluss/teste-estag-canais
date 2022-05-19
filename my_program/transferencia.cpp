#include "transferencia.h"
#include <iostream>

Transferencia::Transferencia(int id, float valorTransf, std::string tipoTransf, contaBancaria emissor, contaBancaria receptor)
    :m_ID(id),
    m_valorTransf(valorTransf),
    m_tipoTransf(tipoTransf),
    m_emissor(emissor),
    m_receptor(receptor)
{
}

Transferencia::~Transferencia(){
    
}