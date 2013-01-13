#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>

#define COL_WIDTH 80
using namespace std;

int get_int(int default_value);
int main(void)
{
	int n = 0;
	int age = 0;
	char filename[200];
	char name[20];
    int recsize = sizeof(filename) + sizeof(int);
	cout << "enter filename:" << endl;
	cin.getline(filename, 200);

	fstream fbin(filename, ios::binary | ios::in);
	if(!fbin){
	
		cout << filename << " could not be opened." << endl;
		return -1;
	}

	cout << "pls enter record number:" << endl;
	n = get_int(0);

	fbin.seekp(n * recsize);
	fbin.read(name, sizeof(name));
	fbin.read((char *)(&age), sizeof(int));

	cout << "name:" << name << endl;
	cout << "age:" << age << endl;

	fbin.close();
	
	return 0;

	


}


int get_int(int default_value)
{
	char s[COL_WIDTH + 1];
	cin.getline(s, COL_WIDTH + 1);
	if(strlen(s) == 0){
	
		return default_value;
	}
	return atoi(s);
}

