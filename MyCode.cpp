#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Plus2();
void StringM();
void VecDo();

int main() {
	int choice;
	cin >> choice;
	
	if(choice == 1){
		Plus2();
	}else if (choice == 2){
		StringM();
	}else if (choice == 3){
		VecDo();
	}
}
void Plus2 (){
	int num1;
	
	cin >> num1;
	cout << num1 + 2;
}

void StringM(){
	string Text;
	
	Text = "Be cool, relaxed & chill";
	cout << Text;
}
void VecDo(){
	vector <int> Numbs= {4,6,65};
	
	cout << Numbs[2];
}
