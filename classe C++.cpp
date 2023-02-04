#include<iostream>

using namespace std;

class MinhaClasse{
	public:
		MinhaClasse();
		~MinhaClasse();
};

MinhaClasse::MinhaClasse() {
	cout << endl << "Executando o construtor." << endl;
}
MinhaClasse::~MinhaClasse()
{
	cout << endl << "Executando o desconstrutor" << endl;
}

int main() {
	MinhaClasse objeto;
	return 0;
}
