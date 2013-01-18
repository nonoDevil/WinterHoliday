#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	int i;
	char c;   //是否继续的标志
	char filename[50]; 
	char input_line[100];  //存储从文件中读出来、待输出到屏幕的字符

	
	cout << "please input a file's name,the file must be existent." << endl;
	cin.getline(filename, 50);
	ifstream file_in(filename);

	if(!file_in){
	
		cout << filename << " could not be opened." << endl;
		return -1;
	}
	while(1){
	
		for(i = 0; i < 24 && !file_in.eof(); ++i){    /*如果文件没有结束，就每24行输出一下文件中的字符*/
		
			file_in.getline(input_line, 100);   //从file_in中读字符放到input_line里
			cout << input_line << endl;  //将input_line里的内容输出
			//数组input_line里的内容每次都会被覆盖
		}

		if(file_in.eof()){
		
			break;
		}
		cin.getline(input_line, 100); // 
		c = input_line[0];

		if(c == 'q' || c == 'Q'){
		
			break;
		}
	}

	return 0;
}
