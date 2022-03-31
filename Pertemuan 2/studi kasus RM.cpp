#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main ()
{
	int s, y[100], x[5], a, i, ak, ag, ug, cg, ar, g, h, j, ho;
	float z [100], tot [100]; 
	double tot_semua, tot_bayar;
	ofstream myfile;
	ak = 21000;
	ag = 17000;
	ug = 19000;
	cg = 20000;
	ar = 25000;
	cout<<"\t\tRumah Makan Sabar Indah\n"<<endl;
	cout<<" Menu yang tersedia : \n";
	cout<<" 1. Ayam geprek		: Rp.21000\n";
	cout<<" 2. Ayam goreng		: Rp.17000\n";
	cout<<" 3. Udang goreng	: Rp.19000\n";
	cout<<" 4. Cumi goreng		: Rp.20000\n";
	cout<<" 5. Ayam bakar		: Rp.25000\n\n";
	x[0]=ak;
	x[1]=ag;
	x[2]=ug;
	x[3]=cg;
	x[4]=ar;
	do
	{
		cout<<" 1. Masukkan Pesanan"<<endl;
		cout<<" 2. Mengeluarkan Struk Belanja (Keluar)"<<endl;
		cout<<" Pilihlah menu no 1 dahulu baru menu no 2: ";
		cin>>s;
		cout<<endl;
		cout<<"===================================================================="<<endl;
	
		if (s == 1)
		{
			cout<<" Masukkan Jumlah Jenis Pesanan Yang Dibeli! : ";
			cin>>a;
			for (int i=1; i<=a; i++)
			{
				cout<<"============================================="<<endl;
				cout<<" Pesanan ke-"<<i<<endl;
				cout<<" Masukkan Nomor Pesanan (Lihat Menu) : ";
				cin>>g;
				h = g-1;
				x[h];
				cout<<" Masukkan Jumlah Pesanan yang dibeli : ";
				cin>>y[i];
				tot [i] = y [i]*x[h];
				cout<<" Harga Total Pesanan : Rp."<<tot[i]<<endl;
				tot_semua += tot [i];
			}
			cout<<"============================================="<<endl;
			cout<<" Masukan Jarak ongkir (KM) : ";cin>>j;
			if(j < 3){
				ho = 15000;
			}else{
				ho = 25000;
			}
			if(tot_semua > 25000 && tot_semua < 50000){
				ho = ho - 3000;
			}else if(tot_semua > 50000 && tot_semua < 150000){
				ho = ho - 5000;
			}else if(tot_semua > 150000){
				ho = ho - 8000 ;
			}
			if(tot_semua > 50000 && tot_semua < 150000){
				tot_bayar = tot_semua - (tot_semua * 0.15) + ho; 
			}else if(tot_semua > 150000){
				tot_bayar = tot_semua - (tot_semua * 0.35) + ho;
			}
			cout<<endl;
			
			cout<<" Total Harga Dari Semua Pesanan adalah Rp."<<tot_bayar<<endl<<endl<<endl;
			cout<<"============================================================\n"<<endl;			
		}
		else
		{
			cout<<"============================================"<<endl;
			cout<<"|               STRUK PESANAN              |"<<endl;
			cout<<"============================================"<<endl;
			cout<<" Total Bayar   = "<<tot_semua<<endl;
			cout<<" Diskon = ";
			if(tot_semua > 50000 && tot_semua < 150000){
				cout<<"15%  = "<<tot_semua - (tot_semua * 0.15);
			}else if(tot_semua > 150000){
				cout<<"35%  = "<<tot_semua - (tot_semua * 0.35);
			}
			cout<<"\n";
			cout<<" Ongkir        = "<<ho;
			cout<<endl;
			cout<<"|==========================================|"<<endl;
			cout<<"|Total Harga Semua Pesanan : Rp."<<tot_bayar<<" |"<<endl;
			cout<<"|==========================================|"<<endl;
			cout<<"|TERIMAKASIH TELAH BERKUNJUNG KE RUMAH MAKAN KAMI |"<<endl;
			cout<<"============================================"<<endl;
			myfile.open("Struk.txt", ios::trunc);
			myfile<<"============================================"<<endl;
			myfile<<"|               STRUK PESANAN              |"<<endl;
			myfile<<"============================================"<<endl;
			myfile<<" Total Bayar  = "<<tot_semua<<endl;
			myfile<<" Diskon = ";
			if(tot_semua > 50000 && tot_semua < 150000){
				myfile<<"15% = "<<tot_semua - (tot_semua * 0.15);
			}else if(tot_semua > 150000){
				myfile<<"35% = "<<tot_semua - (tot_semua * 0.35);
			}
			myfile<<"\n";
			myfile<<" Ongkir       = "<<ho;
			myfile<<endl;
			myfile<<"|==========================================|"<<endl;
			myfile<<"|Total Harga Semua Pesanan : Rp."<<tot_bayar<<" |"<<endl;
			myfile<<"|==========================================|"<<endl;
			myfile<<"|TERIMAKASIH TELAH BERKUNJUNG KE RUMAH MAKAN KAMI |"<<endl;
			myfile<<"============================================"<<endl;
		}	
	}while (s == 1);
	return 0;
}	
