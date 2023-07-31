#include<iostream>
#include "lqueue.h"
using namespace std;

int main() {
	LinkedQueue<int> Q;
	int x;
	
	Q.Add(1).Add(2).Add(3).Add(4);
	cout << "No queue add failed" << endl;
	cout << "Queue is now 1 2 3 4" << endl;
	Q.Delete(x);
	cout << "Dequeue : "<< x << endl;
    cout << Q.First() << " In front" << endl;
    cout << Q.Last()  << " in rear" << endl;
    Q.Delete(x);
    cout << "Dequeue : " << x << endl;
    Q.Delete(x);
    cout << "Dequeue : " << x << endl;
    Q.Delete(x);
    cout << "Dequeue : " << x << endl;
    Q.Delete(x);
}