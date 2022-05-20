#include "contaBancaria.h"
#include <iostream>

contaBancaria::contaBancaria(std::string nomeCliente,std::string CPF,int agencia,int conta)
    :m_nomeCliente(nomeCliente),
    m_CPF(CPF),
    m_agencia(agencia),
    m_conta(conta),
    m_saldo(0.0)
{

}

std::string contaBancaria::GetNomeCliente(){
    return m_nomeCliente;
}

void contaBancaria::SetNomeCliente(std::string nomeCliente){
    m_nomeCliente = nomeCliente;
}

std::string contaBancaria::GetCPF(){
    return m_CPF;
}
void contaBancaria::SetCPF(std::string CPF){
    m_CPF = CPF;
}

int contaBancaria::GetAgencia(){
    return m_agencia;
}
void contaBancaria::SetAgencia(int agencia){
    m_agencia = agencia;
}

int contaBancaria::GetConta(){
    return m_conta;
}
void contaBancaria::SetConta(int conta){
    m_conta = conta;
}

float contaBancaria::GetSaldo(){
    return m_saldo;
}
void contaBancaria::SetSaldo(float saldo){
    m_saldo = saldo;
}

bool contaBancaria::IsTheSameAccount(contaBancaria another){
    if (this->GetConta() == another.GetConta() && this->GetAgencia() == another.GetAgencia()){
        return true;
    }
    return false;
}

