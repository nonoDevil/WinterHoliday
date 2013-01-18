// =====================================================================================
// 
//       Filename:  test.cpp
//
//    Description:  老婆微博上贴的一段演示程序
//
//        Version:  1.0
//        Created:  2013年01月18日 23时54分56秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Jiajie.Chen, linux.kakit@gmail.com
//        Company:  Class 1001 of Software Engineering, XUPT
// 
// =====================================================================================

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
	cout << "Hello, World!\n";
	int n = 0;

	cin >> n;
	for (int i = 0; i <= n; i++) {
		cout << exp(log(2)* i );
		cout << " ";
	}

	return 0;
}



