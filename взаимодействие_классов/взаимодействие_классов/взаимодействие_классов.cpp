
#include <iostream>

using namespace std;

class Date
{
	int year : 13;
	int month : 5;
	int namber : 6;
public:
	Date(int year, int month, int namber) {
		this->year = year;
		this->month = month;
		this->namber = namber;
	}

	int getYear() const {
		return year;
	}
	int getMonth() const {
		return month;
	}
	int getNamber() const {
		return namber;
	}

	void setYear(int year) {
		this->year = year;
	}
	void setMonth(int month) {
		this->month = month;
	}
	void setNamber(int namber) {
		this->namber = namber;
	}

	int difference(Date& date) const {
		int deysStar = year * 365 + month * 30 + namber;
		int deysEnd = date.year * 365 + date.month * 30 + date.namber;

		return abs(deysStar - deysEnd);
	}

	void show() {
		cout << year << "/" << month << "/" << namber << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Ru");
	Date a(2023, 5, 18);
	Date b(2023, 5, 28);
	cout << "Раздница между датами всего: " << a.difference(b) << " дней" << endl;
	b.show();
	b.setMonth(10);
	b.show();
}
