#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
class Aluno{
private:
    string nome;
    string matricula;
public:
    const string& getMatricula() const {
        return matricula;
    }

    void setMatricula(const string &matricula) {
        this->matricula = matricula;
    }

    const string& getNome() const {
        return nome;
    }

    void setNome(const string &nome) {
        this->nome = nome;
    }
};
int menu(){
    int op;
    cout<<"1 - Incluir Aluno"<<endl;
    cout<<"2 - Consultar Aluno"<<endl;
    cout<<"3 - Atualizar Aluno"<<endl;
    cout<<"4 - Deletar Aluno"<<endl;
    cout<<"0 - Sair"<<endl;
    cout<<"Digite a opção desejada:";
    cin>>op;
    cout<<endl;
    return op;
}

bool incluirAluno(string nomeArquivo, string nome, string matricula){
       ofstream arquivo;
       arquivo.open(nomeArquivo, ios_base::app);
       if(arquivo.is_open()) {
           arquivo<< " ";
           arquivo << matricula;
           arquivo << "  ";
           arquivo << nome << endl;
           arquivo.close();
           return true;
       }
       else {
           cout << "Erro ao abrir o arquivo " << nomeArquivo << endl;
           return false;
       }
   }

Aluno* buscarAluno(string mat)
{
    ifstream arquivo;
    string linha, verificacao = "", nome = "";

    arquivo.open("alunos.txt");

        while(std::getline(arquivo, linha))
        {
            for(int i = 1; i < 15; i++){
                verificacao += linha[i];
            }
            if(verificacao == mat){
                Aluno *pAluno = new Aluno;
                pAluno -> setMatricula(mat);
                for(int i = 17; i < linha.size();i++){
                    nome += linha[i];
                }
                pAluno -> setNome(nome);
                arquivo.close();
                return pAluno;
            }
            verificacao = "";
        }
            arquivo.close();
            return NULL;

}

int main(){
    int opcao;
    string nome, matricula;
    Aluno *pAluno=NULL;
    vector<Aluno*> vetor;
    opcao=menu();

    ofstream arquivo;
    arquivo.open("alunos.txt", ios::app);


    while(opcao!=0){

        switch(opcao){
        case 1://Incluir Aluno
            cout<<"Digite o nome do aluno:";
            cin.ignore();
            getline(cin, nome);
            cout<<"Digite a matrícula do aluno:";
            cin >> matricula;
            //Criar uma função bool incluirAluno(Aluno* p)
            if (incluirAluno("alunos.txt", nome, matricula))
            {
                   cout << "Texto incluído com sucesso no arquivo" << endl<<endl;;
            }
               else
               {
                   cout << "Erro ao incluir texto no arquivo" << endl<<endl;
               }
            pAluno=NULL;
            break;

        case 2://Consultar Aluno
            cout<<"Digite a matrícula do Aluno:";
            cin>>matricula;
            pAluno = buscarAluno(matricula);
            if (pAluno!=NULL){
                cout<<"Aluno encontrado"<<endl;
                cout<<"Nome: "<<pAluno->getNome()<<endl<<endl;
            }

            else
                cout<<"Aluno não encontrado"<<endl;
            break;
            pAluno=NULL;
        case 3://Atualizar Aluno
            break;
        case 4://Deletar Aluno
            break;
        }
        opcao=menu();
    }

    return 0;
}
