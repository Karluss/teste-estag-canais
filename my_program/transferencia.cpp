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

int Transferencia::GetID(){
    return m_ID;
}
void Transferencia::SetID(int id){
    m_ID = id;
}

float Transferencia::GetValorTransf(){
    return m_valorTransf;
}
void Transferencia::SetValorTransf(float valorTransf){
    m_valorTransf = valorTransf;
}

std::string Transferencia::GetTipoTransf(){
    return m_tipoTransf;
}
void Transferencia::SetTipoTransf(std::string tipoTransf){
    m_tipoTransf = tipoTransf;
}

contaBancaria Transferencia::GetEmissor(){
    return m_emissor;
}
void Transferencia::SetEmissor(contaBancaria emissor){
    m_emissor = emissor;
}

contaBancaria Transferencia::GetReceptor(){
    return m_receptor;
}
void Transferencia::SetReceptor(contaBancaria receptor){
    m_receptor = receptor;
}