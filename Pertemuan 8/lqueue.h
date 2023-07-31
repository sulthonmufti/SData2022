template<class T> class LinkedStack;
template<class T> class LinkedQueue;
#include<iostream>
using namespace std;

template <class T>
class Node {
	friend LinkedStack<T>;
	friend LinkedQueue<T>;
	
	private :
		T data;
		Node<T> *link;
};

//Kelas LinkedQueue
template<class T>
class LinkedQueue { //FIFO objects
	public :
		LinkedQueue() {
			front = rear = 0;
		}
		~LinkedQueue();
		bool IsEmpty() const {
			return ((front) ? false : true);
		}
		bool IsFull() const;
		T First() const;
		T Last() const;
		LinkedQueue<T>& Add(const T& x);
		LinkedQueue<T>& Delete(T& x);
		
	private :
		Node<T> *front; //pointer to first node
		Node<T> *rear; //pointer to last node
};

//Menghapus semua node
template<class T>
LinkedQueue<T>::~LinkedQueue() {
	Node<T> *next;
	while(front) {
		next = front -> link;
		delete front;
		front = next;
	}
}

//Cek antrian penuh atau tidak
template<class T>
bool LinkedQueue<T>::IsFull() const {
	Node<T> *p;
	try {
		p = new Node<T>;
		delete p;
		return 0;
	}
	catch (int NoMem) {
		return 1;
	}
}

//Mengambil elemen pertama
template<class T>
T LinkedQueue<T>::First() const {
	if(IsEmpty()) cout << "Out Of Bounds Because Data is Empty";
	return front -> data;
}

//Mengembalikan elemen terakhir
template<class T>
T LinkedQueue<T>::Last() const {
	if(IsEmpty()) cout << "Out Of Bounds Because Data is Empty";
	return rear -> data;
}

//Menambah elemen
template<class T>
LinkedQueue<T>& LinkedQueue<T>::Add(const T& x) {
	//membuat node elemen baru
	Node<T> *p = new Node<T>;
	p -> data = x;
	p -> link = 0;
	
	//menambah node baru queue paling belakang
	if(front) rear -> link = p; //queue not empty
	else front = p; //queue empty
	rear = p;
	
	return *this;
}

//Menghapus elemen pertama
template<class T>
LinkedQueue<T>& LinkedQueue<T>::Delete(T& x) {
	if(IsEmpty()) cout << "Out Of Bounds Because Data is Empty";
	//menyimpan data elemen terdepan
	x = front -> data;
	//menghapus elemen pertama
	Node<T> *p = front;
	front = front -> link;
	delete p;
	
	return *this;
}