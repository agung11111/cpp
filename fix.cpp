#include"hotel.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	int menu, setuju, kel;
	cout<<"                 -------------------- ====================================== --------------------      "<<endl;
	cout<<"           --------------------===== -=: Selamat Datang di Hotel Flamengo :=- =====--------------------"<<endl;
	cout<<"                 -------------------- ====================================== --------------------      "<<endl;
	while(menu<=3){			//while
	cout<<"\nSilahkan Pilih yang Anda Perlukan "<<endl;
	cout<<"1. Penginapan"<<endl;
	cout<<"2. Rapat"<<endl;
	cout<<"3. Pernikahan"<<endl;
	cout<<"Pilih: ";
	cin>>menu;
	if (menu==1){
		inap();
	}
	else if (menu==2){
		rapat();
	}
	else if (menu==3){
		nikah();
	}
	else {
		cout<<"Pilihan Tidak Tersedia";
		getch();
		goto exit;
	}
	
cout<<"\n========================================================================================================================"<<endl;
cout<<"Jika anda setuju tekan 1: ";
cin>>setuju;
if (setuju==1){
	system("cls");
	cout<<"\t\t\t\t\t      Pendaftaran Berhasil"<<endl;
	cout<<"\t\t\t\t\t================================"<<endl;
	cout<<"\t\t\t\t\tPemesanan atas nama : "<<pmsn.nama<<endl;
	cout<<"\t\t\t\t\tDengan alamat       : "<<pmsn.alamat<<endl;
	cout<<"\t\t\t\t\tNomor Hp            : "<<pmsn.nohp<<endl;
	cout<<"\t\t\t\t\t\t Telah Terkonfirmasi"<<endl;
	cout<<"\n\t\t\t\t\tTotal biaya         : "<<pmsn.total<<endl;
	cout<<"\n\t\t\t\t  Silahkan Lakukan Pembayaran di Receptionist"<<endl;
	cout<<"\n\t\t\t\t\t================================";
	cout<<"\n\t\t\t\t\t=Terima Kasih Atas Kunjungannya=";
	cout<<"\n\t\t\t\t\t================================";
	getch();}
else {
	cout<<"\n========================================================================================================================"<<endl;
	cout<<"Terima Kasih Atas Kunjungannya"<<endl;
	getch();
	exit(0);}
exit:
	system("cls");
	cout<<"\n\ntekan 1 untuk transaksi lagi\ntekan 0 untuk keluar \n"; cin>>kel;
	switch(kel){ 		//kondisi switch
		case 0: exit(0); break;
		case 1: ; 
	}
	system("pause");
	system("cls");
}
}
