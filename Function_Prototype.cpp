#include <iostream>
using namespace std ;

void cetakInfo () {
	cout << "Akan menampilkan hasil Perhitungan Basar Tegangan" << endl ;
}

double Tegangan (double i, double r) {
	return i * r ;
}


int main () {
	cetakInfo () ;
	double i, r ;
	cout << "Masukkan arus :" ;
	cin >> i ;
	cout << "Masukkan hambatan :" ;
	cin >> r ;
	cout << "Hasil Perhitungan Tegangan  = " << Tegangan (i, r) << " volt"<< endl ;
	
	return 0 ;
}
