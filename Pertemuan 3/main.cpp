#include <iostream>
using namespace std;

class Manajemen{
public:
  void inputdata();
  void biayakelas();

private:
  int i;
  int kelas11a, spp11, potongan11, rank[3], biaya[];
};

void Manajemen::inputdata(){
  cout << "Masukkan biaya spp : ";
  cin >> spp11;
  cout << "Masukkan potongan biaya spp jika mendapat rangking I/II/III : ";
  cin >> potongan11;
  for(i=1; i<4; i++){
    cout << "Ranking " << i << " diraih oleh absen : ";
    cin >> rank[i];
  }
  cout << "Masukkan jumlah siswa kelas 11-a : ";
  cin >> kelas11a;
}

void Manajemen::biayakelas(){
  cout << "| absen \t biaya spp |" << endl;
  for(i=1; i<=kelas11a; i++){
    biaya[i] = spp11;
    if(biaya[i]==rank[i]){
      biaya[i] = spp11 - potongan11;
    }
    cout << "| " << i << "\t\t\t\t" <<biaya[i] << " |"<< endl;
    }
}


int main() {
  Manajemen a;
  a.inputdata();
  a.biayakelas();
}