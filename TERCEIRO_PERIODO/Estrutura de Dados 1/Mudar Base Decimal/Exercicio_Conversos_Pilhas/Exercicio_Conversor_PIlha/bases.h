#ifndef BASES_H
#define BASES_H
namespace gma{

class Bases
{
private:
    int valor;
    int base;
    char *seq;

public:

    Bases(int valor, int base);

    void dec2base(int valor, int base);

};
}
#endif // BASES_H

