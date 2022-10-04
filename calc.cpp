#include <bits/stdc++.h>

using namespace std;


void add(){
	cout << "Enter two numbers to add : \t";
	int a, b;
	cin >> a >> b;
	cout << "Sum :\t" << a + b <<"\n";
}

void subtract(){
	cout << "Enter two numbers to subtract : \t";
	int a, b;
	cin >> a >> b;
	cout << "Diff :\t" << a - b <<"\n";
}

void divide(){
	cout << "Enter two numbers to divide : \t";
	int a, b;
	cin >> a >> b;
	if(b == 0){
		cout << "Invalid operation: cannot divide by zero\n";
		return;
	}
	cout << "Quotient :\t" << a / b <<"\n";
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

		cout << "Please chooose operation:\n1: add\n2: multiply\n3: subtract\n4: divide\n";
		cin >> op;
	
		switch(op){
			case 1:
				add();
				break;
			case 2:
				mul();
				break;
			case 3:
				subtract();
				break;
			case 4:
				divide();
				break;
			default:
				exit(0);
		}
	}

	return 0;
}
