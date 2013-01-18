#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

/*根据用户输入的分子和分母，将分数约分，方便日后的计算*/
class fraction{

	private:
		int num,  den;
	public:
		void set(int n, int d)
		{
			num = n;
			den = d;
			normalize();
		}
		int get_num()
		{
			return num;
		}
		int get_den()
		{
			return den;
		}
	private:
		void normalize();
		int gcf(int a, int b);
		int lcm(int a, int b);


};

void fraction::normalize()
{
	if(den == 0 || num == 0){
	
		num = 0;
		den = 1;
	}
	if(den < 0){
	
		num *= -1;
		den *= -1;
	}
	int n = gcf(num, den);
	num /= n;
	den /= n;

	return ;
}

int fraction::gcf(int a, int b)
{
	if(b == 0){
	
		return abs(a);
	}
	return gcf(b, a%b);

}

int fraction::lcm(int a, int b)
{
	int n = gcf(a, b);
	return a / n * b;
}

int main(void)
{
	fraction fract;
	string str;
	int a, b;
	while(true){
	
		cout << "enter 分子:" << endl;
		cin >> a;
		cout << "enter 分母:" << endl;
		cin >> b;

		fract.set(a, b);
		cout << "化简后:" ;
		cout << "分子是: " << fract.get_num() << endl;
		cout << "分母是: " << fract.get_den()<< endl;

		cout << "继续？" << endl;
		cin >> str[0] ;    //有点大材小用
		if(str[0] != 'y' && str[0] != 'Y'){
		
			break;
		}

	}

	return 0;
}
