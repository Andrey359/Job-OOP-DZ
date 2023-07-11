#include <iostream>
using namespace std;

class A {
	int a;
public:
	A(int x)
	{
		a = x;
		cout << "A(" << a << ")\n";
	}


	~A()
	{
		cout << "~A(" << a << ")\n";
	}
	void show()
	{
		cout << a << "\n";
	}

};
int main() {

	A a1(1);
	A a2(2);
	cout << endl;

	return 0;
}