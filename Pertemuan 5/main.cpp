#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* selanjutnya;
  Node* sebelumnya;
};


int main() {
  //Membuat node baru
  Node *A = new Node;
  A->data = 1;
  A->selanjutnya = 0;
  A->sebelumnya = 0;
  cout << "Membuat Node baru : " << endl;
  cout << "Node A : " << A->data << endl;

  //Menambahkan Node di depan
  Node *sebelum = A;
  Node *jalan = new Node;
  Node *B = new Node;
  jalan = B;
  B->data = 2;
  B->sebelumnya = 0;
  B->selanjutnya = A;
  sebelum->sebelumnya = B;
  sebelum = A;
  cout << "Menambahkan Node di depan : " << B->data << endl;
  cout << "Isi Node : ";
  while(jalan != NULL){
    cout << jalan->data << " , ";
    jalan = jalan->selanjutnya;
  }

  cout << endl << endl;

  //Menambahkan Node di depan
  Node *C = new Node;
  jalan = C;
  C->data = 3;
  C->sebelumnya = 0;
  C->selanjutnya = B;
  B->sebelumnya = C;
  sebelum->sebelumnya = B;
  sebelum = A;
  cout << "Menambahkan Node di depan : " << C->data << endl;
  cout << "Isi Node : ";
  while(jalan != NULL){
    cout << jalan->data << " , ";
    jalan = jalan->selanjutnya;
  }

  cout << endl << endl;

  //Menambahkan Node di belakang
  Node *D = new Node;
  D->data = 6;
  D->selanjutnya = 0;
  A->sebelumnya = B;
  A->selanjutnya = D;
  jalan = C;

  cout << "Menambahkan Node di belakang : " << D->data << endl;
  cout << "Isi Node : ";
  while(jalan != NULL){
    cout << jalan->data << " , ";
    jalan = jalan->selanjutnya;
  }

  cout << endl << endl;

  //Menambahkan Node di belakang
  Node *E = new Node;
  E->data = 7;
  E->selanjutnya = 0;
  D->sebelumnya = A;
  D->selanjutnya = E;
  jalan = C;

  cout << "Menambahkan Node di belakang : " << E->data << endl;
  cout << "Isi Node : ";
  while(jalan != NULL){
    cout << jalan->data << " , ";
    jalan = jalan->selanjutnya;
  }

  cout << endl << endl;

  //Menambahkan Node di belakang
  Node *F = new Node;
  F->data = 8;
  F->selanjutnya = 0;
  E->sebelumnya = D;
  E->selanjutnya = F;
  jalan = C;

  cout << "Menambahkan Node di belakang : " << F->data << endl;
  cout << "Isi Node : ";
  while(jalan != NULL){
    cout << jalan->data << " , ";
    jalan = jalan->selanjutnya;
  }

  cout << endl << endl;
  
  cout << "=====================================" << endl;
  jalan = C;
  cout << "Mencetak maju : " << endl;
  while(jalan != NULL){
    cout << jalan->data << " , ";
    jalan = jalan->selanjutnya;
  }
  cout << endl << endl;

  cout << "=====================================" << endl;
  cout << "Mencetak mundur : " << endl;
  jalan = F;
  jalan->sebelumnya = E;
  while(jalan != NULL){
    cout << jalan->data << " , ";
    jalan = jalan->sebelumnya;
  }

  cout << endl << endl;
}