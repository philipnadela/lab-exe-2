#include <iostream>
using namespace std;

void max(int x, int y){
	cout << "\nThe largest number is ";
	if (x>y)
		cout << x;
	else
		cout << y;
}
int main (){
	int x, y;
	
	cout << "Please enter a first value: ";
	cin >> x;
	cout << "Please enter a second value: ";
	cin >> y;
	
	max(x,y);
	
	return 0;
}
