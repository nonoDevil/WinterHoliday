#include <iostream>
#include <fstream>
#define MAX_PATH 100
using namespace std;

int main(void)
{
	char filename[MAX_PATH + 1];

	cout << "please enter the file name:";
	cin.getline(filename, MAX_PATH + 1);//这用法好新奇
	ofstream file_out(filename);    //file_out是文件流的名字，可以自己随便定义
	if(!file_out){
	
		cout << filename << "could not be opened." << endl;
		return -1;
	}
    cout << filename << "was opened." << endl;
	file_out << "i love beaver." << endl;   //往指定的文件流里写东西
	file_out << "forever." << endl; //   <<代表往里写    
	file_out.close();  //关闭的方式也好新奇
    
	return 0;
}
