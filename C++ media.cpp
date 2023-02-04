#include <iostream>

using namespace std;

int main(){
	double np1, np2, media;
	cout << "Digite a nota P1: ";
	cin >> np1;
	
	cout << "Digite a nota da P2: ";
	cin >> np2;
	media = (np1 + np2)/2;
	
	cout << endl << "Media = " << media << endl;
	if(media >=5){
		cout << endl << "Aluno(a) aprovado(a)" << endl;
	} else{
		cout << endl << "Aluno(a) aprovado(a)" <<endl;
	} 
	return 0;
}
