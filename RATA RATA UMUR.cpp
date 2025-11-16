// RATA RATA UMUR (ARRAY)
// by Fernando saputra (2021210069)

#include <iostream>

using namespace std;

int main (){
	
	// --------------- Tampilan awal ------------
	
	cout << "\n ||NAMA	: Fernando Saputra" << endl ;
	cout << " ||NIM	: 2021210069 (2C)" << endl ;
	
	
	//---------------- memasukkan data dari user ------------
	
	int a[5];
	int RU; // RU = Rata - rata umur
	
	cout << "\n ||UMUR 1	: " ;
	cin >> a[1];
	cout << " ||UMUR 2	: " ;
	cin >> a[2];
	cout << " ||UMUR 3	: " ;
	cin >> a[3];
	cout << " ||UMUR 4	: " ;
	cin >> a[4];
	cout << " ||UMUR 5	: " ;
	cin >> a[5];
	
	// ---------- proses perhitungan -------------
	
	RU = (a[1] + a[2] + a[3] + a[4] + a[5]) /5 ;
	cout << "\n \n ||HASIL	: " << RU;
	
	return 0;
}
