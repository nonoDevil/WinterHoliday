#include <iostream>
using namespace std;

class point{

	private:
		int x, y;
	public:
		void set(int new_x, int new_y);
		int get_x();
		int get_y();
};

int main(void)
{
	point pt1, pt2;
	pt1.set(10,20);

	cout << "pt1 is " << pt1.get_x();
	cout << ", " << pt1.get_y() << endl;

	pt2.set(-25,-15);

	cout << "pt2 is " << pt2.get_x();
    cout << ", " << pt2.get_y() << endl;
    return 0;	


}

void point::set(int new_x, int new_y)
{
	if(new_x < 0){
	
		new_x *= -1;
	}
	if(new_y < 0){
	
		new_y *= -1;
	}

	x = new_x;
	y = new_y;
}

int point::get_x()
{
	return x;    
	/*为什么要这么麻烦？因为x和y是私有的*/
}

int point::get_y()
{
	return y;
	/*等下写个不需要这样的试试*/
}


