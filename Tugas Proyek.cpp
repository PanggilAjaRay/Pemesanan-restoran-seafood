#include<iostream>
#include<fstream>
using namespace std;
struct menu{
	string nama;
	double harga;
	int kuantitas;
};
int main(){
	menu makanan[100];
	menu makanan1;
	makanan1.nama = "1. Gulai Kepala Ikan";
	makanan1.harga = 18000;
	makanan1.kuantitas = 30;
	
	menu makanan2;
	makanan2.nama = "2. Udang goreng asam manis";
	makanan2.harga = 40000;
	makanan2.kuantitas = 30;
	
	menu makanan3;
	makanan3.nama = "3. Cumi Goreng Tepung";
	makanan3.harga = 30000;
	makanan3.kuantitas = 30;
	
	int pilihan,pilihmakan,pilihminum,
	kuantitasMakan,pesan,totalmakan,totalminum,kuantitasMinum;
	int n = 0;
	bool repeat = true;
	
	while (repeat){	
	cout<<"============================"<<endl;
	cout<<"     RESTORAN SEAFOOD 88	  "<<endl;
	cout<<"============================"<<endl;

	cout<<"Selamat datang,silahkan pilih menu dibawah"<<endl;
	cout<<"1. Pesan Makanan"<<endl;
	cout<<"2. Nota Pemesanan"<<endl;
	cout<<"3. Keluar"<<endl;
	cout<<"Pilihan anda : ";cin>>pilihan;
	cin.ignore();
	cout<<endl;

	switch (pilihan){
		case 1 :{
			
			cout<<"Makanan : "<<endl;
			cout<< makanan1.nama << "\t\tRp.";
			cout<< makanan1.harga<<endl;
			cout<< makanan2.nama << "\tRp.";
			cout<< makanan2.harga<<endl;
			cout<< makanan3.nama << "\t\tRp.";
			cout<< makanan3.harga<<endl;
			cout<<"Pilih makanan: ";cin>> pilihmakan;
			cout<<"Jumlah Pemesanan: "; cin>>kuantitasMakan;
			cout<<endl;
			
			if(pilihmakan == 1){
				totalmakan= 18000;
			}
			else if(pilihmakan == 2){
				totalmakan= 40000;
			}
			else if (pilihmakan == 3){
				totalmakan= 30000;
			}
			else {
				cout<<"Makanan tidak tersedia";
			}
			
			cout<<"Minuman : "<<endl;
			cout << "1. Es teh\t\t\tRp.5000"<<endl;
			cout << "2. Orange Juice\t\t\tRp.7000"<<endl;
			cout << "3. Beer\t\t\t\tRp.10000"<<endl;
			cout<< "Pilih minuman: ";cin>>pilihminum;
			cout<<"Jumlah Pemesanan: "; cin>>kuantitasMinum;
			if(pilihminum == 1){
				totalminum= 5000;
			}
			else if(pilihminum == 2){
				totalmakan= 7000;
			}
			else if (pilihminum == 3){
				totalmakan= 10000;
			}
			else {
				cout<<"Minuman tidak tersedia";
			}
			cin.ignore();
			n++;
			break;
		}
	
		case 2:{
			system ("cls");
			if (n==0){
				cout<<"Anda tidak memesan apapun";
			}
			else {
				cout<<"==========================="<<endl;
				cout<<"===== NOTA PEMBAYARAN ====="<<endl;
				cout<<"==========================="<<endl;
				for(int i = 0; i < n; i++){
					std::ofstream outfile;
    				outfile.open("nota.txt");
    				cout<<"Makanan: Rp."<< totalmakan*kuantitasMakan<<endl;
					cout<<"Minuman: Rp."<< totalminum*kuantitasMinum<<endl;
					cout<<"Total: Rp."<<totalmakan*kuantitasMakan + totalminum*kuantitasMinum<<endl;
					
					outfile<<"Makanan: Rp."<< totalmakan*kuantitasMakan<<endl;
					outfile<<"Minuman: Rp."<< totalminum*kuantitasMinum<<endl;
					outfile<<"Total: Rp."<<totalmakan*kuantitasMakan + totalminum*kuantitasMinum;
				}
			}
			break;
		}
		case 3:{
			cout<<"Terimakasih ^_^";
			repeat = false;
			break;
		}
		default:{
			cout<<"ERROR INPUT!";
			break;
		}	
}

	cout<<endl;
	system("pause");
	system("cls");
}
	return 0;
}
