#include <iostream>
using namespace std;

void syracuse (int a) {
	cout << a <<endl;
	if(a%2==0) return syracuse(a/2);
	if(a!=1) return syracuse(a*3+1);
	return;
}

int main () {
	unsigned int x;
	cout << "Suite de Syracuse pour (entier) : ";cin>>x;
	syracuse(x);
	return 0;
}