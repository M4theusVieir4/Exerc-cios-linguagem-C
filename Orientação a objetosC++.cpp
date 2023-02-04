#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

class Disciplina{
	public:
		Disciplina ();
		Disciplina (string nomeDisc);
		void setNome ( string nomeDisc);
		bool setNP1 (double nota);
		bool setNP2 (double nota);
		bool setExame (double nota);
		double calcularMedia();
		bool aprovar();
		void exibirStatus();
	private:
		void init();
		void exibirNota( string rotulo, double nota, bool presenca);
		string nome;
		double np1;
		double np2;
		double exame;
		bool fezNP1;
		bool fezNP2;
		bool fezExame;			
};

Disciplina::Disciplina(){
	cout << "Executando o construtor sem parametro para definir o nome." << endl;
	nome = "?";
	
	init();
}

Disciplina::Disciplina( string nomeDisc)
{
	cout << "Executando o construtor com nome definido como" << nomeDisc << endl;
	nome = nomeDisc;
	
	init();
}

void Disciplina::init(){
	fezNP1 = fezNP2 = fezExame = false;
	np1 = np2 = exame = 0.0;
}
bool Disciplina::setNP1(double nota){
	if(nota >=0 && nota <= 10.0){
		np1 = nota;
		fezNP1 = true;
		return true;
	}
	return false;
}
bool Disciplina::setNP2(double nota){
	if(nota >=0 && nota <= 10.0){
		np2 = nota;
		fezNP2 = true;
		return true;
	}
	return false;
}
bool Disciplina::setExame(double nota){
	if(nota >=0 && nota <= 10.0){
		exame = nota;
		fezExame = true;
		return true;
	}
	return false;
}

void Disciplina::exibirStatus(){
	double media = calcularMedia();
	cout << endl << "--------------------------------------------------" << endl;
	cout << endl << "Exibindo o status da disciplina" << nome << " : "<<endl;
	
	cout << fixed << setprecision(2);
	
	exibirNota("NP1 = ", np1, fezNP1);
	exibirNota("NP2 = ", np2, fezNP2);
	exibirNota("Exame = ", exame, fezExame);
	
	cout << endl << "Media = " << media << endl << endl;
	
	if(! fezExame){
		cout << endl <<"Aluno(a)" << (media >= 7.0 ? "aprovado(a)" : "ainda não aprovado(a).") << endl;
	}else{
		cout << endl <<"Aluno(a)" << (media >= 5.0 ? "aprovado(a)" : "ainda não aprovado(a).") << endl;
	}
	cout << endl << "---------------------------------------------------------------------------------" << endl;
}

void Disciplina::exibirNota(string rotulo, double nota, bool presenca) {
	if (presenca){
		cout << nota;
	}else{
		cout << "NC";
	}
}

double Disciplina::calcularMedia()
{
	double media = (np1 + np2) / 2.0;
	
	if (! fezExame){
	if(media >= 6.75 && media < 7.0){
		media = 7.0;
	}	
	}	
	else{
		media = (media + exame) / 2.0;
		if (media >= 4.75 && media <5.0){
			media = 5.0;
		}
	}
	return media;
}

bool Disciplina::aprovar(){
	double media = calcularMedia(); 
	if(media >= 7){
		return true;
	}
	if(fezExame && media >= 5.0)
	{
		return true;
	}
	return false;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	double nota;
	string nome;
	cout << "Digite o nome da disciplina: ";
	cin >> nome;
	
	Disciplina disc(nome);
	
	cout << endl << "Digite a nota da P1: ";
	cin >> nota;
	disc.setNP1(nota);
	disc.exibirStatus();
	
	if(disc.aprovar()){
		cout << endl << "Aprovado(a) sem Exame." << endl;
	}
	else{
		cout << endl << " Digite a nota do Exame";
		cin >> nota;
		disc.setExame(nota);
		disc.exibirStatus();
	}
	return 0;
}
