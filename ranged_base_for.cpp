#include <iostream>
using namespace std;
#define SIZE 5
int main(void)
{
	int array[SIZE];
	int total = 0;

	cout << "enter 5 integers:" << endl;
	for(int& n : array){
	
		cin >> n;
		total += n;
	}

	cout << "here are the values:" << endl;
	for(int n : array){
	
		cout << n << endl;
	}

	cout << "now i gonna zero out." << endl;
	for(int& n : array){
	
		n = 0;
	}

	cout << "here are the values now." << endl;
	for(int n : array){
	
		cout << n << endl;
	}

	return 0;
	
}
