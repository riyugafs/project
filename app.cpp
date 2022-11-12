#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

string nama, kelas;
int main(){
	cout<<"========================================="<<endl;
	cout<<"Masukan nama : ";
	getline(cin, nama);
	cout<<"Masukan kode kelas : ";
	getline(cin, kelas);
	cout<<"========================================="<<endl;
	
	cout<<"ARRAY MATRIKS"<<endl;
	int a [3][3], b[3][3], c[3][3], i, j;
	// int i => sebagai penampung nilai baris
	// int j => sebagai penampung nilai kolom
	
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		
		cout<<"  Masukan Nilai Baris "<<(i+1)<<" , kolom "<<(j+1)<<" = ";
		
	cin>>a[i][j];}
	cout<<endl;}
	cout<<"========================================="<<endl;
	cout<<"Hasil Program ARRAY MATRIKS dari : "<<nama<<" Kelas : " <<kelas<<endl;
	cout<<endl;
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	cout<<setw(4)<<a[i][j];}
	cout<<endl<<endl;}
	getch ();
	cout<<"=====================SELESAI======================";
	
}
