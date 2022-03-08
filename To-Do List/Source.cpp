#include <iostream>
#include <string>

using namespace std;

string stack[10];
int n = 10;
int top = -1;

void push(string val) {
	if (top >= n - 1) {
		cout << "STACK OVERFLOW";
	}
	else {
		top++;
		stack[top] = val;
	}
}

void pop() {
	if (top <= -1) {
		cout << "STACK OVERFLOW" << endl;
	}
	else {
		cout << "the deleted item is " << stack[top] << endl;
		top--;
	}
}

void display() {
	if (top >= 0) {
		cout << "==== MY TO DO LIST ====\n";
		for (int i = top; i >= 0; i--) {
			cout << stack[i] << " ";
			cout << endl;
		}
	}
	else {
		cout << "stack is empty" << endl;
	}
}

void options() {

	cout << "\n";
	cout << "1) ADD ITEM TO LIST" << endl;
	cout << "2) DELETE ITEM FROM LIST" << endl;
	cout << "3) DISPLAY LIST" << endl;
	cout << "4) EXIT" << endl;

}


int main() {
	int ch;
	string val;



	do {
		options();
		cout << "\nENTER CHOICE: ";
		cin >> ch;
		cout << endl;

		switch (ch) {
		case 1:
			cout << "ENTER ITEM: ";
			cin >> val;
			push(val);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			break;
		default:
			cout << "INVALID CHOICE" << endl;
		}
	} 
	while (ch!= 4);
	return 0;
}