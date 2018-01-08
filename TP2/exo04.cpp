#include <iostream>
using namespace std;

int fibo (unsigned int n) {
	if(n<=1) return n;
	return fibo(n-1)+fibo(n-2);
}

int main () {
	unsigned int x;
	cout << "Valeur Fibo numero : ";cin>>x;
	cout<<fibo(x)<<endl;
	return 0;
}