#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

//Deklarasi function garis
void garis(){
	cout<<"===================================="<<endl;
}

main(){
	int lanjut,input1,miedec;
	int mie = 500;
	int terigu = 200;
	int bumbu = 350;
	menu:
	cout<<"Nama : Akhmad Ridlo Rifa'i\n"
	<<"NIM : 1227050013\n"
	<<"V-Warehouse | Manajemen Gudang"<<endl;
	garis();
	
	cout<<"Selamat Datang di  V-Warehouse!!\n"
	<<"Berikut adalah beberapa barang yang kami simpan!!"<<endl;
	garis();
	cout<<"1.Stok Mie Instan\n"
	<<"2.Stok Tepung Terigu\n"
	<<"Pilih berdasarkan nomor 1 dan 2!!"<<endl;
	cin>>input1;
	
	//Segmen Jual Beli Mie
	if (input1==1){
		system("cls");
		garis();
		cout<<"Merek Mie :\n"
		<<"1.Mie Sedap | Rp.60.000/box\n"
		<<"2.Indomie | Rp.80.000/box"<<endl;
		cout<<"Stok Mie Instan kita sekarang berjumlah "<<mie<<" box\n"
		<<"Anda ingin membeli atau menjual Mie Instan?\n"
		<<"1.Ingin membeli\n"
		<<"2.Ingin menjual"<<endl;
		cin>>miedec;
		
		//Segmen Beli Mie
		if (miedec==1){
			int mrkmie,beli,harga;
			garis();
			cout<<"Merek apa yang ingin kamu beli? (1/2)"<<endl;
			cin>>mrkmie;
			cout<<"Berapa box yang ingin anda beli?"<<endl;
			cin>>beli;
			if(mrkmie==1){
				garis();
				cout<<"Kamu memilih Mie Sedap!!\n"<<endl;
				if(beli>=10){
					cout<<"Selamat!! Kamu mendapatkan diskon 10%!!"<<endl;
					int diskon = 60000*10/100;
					harga = 60000*beli-diskon;
					mie = mie-beli;
					cout<<"Total harga yang harus anda bayarkan adalah Rp."<<harga<<" setelah di diskon sebesar Rp."<<diskon<<endl;
					cout<<"Apakah anda ingin melanjutkan pencarian di V-Warehouse? (1 untuk yes/2 untuk no)"<<endl;
					cin>>lanjut;
					if(lanjut==1){
						system("cls");
						goto menu;
					}else {
						return 0;
					}
				}else if(beli<10){
					harga = 60000*beli;
					mie = mie-beli;
					cout<<"Total harga yang harus anda bayar adalah Rp."<<harga<<endl;
					cout<<"Apakah anda ingin melanjutkan pencarian di V-Warehouse? (y/n)"<<endl;
					cin>>lanjut;
					if(lanjut==1){
						system("cls");
						goto menu;
					}else {
						return 0;
					}
				}
			} else if(mrkmie==2){
				garis();
				cout<<"Kamu memilih Indomie!!\n"<<endl;
				if(beli>=10){
					cout<<"Selamat!! Kamu mendapatkan diskon 30%!!"<<endl;
					int diskon = 80000*30/100;
					harga = 80000*beli-diskon;
					mie = mie-beli;
					cout<<"Total harga yang harus anda bayarkan adalah Rp."<<harga<<" setelah di diskon sebesar Rp."<<diskon<<endl;
					cout<<"Apakah anda ingin melanjutkan pencarian di V-Warehouse? (1 untuk yes/2 untuk no)"<<endl;
					cin>>lanjut;
					if(lanjut==1){
						system("cls");
						goto menu;
					}else {
						return 0;
					}
				}else if(beli<10){
					harga = 80000*beli;
					mie = mie-beli;
					cout<<"Total harga yang harus anda bayar adalah Rp."<<harga<<endl;
					cout<<"Apakah anda ingin melanjutkan pencarian di V-Warehouse? (y/n)"<<endl;
					cin>>lanjut;
					if(lanjut==1){
						system("cls");
						goto menu;
					}else {
						return 0;
					}
				}
			}else {
				cout<<"Maaf,Merek barang yang kamu inputkan tidak valid dalam data kami!!!"<<endl;
				getch();
				system("cls");
				goto menu; }
		//Segmen Jual Mie	
		}else if (miedec==2){
			int mrkmie,jual,harga;
			garis();
			cout<<"Merek apa yang ingin kamu jual? (1/2)"<<endl;
			cin>>mrkmie;
			cout<<"Berapa box yang ingin anda jual?"<<endl;
			cin>>jual;
			if(mrkmie==1){
				garis();
				cout<<"Kamu memilih Mie Sedap!!\n"<<endl;
				if(jual>=10){
					cout<<"Selamat!! Kamu mendapatkan bonus 10%!!"<<endl;
					int diskon = 60000*10/100;
					harga = 60000*jual+diskon;
					mie = mie+jual;
					cout<<"Total harga yang anda dapatkan adalah Rp."<<harga<<" setelah di bonus sebesar Rp."<<diskon<<endl;
					cout<<"Apakah anda ingin melanjutkan pencarian di V-Warehouse? (1 untuk yes/2 untuk no)"<<endl;
					cin>>lanjut;
					if(lanjut==1){
						system("cls");
						goto menu;
					}else {
						return 0;
					}
				}else if(jual<10){
					harga = 60000*jual;
					mie = mie+jual;
					cout<<"Total harga yang anda dapatkan adalah Rp."<<harga<<endl;
					cout<<"Apakah anda ingin melanjutkan pencarian di V-Warehouse? (y/n)"<<endl;
					cin>>lanjut;
					if(lanjut==1){
						system("cls");
						goto menu;
					}else {
						return 0;
					}
				}
			} else if(mrkmie==2){
				garis();
				cout<<"Kamu memilih Indomie!!\n"<<endl;
				if(jual>=10){
					cout<<"Selamat!! Kamu mendapatkan bonus 30%!!"<<endl;
					int diskon = 80000*30/100;
					harga = 80000*jual+diskon;
					mie = mie+jual;
					cout<<"Total harga yang anda dapatkan adalah Rp."<<harga<<" setelah di diskon sebesar Rp."<<diskon<<endl;
					cout<<"Apakah anda ingin melanjutkan pencarian di V-Warehouse? (1 untuk yes/2 untuk no)"<<endl;
					cin>>lanjut;
					if(lanjut==1){
						system("cls");
						goto menu;
					}else {
						return 0;
					}
				}else if(jual<10){
					harga = 80000*jual;
					mie = mie+jual;
					cout<<"Total harga yang anda dapatkan adalah Rp."<<harga<<endl;
					cout<<"Apakah anda ingin melanjutkan pencarian di V-Warehouse? (y/n)"<<endl;
					cin>>lanjut;
					if(lanjut==1){
						system("cls");
						goto menu;
					}else {
						return 0;
					}
				}
			} else {
				cout<<"Maaf,Merek barang yang kamu inputkan tidak valid dalam data kami!!!"<<endl;
				getch();
				system("cls");
				goto menu; }
				
		} else {
			cout<<"Maaf,Proses tidak valid!!"<<endl;
			getch();
			system("cls");
			goto menu; }
			
//=================================================================================	
	//Segmen Jual Beli Terigu
	}else if (input1==2){
		system("cls");
		garis();
		cout<<"Merek Terigu :\n"
		<<"1.Segibanyak Hejo | Rp.40.000/box\n"
		<<"2.Tulip Brand | Rp.70.000/box"<<endl;
		cout<<"Stok Tepung Terigu kita sekarang berjumlah "<<terigu<<" box\n"
		<<"Anda ingin membeli atau menjual Terigu?\n"
		<<"1.Ingin membeli\n"
		<<"2.Ingin menjual"<<endl;
		cin>>miedec;
		//Segmen Beli Terigu
		if (miedec==1){
			int mrktr,beli,harga;
			garis();
			cout<<"Merek apa yang ingin kamu beli? (1/2)"<<endl;
			cin>>mrktr;
			cout<<"Berapa box yang ingin anda beli?"<<endl;
			cin>>beli;
			if(mrktr==1){
				garis();
				cout<<"Kamu memilih Segibanyak Hejo !!\n"<<endl;
				if(beli>=10){
					cout<<"Selamat!! Kamu mendapatkan diskon 25%!!"<<endl;
					int diskon = 40000*25/100;
					harga = 40000*beli-diskon;
					terigu = terigu-beli;
					cout<<"Total harga yang harus anda bayarkan adalah Rp."<<harga<<" setelah di diskon sebesar Rp."<<diskon<<endl;
					cout<<"Apakah anda ingin melanjutkan pencarian di V-Warehouse? (1 untuk yes/2 untuk no)"<<endl;
					cin>>lanjut;
					if(lanjut==1){
						system("cls");
						goto menu;
					}else {
						return 0;
					}
				}else if(beli<10){
					harga = 40000*beli;
					terigu = terigu-beli;
					cout<<"Total harga yang harus anda bayar adalah Rp."<<harga<<endl;
					cout<<"Apakah anda ingin melanjutkan pencarian di V-Warehouse? (y/n)"<<endl;
					cin>>lanjut;
					if(lanjut==1){
						system("cls");
						goto menu;
					}else {
						return 0;
					}
				}
			} else if(mrktr==2){
				garis();
				cout<<"Kamu memilih Tulip Brand!!\n"<<endl;
				if(beli>=10){
					cout<<"Selamat!! Kamu mendapatkan diskon 15%!!"<<endl;
					int diskon = 70000*15/100;
					harga = 70000*beli-diskon;
					terigu = terigu-beli;
					cout<<"Total harga yang harus anda bayarkan adalah Rp."<<harga<<" setelah di diskon sebesar Rp."<<diskon<<endl;
					cout<<"Apakah anda ingin melanjutkan pencarian di V-Warehouse? (1 untuk yes/2 untuk no)"<<endl;
					cin>>lanjut;
					if(lanjut==1){
						system("cls");
						goto menu;
					}else {
						return 0;
					}
				}else if(beli<10){
					harga = 70000*beli;
					terigu = terigu-beli;
					cout<<"Total harga yang harus anda bayar adalah Rp."<<harga<<endl;
					cout<<"Apakah anda ingin melanjutkan pencarian di V-Warehouse? (y/n)"<<endl;
					cin>>lanjut;
					if(lanjut==1){
						system("cls");
						goto menu;
					}else {
						return 0;
					}
				}
			}else {
				cout<<"Maaf,Merek barang yang kamu inputkan tidak valid dalam data kami!!!"<<endl;
				getch();
				system("cls");
				goto menu; }
		//Segmen Jual Terigu
		}else if (miedec==2){
			int mrkmie,jual,harga;
			garis();
			cout<<"Merek apa yang ingin kamu jual? (1/2)"<<endl;
			cin>>mrkmie;
			cout<<"Berapa box yang ingin anda jual?"<<endl;
			cin>>jual;
			if(mrkmie==1){
				garis();
				cout<<"Kamu memilih Segibanyak Hejo!!\n"<<endl;
				if(jual>=10){
					cout<<"Selamat!! Kamu mendapatkan bonus 25%!!"<<endl;
					int diskon = 40000*25/100;
					harga = 40000*jual+diskon;
					terigu = terigu+jual;
					cout<<"Total harga yang anda dapatkan adalah Rp."<<harga<<" setelah di bonus sebesar Rp."<<diskon<<endl;
					cout<<"Apakah anda ingin melanjutkan pencarian di V-Warehouse? (y/n)"<<endl;
					cin>>lanjut;
					if(lanjut==1){
						system("cls");
						goto menu;
					}else {
						return 0;
					}
				}else if(jual<10){
					harga = 40000*jual;
					terigu = terigu+jual;
					cout<<"Total harga yang anda dapatkan adalah Rp."<<harga<<endl;
					cout<<"Apakah anda ingin melanjutkan pencarian di V-Warehouse? (y/n)"<<endl;
					cin>>lanjut;
					if(lanjut==1){
						system("cls");
						goto menu;
					}else {
						return 0;
					}
				}
			} else if(mrkmie==2){
				garis();
				cout<<"Kamu memilih Tulip Brand!!\n"<<endl;
				if(jual>=10){
					cout<<"Selamat!! Kamu mendapatkan bonus 15%!!"<<endl;
					int diskon = 70000*15/100;
					harga = 70000*jual+diskon;
					terigu = terigu+jual;
					cout<<"Total harga yang anda dapatkan adalah Rp."<<harga<<" setelah di diskon sebesar Rp."<<diskon<<endl;
					cout<<"Apakah anda ingin melanjutkan pencarian di V-Warehouse? (y/n)"<<endl;
					cin>>lanjut;
					if(lanjut==1){
						system("cls");
						goto menu;
					}else {
						return 0;
					}
				}else if(jual<10){
					harga = 70000*jual;
					terigu = terigu+jual;
					cout<<"Total harga yang anda dapatkan adalah Rp."<<harga<<endl;
					cout<<"Apakah anda ingin melanjutkan pencarian di V-Warehouse? (y/n)"<<endl;
					cin>>lanjut;
					if(lanjut==1){
						system("cls");
						goto menu;
					}else {
						return 0;
					}
				}
			} else {
				cout<<"Maaf,Merek barang yang kamu inputkan tidak valid dalam data kami!!!"<<endl;
				getch();
				system("cls");
				goto menu; }
				
		} else {
			cout<<"Maaf,Proses tidak valid!!"<<endl;
			getch();
			system("cls");
			goto menu; }
	} else {
		cout<<"Maaf,Kode barang yang kamu inputkan tidak valid!!!"<<endl;
		getch();
		system("cls");
		goto menu;
	}
}
