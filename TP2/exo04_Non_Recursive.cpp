#include <iostream>
using namespace std;

int fibo (unsigned int n) {
	if(n<=1) return n;
	int a=0,b=1,c;
	for(int i=n-1;i>0;i--){
		c=a+b;
		a=b;b=c;
	}
	return c;
}

int main () {
	unsigned int x;
	cout << "Valeur Fibo numero : ";cin>>x;
	cout<<fibo(x)<<endl;
	return 0;
}