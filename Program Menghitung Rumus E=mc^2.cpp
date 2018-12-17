#include <iostream>
using namespace std;

int E;
int m;
int c;
int Hasil;

int main ()
	{
		cout <<"Masukan Nilai m: ";
		cin >> m;
		
		cout << "Masukan Niai c: ";
		cin >> c;
		
		//Rumus E = mc^2
		E = m * c;
		Hasil = E * E;
		cout <<"Hasil dari perhitungan E = mc^2 adalah = " <<Hasil;
		
		return 0;
	}
