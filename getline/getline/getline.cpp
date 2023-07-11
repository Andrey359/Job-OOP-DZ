#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    string text;
    cout << "Введите текст: ";
    getline(cin, text);
    cout << "Ваш текст: ";
    cout << text;
}
