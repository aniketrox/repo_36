#include<iostream>
using namespace std;
int main(){
	int x;
	int y;
	cout << "Enter a number that you want for positive increment: ";
	cin >> x;
	cout << "Enter a number that you want for negative increment: ";
	cin >> y;
	++x;  //positive increment by 1
	cout << "the number got positive increment: " << x << "\n";
	--y;  //negative increment by 1
	cout << "the second number got negative increment: " <<y;
	return 0;
}