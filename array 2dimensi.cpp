#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int matrik[2][2];
	int kolom, baris;

	cout <<"Nama : Annisa Permata Bunda \nNIM : 22343037\n";
	cout <<"Program menampilkan matrik 2x2\n";
	cout <<"Masukkan nilai yang akan ditampilkan\n";
	for (baris = 0; baris < 2; baris++)
	{
	    for (kolom = 0; kolom < 2; kolom++)
      {
       cout << "Masukkan nilai : ";
       cin >> matrik[baris][kolom];
      }
    }
    cout << "Hasilnya adalah : \n";
    for (baris = 0; baris < 2; baris++)
    {for (kolom = 0; kolom < 2; kolom++)
      {
       cout << matrik[baris][kolom];
       cout << " ";
      }
       cout << "\n";
    }
}
