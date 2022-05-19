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

bool Transferencia::IsTransferenceValidate(contaBancaria emissor, contaBancaria receptor){
    if (!emissor.IsTheSameAccount(receptor)){
        return false;
    }

    if (this->GetTipoTransf() == "PIX"){
        return this->checksPIXTransference();
    }
    else if (this->GetTipoTransf() == "DOC"){
        return this->checksDOCTransference();
    }
    else if(this->GetTipoTransf() == "TED"){
        return this->checksTEDTransference();
    }
}

bool Transferencia::checksPIXTransference(){
    if (this->GetValorTransf() > 5000){
        std::cout << "Sua transferência não foi realizada pois o PIX só aceita transferência de até 5 mil reais. O valor desta transferência é superior." << std::endl;
        return false;
    }
    return true;
}

bool Transferencia::checksDOCTransference(){
    if (this->GetValorTransf() < 10000){
        std::cout << "Sua transferência não foi realizada pois o DOC só aceita transferência superior ao valor de 10 mil reais. O valor desta transferência é inferior." << std::endl;
        return false;
    }
    return true;
}

bool Transferencia::checksTEDTransference(){
    if (this->GetValorTransf() > 5000 && this->GetValorTransf() <= 10000){
        std::cout << "Sua transferência não foi realizada pois o TED só aceita transferência acima 5 mil reais e até 10 mil reais. O valor desta transferência não atende tal critério." << std::endl;
        return false;
    }
    return true;
}