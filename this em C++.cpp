#include<iostream>

using namespace std;

class Disciplina {
	public:
		Disciplina( string nome);
	private:
		string nome;
		double np1;
		double np2;
		double media;
};
Disciplina::Disciplina( string nome){
	cout << endl << "Executando o construtor.";
	this ->nome = nome;
	cout << endl << "Nome da disciplina" << this->nome << endl;
	np1 = 0;
	np2 = 0;
	media = 0;
}
int main(){
	Disciplina strdata("Estrutura de Dados");
	strdata.np1 = 1000;
	return 0;
}

