#include <iostream>

using namespace std;

void p (int n) {
	if(n==0)return;
	cout << "Bonjour\n";
	return p(n-1);
}

int f (int n) {
	if(n==1) return 1;
	return n*n+f(n-1); 
}

int main () {
	int x; 
	cout << "Entrez n : ";cin>>x;
	p(x);
	cout << "La somme des "<<x<<" premiers carres est : "<<f(x)<<endl;

	return 0;
}