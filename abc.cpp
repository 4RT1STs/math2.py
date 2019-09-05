#include<iostream>
#include<windows.h>
#include<stdio.h>
using namespace std;
void setcolor(unsigned short color) {
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hCon,color);
}
int main()
{
	int p,l,s,a,t,b,c,k;
	float L;
	string user,pass,pilihan,answer;
	
	setcolor(2);cout<<"\t\t\t================================>"<<endl;
	setcolor(3);cout<<"\n\t\t\t TOOLS UNTUK MENGHITUNG RUMUS"<<endl;
	setcolor(4);cout<<"\n\t\t\t================================>";
	setcolor(6);cout<<"\n======================>";
	cout<<"\n LOGIN DULU WOE!!";
	cout<<"\n======================>";
	awal:
	cout<<"\nusername:";
	cin>>user;
	cout<<"password:";
	cin>>pass;
	cout<<'*';
	
		if(user=="maulana" && pass=="123"){
			cout<<"LOGIN BERHASIL!!\n";
			Sleep(50);cout<<"W";Sleep(50);cout<<"e";Sleep(50);cout<<"l";Sleep(50);cout<<"c";Sleep(50);cout<<"o";Sleep(50);cout<<"m";Sleep(50);cout<<"e ";cout<<user;
			hidup:
			cout<<"\n==================================\n";
			setcolor(10);cout<<"1. Hitung rumus Segitiga\n";
			setcolor(12);cout<<"2. Hitung rumur persegi\n";
			setcolor(11);cout<<"3. hitung rumus persegi panjang\n";
			setcolor(3);cout<<"4. Keluar";
			cout<<"\n  ----------\n";
			
			cout<<"-------------->ROOT@@RTIST:";
			cin>>pilihan;
			cout<<"==================================\n";
		}else{
			setcolor(4);cout<<"username atau password salah!!";
			{goto awal;}
			
		}if(pilihan=="1"){
			be:
		cout<<"rumus apa ?\n";
		setcolor(13);cout<<"1. Luas segitiga\n";
		setcolor(14);cout<<"2. Keliling Segitiga\npilih:";
		cin>>pilihan;
		if(pilihan=="1"){
			cout<<"alas:";
			cin>>a;
			cout<<"tinggi:";
			cin>>t;
			L=0.5*a*t;
			printf("Luas nya adalah:%.2f",L);
			back:
			setcolor(11);cout<<"\ningin coba rumus lain ??[Y/N]";
			cin>>answer;
			if(answer=="Y"){
				{goto hidup;}
			}else if(answer=="y"){
				{goto hidup;}
			}else if(answer=="N"){
				{goto baru;}
			}else if(answer=="n"){
				{goto baru;}
			}else{
				setcolor(12);cout<<"[!]";
			setcolor(10);	cout<<"Tidak Cocok";
				{goto back;}
			}
		}else if(pilihan=="2"){
			cout<<"sisi a:";
			cin>>a;
			cout<<"sisi b:";
			cin>>b;
			cout<<"sisi c:";
			cin>>c;
			k=a+b+c;
			printf("keliling nya adalah:%i",k);
			cout<<"\nIngin coba rumus lain??[Y/N]";
			cin>>answer;
			if(answer=="Y"){
			{goto hidup;}
			}else if(answer=="y"){
				{goto hidup;}
			}else if(answer=="N"){
				{goto baru;}
			}else if(answer=="n"){
				{goto baru;}
			}
		}else{
			setcolor(12);cout<<"[!]";
			setcolor(10);cout<<"Tidak Cocok\n";
			{goto be;}
		}
		}else if(pilihan=="2"){
			cout<<"rumus apa?\n";
		setcolor(2);cout<<"1. Luas persegi\n2. Keliling persegi\npilih:";
			cin>>pilihan;
			if(pilihan=="1"){
			setcolor(10);cout<<"Sisi:";
				cin>>s;
				L=s*s;
				printf("Luasnya	:%.2f",L);
				cout<<"\nIngin coba rumus lain??[Y/N]";
				cin>>answer;
				if(answer=="Y"){
					{goto hidup;}
				}else if(answer=="y"){
				{goto hidup;}
			}else if(answer=="N"){
				{goto baru;}
			}else if(answer=="n"){
				{goto baru;}
			}
			}else{
			setcolor(11);cout<<"Sisi	:";
				cin>>s;
				k=s*4;
				printf("kelilingnya	:%i",k);
				cout<<"\nIngin Coba rumus lain??[Y/N]";
				cin>>answer;
				if(answer=="Y"){
					{goto hidup;}
				}else if(answer=="y"){
				{goto hidup;}
			}else if(answer=="N"){
				{goto baru;}
			}else if(answer=="n"){
				{goto baru;}
			}
		}
		}else if(pilihan=="3"){
			cout<<"rumus apa?\n";
			cout<<"1. Luas persegi panjang\n2. Keliling persegi panjang\npilih:";
			cin>>pilihan;
			if(pilihan=="1"){
				setcolor(10);cout<<"panjang	:";
				cin>>p;
				cout<<"lebar	:";
				cin>>l;
				L=p*l;
				printf("Luasnya	:%.2f",L);
				cout<<"\nIngin coba rumus lain??[Y/N]";
				cin>>answer;
				if(answer=="Y"){
					{goto hidup;}
				}else if(answer=="y"){
				{goto hidup;}
			}else if(answer=="N"){
				{goto baru;}
			}else if(answer=="n"){
				{goto baru;}
			}
			}else{
				setcolor(11);cout<<"panjang	:";
				cin>>p;
				cout<<"lebar	:";
				cin>>l;
				k=2*(p+l);
				printf("kelilingnya	:%i",k);
				cout<<"\nIngin coba rumus lain??[Y/N]";
				cin>>answer;
				if(answer=="Y"){
					{goto hidup;}
				}else if(answer=="y"){
				{goto hidup;}
			}else if(answer=="N"){
				{goto baru;}
			}else if(answer=="n"){
				{goto baru;}
			}
			}
		}else if(pilihan=="4"){
			baru:
		setcolor(10);Sleep(100);cout<<"t";
		Sleep(100);cout<<"e";Sleep(100);cout<<"r";Sleep(100);cout<<"i";Sleep(100);cout<<"m";Sleep(100);cout<<"a";Sleep(100);cout<<" k";Sleep(100);cout<<"a";Sleep(100);cout<<"s";Sleep(100);cout<<"i";Sleep(100);cout<<"h";Sleep(100);cout<<" s";
		Sleep(100);cout<<"u";Sleep(100);cout<<"d";Sleep(100);cout<<"a";Sleep(100);cout<<"h";Sleep(100);cout<<" m";Sleep(100);cout<<"e";Sleep(100);cout<<"n";Sleep(100);cout<<"g";Sleep(100);cout<<"g";Sleep(100);cout<<"u";Sleep(100);cout<<"n";
		Sleep(100);cout<<"a";Sleep(100);cout<<"k";Sleep(100);cout<<"a";Sleep(100);cout<<"n";Sleep(100);cout<<" T";Sleep(100);cout<<"O";Sleep(100);cout<<"O";Sleep(100);cout<<"L";Sleep(100);cout<<"S";Sleep(100);cout<<" I";Sleep(100);cout<<"n";Sleep(100);cout<<"i";
			setcolor(11);cout<<"\nAuthor By: @RTIST";
		}else{
			ce:
		setcolor(10);	cout<<"Masukkan dengan benar";
			{goto hidup;}
		}
	
}
