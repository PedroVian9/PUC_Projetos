#include "pessoa.h"

Pessoa::Pessoa():
    matricula(0),
    nome("")
{

}
Pessoa::Pessoa(int matricula, QString nome):
    matricula(matricula),
    nome(nome)
{

}
const QString &Pessoa::getNome() const
{
    return nome;
}

void Pessoa::setNome(const QString &newNome)
{
    nome = newNome;
}

int Pessoa::getMatricula() const
{
    return matricula;
}

void Pessoa::setMatricula(int newMatricula)
{
    matricula = newMatricula;
}
