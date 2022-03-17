#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int angka1, kode, angka2, total;
	char mad;
	do{
		cout<<"============================"<<endl;
		cout<<"       ngitung skuuy...     "<<endl;
		cout<<"============================"<<endl;
		cout<<" "<<endl;
		cout<<"     metode "	<<endl;
		cout<<" 1. penambahan"	<<endl;
		cout<<" 2. pengurangan"	<<endl;
		cout<<" 3. perkalian"	<<endl;
		cout<<" 4. pembagian"	<<endl;
		cout<<"============================"<<endl;
		cout<<'\n'<<"masukkan no metode pilihan =";
		cin>>kode;
 switch (kode){
 case 1:
  cout<<'\n'<<"penambahan"<<endl;
  cout<<"Masukan angka pertama : ";
  cin>>angka1;
  cout<<"masukkan angka kedua : ";
  cin>>angka2;
  total=angka1+angka2;
  cout<<"hasil penambahan : "<<total<<endl;
  cout<<"lanjut ga ngab? Y/T  : ";
  cin>>mad;
  break;
 case 2:
  cout<<'\n'<<"pengurangan"<<endl;
  cout<<"Masukan angka pertama: ";
  cin>>angka1;
  cout<<"masukkan angka kedua : ";
  cin>>angka2;
   total=angka1-angka2;
   cout<<"hasil pengurangan : "<<total<<endl;
   cout<<"mau lanjut lagi? Y/T  : ";
  cin>>mad;
  break;
 case 3:
  cout<<'\n'<<"perkalian"<<endl;
  cout<<"Masukan angka pertama : ";
  cin>>angka1;
  cout<<"masukkkan angka kedua : ";
  cin>>angka2;
  total=angka1*angka2;
   cout<<"hasil perkalian : "<<total<<endl;
  cout<<"masih pen lanjut bang? Y/T  : ";
  cin>>mad;
  break;
 case 4:
  cout<<'\n'<<"pembagian"<<endl;
  cout<<"Masukan angka pertama : ";
  cin>>angka1;
  cout<<"masukkan angka kedua : ";
  cin>>angka2;
   total=angka1/angka2;
   cout<<"hasil pembagian : "<<total<<endl;
  cout<<"udh kan?, apa masih mau lanjut? Y/T  : ";
  cin>>mad;
  break;
 default:
 cout<<"Kode yang anda masukkan tidak ada";
 }
 } 
 while (mad/='Y');
 cout<<"semangat belajarnya kk"<<endl;
 return 0;
}
		
	

