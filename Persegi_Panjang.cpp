#include <iostream>
using namespace std;
//luas
double luas(double p,double l){
	double luas = p * l;
	return luas;
}
double keliling(double p,double l){
	double keliling = 2*(p + l);
	return keliling;
}
void tampilkan(double hasil){
	cout << hasil << endl;
}
int main(){
cout << "Program menghitung Luas & Keliling\n";
char plh;
cout <<"Mencari Luas(l) / Keliling(k) = ";
cin >>plh;
while(true){
	if(plh == 'l'){
		cout <<"Mencari Luas\n";
	double panjang,lebar,hasil;
cout <<"Panjangnya = ";
cin >> panjang;
cout <<"Luasnya = ";
cin >> lebar;
hasil = luas(panjang,lebar);
tampilkan(hasil);
cout <<"Mencari Luas(l) / Keliling(k) = ";
cin >>plh;	
	}else if (plh == 'k'){
		cout <<"Mencari Keliling\n";
	double panjang,lebar,hasil;
cout <<"Panjangnya = ";
cin >> panjang;
cout <<"Luasnya = ";
cin >> lebar;
hasil = keliling(panjang,lebar);
tampilkan(hasil);	
cout <<"Mencari Luas(l) / Keliling(k) = ";
cin >>plh;
	}else{
		cout <<"SALAH PILIH INPUT CUYY \n";
		break;
	}
}


	cin.get();
	return 0;
}
