
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");

    int x;
    cout << "Введите количество слов: ";
    cin >> x;
    vector<string>words;
    for (int i = 0; i < x; i++) {
        string word;
        cout << "[" << i << "]: ";
        cin >> word;
        words.push_back(word);
    }
    cout << endl;
    for (int i = words.size() - 1; i >= 0; --i) {
        cout << "[" << i << "]: " << words[i] << endl;
    }

}
