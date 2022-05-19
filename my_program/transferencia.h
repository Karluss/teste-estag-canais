#ifndef __TRANSFERENCIA_H__
#define __TRANSFERENCIA_H__

#include <string>
#include "contaBancaria.h"

class Transferencia{
public:
    Transferencia(int id, float valorTransf, std::string tipoTransf, contaBancaria emissor, contaBancaria receptor);
    ~Transferencia();

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

    bool IsTransferenceValidate(contaBancaria emissor, contaBancaria receptor);
    bool checksPIXTransference();
    bool checksDOCTransference();
    bool checksTEDTransference();
    
private:
    int m_ID;
    float m_valorTransf;
    std::string m_tipoTransf;
    contaBancaria m_emissor;
    contaBancaria m_receptor;
};

#endif