#ifndef PESSOA_H
#define PESSOA_H
#include <QString>

class Pessoa
{
private:
    int matricula;
    QString nome;
public:
    Pessoa();
    Pessoa(int matricula, QString nome);
    const QString &getNome() const;
    void setNome(const QString &newNome);
    int getMatricula() const;
    void setMatricula(int newMatricula);
};

#endif // PESSOA_H
