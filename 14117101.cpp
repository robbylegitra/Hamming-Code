#include <iostream>
#include <conio.h>
using namespace std;

void ulang(){
	int b[7];
	int p1,p2,p3,a=7;
	cout<<"Masukkan 7 bit boolean = ";
	for (int x=0;x<a;x++){
		cin>>b[x];
	}
	p1 = b[0] ^ b[1] ^ b[3];
	p2 = b[0] ^ b[2] ^ b[3];
	p3 = b[1] ^ b[2] ^ b[3];
	
	
	if(p1==b[4]&&p2==b[5]&&p3==b[6]){
		cout<<"Tidak Ada Error"<<" = ";
		for (int y=0;y<a;y++){
		cout<<b[y]<<" ";
		}
		getch();
		system("cls");
		ulang();	
	} else if (p1!=b[4]&&p2==b[5]&&p3==b[6]){
		cout<<"Parity X Error"<<" ";
		if (b[4]==1){
			b[4]=0;
			cout<<endl<<"Fix Error"<<" = ";
			for (int y=0;y<a;y++){
			cout<<b[y]<<" ";
			}
			getch();
			system("cls");
			ulang();
		}else{
			b[4]=1;
			cout<<endl<<"Fix Error"<<" = ";
			for (int y=0;y<a;y++){
			cout<<b[y]<<" ";
			}
			getch();
			system("cls");
			ulang();
		}
			
	}else if (p1==b[4]&&p2!=b[5]&&p3==b[6]){
		cout<<"Parity Y Error"<<" ";
		if (b[5]==1){
			b[5]=0;
			cout<<endl<<"Fix Error"<<" = ";
			for (int y=0;y<a;y++){
			cout<<b[y]<<" ";
			}
			getch();
			system("cls");
			ulang();
		}else{
			b[5]=1;
			cout<<endl<<"Fix Error"<<" = ";
			for (int y=0;y<a;y++){
			cout<<b[y]<<" ";
			}
			getch();
			system("cls");
			ulang();
		}
			
	} else if (p1==b[4]&&p2==b[5]&&p3!=b[6]){
		cout<<"Parity Z Error"<<" ";
		if (b[6]==1){
			b[6]=0;
			cout<<endl<<"Fix Error"<<" = ";
			for (int y=0;y<a;y++){
			cout<<b[y]<<" ";
			}
			getch();
			system("cls");
			ulang();
		}else{
			b[6]=1;
			cout<<endl<<"Fix Error"<<" = ";
			for (int y=0;y<a;y++){
			cout<<b[y]<<" ";
			}
			getch();
			system("cls");
			ulang();
		}
			
	} else if (p1!=b[4]&&p2!=b[5]&&p3==b[6]){
		cout<<"Pesan A Error"<<" ";
		if (b[0]==1){
			b[0]=0;
			cout<<endl<<"Fix Error"<<" = ";
			for (int y=0;y<a;y++){
			cout<<b[y]<<" ";
			}
			getch();
			system("cls");
			ulang();
		}else{
			b[0]=1;
			cout<<endl<<"Fix Error"<<" = ";
			for (int y=0;y<a;y++){
			cout<<b[y]<<" ";
			}
			getch();
			system("cls");
			ulang();
		}
			
	} else if (p1!=b[4]&&p2==b[5]&&p3!=b[6]){
		cout<<"Pesan B Error"<<" ";
		if (b[1]==1){
			b[1]=0;
			cout<<endl<<"Fix Error"<<" = ";
			for (int y=0;y<a-3;y++){
			cout<<b[y]<<" ";
			}
			getch();
			system("cls");
			ulang();
		}else{
			b[1]=1;
			cout<<endl<<"Fix Error"<<" = ";
			for (int y=0;y<a;y++){
			cout<<b[y]<<" ";
			}
			getch();
			system("cls");
			ulang();
		}
			
	}else if (p1==b[4]&&p2!=b[5]&&p3!=b[6]){
		cout<<"Pesan C Error"<<" ";
		if (b[2]==1){
			b[2]=0;
			cout<<endl<<"Fix Error"<<" = ";
			for (int y=0;y<a;y++){
			cout<<b[y]<<" ";
			}
			getch();
			system("cls");
			ulang();
		}else{
			b[2]=1;
			cout<<endl<<"Fix Error"<<" = ";
			for (int y=0;y<a;y++){
			cout<<b[y]<<" ";
			}
			getch();
			system("cls");
			ulang();
		}
			
	}else if (p1!=b[4]&&p2!=b[5]&&p3!=b[6]){
		cout<<"Pesan D Error"<<" ";
		if (b[3]==1){
			b[3]=0;
			cout<<endl<<"Fix Error"<<" = ";
			for (int y=0;y<a;y++){
			cout<<b[y]<<" ";
			}
			getch();
			system("cls");
			ulang();
		}else{
			b[3]=1;
			cout<<endl<<"Fix Error"<<" = ";
			for (int y=0;y<a;y++){
			cout<<b[y]<<" ";
			}
			getch();
			system("cls");
			ulang();
		}
			
	}
	
}

int main(){
	int n;
	cout<<"Hamming Code"<<" Tekan 1 untuk melanjutkan : ";
	cin>>n;
	cout<<endl<<"Note : Pisahkan Setiap Masukan Bit Dengan Spasi "<<endl<<endl;
while (n !=-999){
	ulang();
}
	
	
	
}
