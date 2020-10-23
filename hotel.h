#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int totalharga(int lama, int harga){		//function
	return lama*harga;
}

struct data_pemesan{		//struct
char nama[50], alamat[50];	
int nohp;
int biaya[6];		//array
int total;}pmsn;

void inap(){		//procedure
int sewa, lama, harga;
pmsn.biaya[0]= 5000000;
pmsn.biaya[1]= 300000;

cout<<"========================================================================================================================"<<endl;
		system("cls");
		cout<<"Sewa Kamar Untuk?"<<endl;
		cout<<"1. Perhari"<<endl;
		cout<<"2. Perbulan"<<endl;
		cout<<"Pilih: ";
		cin>>sewa;
	if(sewa==2){			//kondisi if
			cout<<"========================================================================================================================"<<endl;
			cout<<"\nBiaya Sewa Kamar Perbulannya: Rp.5.000.000,-"<<endl;
			cout<<"========================================================================================================================"<<endl;
			printf("Pemesanan Atas Nama: ");
			cin>>pmsn.nama;
			fflush(stdin);
			printf("Alamat: ");
			cin>>pmsn.alamat;
			cout<<"Nomor Telepon yang Bisa Dihubungi: ";
			cin>>pmsn.nohp;
			cout<<"Untuk Berapa Bulan: ";
			cin>>lama;
			harga=pmsn.biaya[0];
			pmsn.total=totalharga(lama, harga);
			cout<<"Jadi, totalnya adalah "<<pmsn.total;
			}	
	else if (sewa==1){
			cout<<"========================================================================================================================"<<endl;
			cout<<"\nBiaya Sewa Kamar Perharinya: Rp.300.000,-"<<endl;
			cout<<"========================================================================================================================"<<endl;
			printf("Pemesanan Atas Nama: ");
			cin>>pmsn.nama;
			printf("Alamat: ");
			cin>>pmsn.alamat;
			cout<<"Nomor Telepon yang Bisa Dihubungi: ";
			cin>>pmsn.nohp;
			cout<<"Untuk Berapa Hari: ";
			cin>>lama;
			harga=pmsn.biaya[1];
			pmsn.total=totalharga(lama, harga);
			cout<<"Jadi, totalnya adalah "<<pmsn.total;}
	else {
		cout<<"Pilihan Tidak Tersedia";
		getch();
		exit(0);
	}
}

void rapat(){		//procedure
char namadt[50];
int sewa, lama, harga;
pmsn.biaya[2]= 200000;
pmsn.biaya[3]= 100000;
			system("cls");
			cout<<"\nSilahkan Pilih Paket"<<endl;
			cout<<"1. Lengkap"<<endl;
			cout<<"2. Ruangan Saja"<<endl;
			cout<<"Pilih: ";
			cin>>sewa;
			if(sewa==1){
					cout<<"========================================================================================================================"<<endl;
					cout<<"\nBiaya: Rp.200.000,-/jam"<<endl;
					cout<<"========================================================================================================================"<<endl;
					printf("Pemesanan Atas Nama: ");
					cin>>pmsn.nama;
					printf("Alamat: ");
					cin>>pmsn.alamat;
					cout<<"Nomor Telepon yang Bisa Dihubungi: ";
					cin>>pmsn.nohp;
					cout<<"Untuk Berapa Jam: ";
					cin>>lama;
					harga=pmsn.biaya[2];
					pmsn.total=totalharga(lama, harga);
					int a=1;
					int n;
					cout<<"Berapa orang yang akan hadir? ";
					cin>>n;
					for(int i=0; i<n; i++){			//for
						printf("\nMasukan Nama Penting Peserta Rapat: ");	cin>>namadt;
						a++;}
						
					cout<<"Jadi, totalnya adalah "<<pmsn.total;
				}
			else if(sewa==2){
					cout<<"========================================================================================================================"<<endl;
					cout<<"\nBiaya: Rp.100.000,-/jam"<<endl;
					cout<<"========================================================================================================================"<<endl;
					printf("Pemesanan Atas Nama: ");
					cin>>pmsn.nama;
					printf("Alamat: ");
					cin>>pmsn.alamat;
					cout<<"Nomor Telepon yang Bisa Dihubungi: ";
					cin>>pmsn.nohp;
					cout<<"Untuk Berapa Jam: ";
					cin>>lama;
					harga=pmsn.biaya[3];
					pmsn.total=totalharga(lama, harga);
					int a=1;
					int n;
					cout<<"Berapa orang yang akan hadir? ";
					cin>>n;
					for(int i=0; i<n; i++){			//for
						printf("\nMasukan Nama Penting Peserta Rapat: ");	cin>>namadt;
						a++;
					}
					cout<<"Jadi, totalnya adalah "<<pmsn.total;
			}
			else {
				cout<<"Pilihan Tidak Tersedia";
				getch();
				exit(0);
				}	
		}
	
void nikah(){		//procedure

int sewa, harga;

pmsn.biaya[4]= 200000000;
pmsn.biaya[5]= 75000000;
		system("cls");
		cout<<"\nSilahkan Pilih Paket"<<endl;
		cout<<"1. Mewah"<<endl;
		cout<<"2. Biasa"<<endl;
		cout<<"Pilih: ";
		cin>>sewa;
			if(sewa==1){
					cout<<"========================================================================================================================"<<endl;
					printf("Pemesanan Atas Nama: ");
					cin>>pmsn.nama;
					printf("Alamat: ");
					cin>>pmsn.alamat;
					cout<<"Nomor Telepon yang Bisa Dihubungi: ";
					cin>>pmsn.nohp;
					cout<<"\nKapasitas: 2000 Orang";
					cout<<"\nBiaya: Rp.200.000.000,-"<<endl;
					pmsn.total=pmsn.biaya[4];
					}
				
			else if (sewa==2){
					cout<<"========================================================================================================================"<<endl;
					printf("Pemesanan Atas Nama: ");
					cin>>pmsn.nama;
					printf("Alamat: ");
					cin>>pmsn.alamat;
					cout<<"Nomor Telepon yang Bisa Dihubungi: ";
					cin>>pmsn.nohp;
					cout<<"\nKapasitas: 500 Orang";
					cout<<"\nBiaya: Rp.75.000.000"<<endl;
					pmsn.total=pmsn.biaya[5];
					}
			else {
					cout<<"Pilihan Tidak Tersedia";
					getch();
					exit(0);
				}	
				
		}
