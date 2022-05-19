#ifndef __CONTABANCARIA_H__
#define __CONTABANCARIA_H__

#include <string>

class contaBancaria{
public:
    contaBancaria(std::string nomeCliente,std::string CPF,int agencia,int conta);
    ~contaBancaria();

    std::string GetNomeCliente();
    void SetNomeCliente(std::string nomeCliente);

    std::string GetCPF();
    void SetCPF(std::string CPF);

    int GetAgencia();
    void SetAgencia(int agencia);

    int GetConta();
    void SetConta(int conta);

    float GetSaldo();
    void SetSaldo(float saldo);

    bool IsTheSameAccount(contaBancaria another);

private:
    std::string m_nomeCliente;
    std::string m_CPF;
    int m_agencia;
    int m_conta;
    float m_saldo;
};

#endif