#include <iostream>

using namespace::std;

float pemangkat (double angka,double pangkat){
    if (pangkat==0)
        return 1;
    else
        return pemangkat (angka, pangkat-1)*angka;}

void hasil (string pilihan, double angka, double pangkat){
string positif, negatif;
if (pilihan =="positif")
    cout<<pemangkat (angka,pangkat);
    else if (pilihan=="negatif")
    cout<<1/pemangkat(angka,pangkat);
    else cout<<"ERROR";
}

main(){
int angka, pangkatangka;
string pilih;

cout<<"Input Angka   : ";cin>>angka;
cout<<"Input Pangkat : ";cin>>pangkatangka;
cout<<"Pilih Pangkat [positif/negatif]   : ";cin>>pilih;
cout<<"Hasil Pemangkatan : ";hasil (pilih, angka, pangkatangka);







};
