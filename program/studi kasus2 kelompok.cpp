#include<iostream>
using namespace std;
class developer {
	public:
		void antrian();
		void input();
		void proses();
		void gajian();
		void output();
		void posisi();
		void potongan();
	private:
		int antri, bidang,pilih, jenis, jenis2,pengalaman,pos,jumlah,cut;
		float gaji_2[2],bonus,bonus2,gaji;
		string a;
		
};

void developer::input(){

		cout<<"Pilih Bidang"<<endl;
		cout<<"1. Express JS    : 15 Juta / bulan"<<endl;
		cout<<"2. Django Python : 13 Juta / bulan"<<endl;
		cout<<"3. Rails Ruby    : 8 Juta / bulan"<<endl;
		cout<<"4. Laravel PHP   : 18 Juta / bulan"<<endl;
		cout<<"5. Spring Java   : 8 Juta / bulan"<<endl;
		cout<<"6. Angular JS    : 15 Juta / bulan"<<endl;
		cout<<"Jumlah pekerjaan yang akan anda ambil "<<endl;
		cin>>jumlah;
		if(jumlah == 2){
			cout<<"\nMasukkan pilihan 1 : ";cin>>jenis;
			cout<<"\nMasukkan pilihan 2 : ";cin>>jenis2;
		}else{
			cout<<"\nMasukkan pilihan yang diinginkan : ";cin>>jenis;
		}
		cout<<"Berapa lama anda bekerja di pilihan tersebuta : ";cin>>pengalaman;
		cout<<"Posisi yang dipilih? (1. leader/ 2. anggota): ";cin>>pos;
		
	
}
void developer::gajian(){
	switch (jenis) {
		case 1:	gaji=15;break;
		case 2:	gaji=13;break;
		case 3:	gaji=8 ; break;
		case 4:	gaji=18; break;
		case 5:	gaji=8 ;break;
		case 6:	gaji=15;break;
}
}
void developer::proses(){
	//Jika hanya memilih satu pekerjaan
	if (pengalaman > 4){
		bonus= gaji*0.04;
		gaji=gaji+bonus;
		if (pos == 1){
			bonus2= gaji*0.06;
			gaji= gaji+bonus+bonus2;
		}
	}
	else{
	gaji=gaji;	
	if (pos == 1){
			bonus2= gaji*0.06;
			gaji= gaji+bonus2;
		}
	}
	//Jika memilih dua pekerjaan
	if(jumlah == 2){
		//Input Gaji pertama
		
		if (pengalaman > 4){
			bonus= gaji*0.04;
			gaji=gaji+bonus;
			if (pos == 1){
				bonus2= gaji*0.06;
				gaji= gaji+bonus+bonus2;
			}
		}
		else{
		gaji=gaji;	
		if (pos == 1){
				bonus2= gaji*0.06;
				gaji= gaji+bonus2;
			}
		}
		gaji_2[1]=gaji-(gaji*0.09);	
		
		//Input Gaji ke 2
		if (pengalaman > 4){
			bonus= gaji*0.04;
			gaji=gaji+bonus;
			if (pos == 1){
				bonus2= gaji*0.06;
				gaji= gaji+bonus+bonus2;
			}
		}
		else{
		gaji=gaji;	
		if (pos == 1){
				bonus2= gaji*0.06;
				gaji= gaji+bonus2;
			}
		}
		gaji_2[2]=gaji-(gaji*0.09);
			
	}
}
void developer::posisi(){
 if (pos == 1){
 	a="Leader TIM";
 }	
 else{
 	a="Anggota";
 }
 }

void developer::output(){
	cout<<"\n\n================================"<<endl;
	if(jumlah == 2){
		cout<<"\nGajimu : "<<gaji_2[1]<<" Juta/bulan"<<endl;
		cout<<"\nGajimu : "<<gaji_2[2]<<" Juta/bulan"<<endl;
	}else{
		cout<<"\nGajimu : "<<gaji<<" Juta/bulan"<<endl;
	}

	cout<<"Posisi Developer = "<<a;
	
}

int main(){
	developer x;
	x.input();
	x.gajian();
	x.proses();
	x.posisi();
	x.output();
	
	return 0;
}

