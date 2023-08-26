#include <iostream>
using namespace std;

int main (){
	/*
	Nama	: Yudha Prawira
	NRP		: 5223600047
	Kelas	: GT11-B
	*/
	
	// Problem 1
	int X;
	float Y, sisa;
	cout << "Masukkan jumlah uang yang ditarik ($US) : "; cin >> X;
	cout << "Masukkan jumlah saldo Anda ($US) \t: "; cin >> Y;
	if ((Y + 0.5 >= X) && (X % 5 == 0)){
		sisa = (Y - 0.5) - X;
		cout << "Penarikan Berhasil" << endl;
		cout << "Saldo akun Anda saat ini : " << sisa << " $US";
	} else {
		cout << "Saldo akun Anda : " << Y << " $US";
	}
	
}
