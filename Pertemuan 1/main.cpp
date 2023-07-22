#include <iostream>
using namespace std;

class Krs{
public:
  void daftar();
  void pilih();
  int hasil(int jumlah);

private:
  int jumlah, i, pilihan[];
};

void Krs::daftar(){
  cout << "Daftar mata kuliah yang tersedia :" << endl;
  cout << "1) PBO senin 10.30 - 12.00" << endl;
  cout << "2) Sdata selasa 08.45 - 10.25"<< endl;
  cout << "3) SO jum'at 07.00 - 08.30"<< endl;
  cout << "masukkan jumlah matkul yang akan anda pilih :";
  cin >> jumlah;
}

void Krs::pilih(){
  for(i=1; i<=jumlah; i++){
    cout << "Masukkan pilihan ke-" << i << " : ";
    cin >> pilihan[i];
  }
}

int Krs::hasil(int jumlah){
  if(int jumlah=0) return(jumlah);
  else{
    
    if(pilihan[i]==i){
      cout << "Pilihan ke-" << i << " PBO senin 10.30 - 12.00 "<< endl;
    }else if(pilihan[i]==2){
      cout << "pilihan ke-" << i << " SDATA Selasa, 08.45 - 10.25 "<<endl;
    }else if(pilihan[i]==3){
      cout << "pilihan ke-" << i << " SO jum'at 07.00 - 08.30 "<<endl;
    }
    
  return(hasil(jumlah-1));
  }
}

int main() {
  int jumlah;
  Krs x;
  x.daftar();
  x.pilih();
  x.hasil(jumlah);
  return 0;
}