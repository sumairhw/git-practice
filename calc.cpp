#include <bits/stdc++.h>

using namespace std;


void add(){
	cout << "Enter two numbers to add : \t";
	int a, b;
	cin >> a >> b;
	cout << "Sum :\t" << a + b <<"\n";
}

void mul(){
	cout << "Enter two numbers to multiply : \t";
	int a, b;
	cin >> a >> b;
	cout << "Product :\t" << a * b <<"\n";
}

int main(){

	int op;
	while(true){

		cout << "Please chooose operation:\n1: add\n2: multiply\n";
		cin >> op;
	
		switch(op){
			case 1:
				add();
				break;
			case 2:
				mul();
				break;
			default:
				exit(0);
		}
	}

	return 0;
}
