#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
using namespace std;
#define COL_WIDTH 20
#define MAX_PATH 260      //原来MAX_PATH还是windows下的宏定义哦

int get_int(int default_value);
int main(void)
{
	char filename[MAX_PATH + 1];
	int n = 0;
	char name[20];
	int age = 0;
	int recsize = sizeof(name) + sizeof(int); 
    /*用于计算偏移量，一个记录里有一个名字和一个年龄*/

	cout << "pls input filename:" << endl;
	cin.getline(filename, MAX_PATH);
	fstream fbin(filename, ios::binary | ios::out);
	/*以二进制打开文件，写法没见过哦,ios::out表示写文件的操作*/

	if(!fbin){
	
		cout << filename << " could not be opened." << endl;
		return -1;
	}
	cout << "pls input record number:" << endl;
	n = get_int(0);  
	/*加上这个函数的话显得很规范，默认传0，用户没输入的话返回0*/
	
	cout << "pls input name:" << endl;
	cin.getline(name, sizeof(name));
	cout << "input age:" << endl;
	age = get_int(0);

	fbin.seekp(n * recsize);
	/*相当与c里的fseek*/
	fbin.write(name, sizeof(name));
	fbin.write((char*)(&age), sizeof(int));   
	/*好麻烦，把用户输入的字符串转化为整型再转化为字符串*/
	fbin.close();    
	/*关闭文件*/

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
