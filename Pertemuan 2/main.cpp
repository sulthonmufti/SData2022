#include <cstdlib>
#include <iostream>
#define maks5

using namespace std;

class array{
  friend ostream& operator<<(ostream&, const array&);
  friend istream& operator>>(istream&, array&);
public:
  array();
  void cetak();
  void geser_kanan();
  void geser_kiri();
  void geser_kiri1();

private:
char a[5];
int posisi;
};

array::array(){
for(int i=0;i<5;i++)
a[i]='0';
}

void array::cetak(){
  for(int i=0;i<5;i++)
  cout<<a[i]<<" ";
}

ostream& operator<<(ostream& out, const array& keluar){
  for(int i=0;i<5;i++)
  out<<keluar.a[i]<<"";
  out<<endl;
  return out;
}

istream& operator>>(istream& in, array& masuk){
  int posisi;
  for (int posisi=1; posisi<=5; posisi++){
    cout<<"Masukkan Nilai Array Posisi Ke-"<<posisi<<"= ";
    
    if(posisi >= 0 && posisi <= 5){
      in>>masuk.a[posisi-1];
    }
  }
  return in;
}

void array::geser_kanan(){
  int n=5;
  int temp=a[n-1];
  for(int i=n-1;i>=0;i--)
  a[i+1]=a[i];
  a[0]=temp;
}

void array::geser_kiri(){
  int n=5;
  int temp=a[0];
  for(int i=0;i<n;i++)
  a[i]=a[i+1];
  a[n-1]=temp;
}

void array::geser_kiri1(){
  int n=5;
  int temp=a[0];
  for(int i=0;i<n;i++)
  a[i]=a[i+1];
  a[n-1]=temp;
}
int main(int argc, char *argv[]){
  array X;
  cout<<"Program Array Geser Kanan\n\n";
  cout<<"Array Masih Kosong : "<<X;
  cin>>X;
  cout<<endl<<"Isi Array Saat Ini : "<<X;
  X.geser_kanan();
  cout<<"Isi Array Setelah Digeser Kanan : "<<X<<endl;
  cout<<endl;
  
  cout<<"Isi Array saat ini : "<<X;
  X.geser_kiri();
  cout<<"Isi Array setelah di geser kiri : "<<X;
  
  cout<<endl<<"Isi Array saat ini : "<<X;
  X.geser_kiri1();
  cout<<"Isi Array setelah di geser kiri : "<<X;
  
  system("PAUSE");
  return EXIT_SUCCESS;
}