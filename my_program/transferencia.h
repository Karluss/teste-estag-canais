#ifndef __TRANSFERENCIA_H__
#define __TRANSFERENCIA_H__

#include <string>
#include "contaBancaria.h"

class Transferencia{
public:
    Transferencia(int id, float valorTransf, std::string tipoTransf, contaBancaria emissor, contaBancaria receptor);

    int GetID();
    void SetID(int id);

    float GetValorTransf();
    void SetValorTransf(float valorTransf);

    std::string GetTipoTransf();
    void SetTipoTransf(std::string tipoTransf);

    contaBancaria GetEmissor();
    void SetEmissor(contaBancaria emissor);

    contaBancaria GetReceptor();
    void SetReceptor(contaBancaria receptor);

    bool IsTransferenceValid(contaBancaria emissor, contaBancaria receptor);
    bool checksPIXTransference();
    bool checksDOCTransference();
    bool checksTEDTransference();

    void makeTransference(contaBancaria emissor, contaBancaria receptor);
    
private:
    int m_ID;
    float m_valorTransf;
    std::string m_tipoTransf;
    contaBancaria m_emissor;
    contaBancaria m_receptor;
};

#endif