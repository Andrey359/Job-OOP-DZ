
#include <iostream>
#include <vector>

using namespace std;

template<typename T, typename U>
int indexArr(T arr, U poisk) {
    for (int i = 0; arr[i]; i++) {
        if (arr[i] == poisk) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = { 1,2,3 };
    int poisk = 3;
    cout << indexArr(arr, poisk) << endl;

    char arr2[] = "123";
    char poisk2 = '4';
    cout << indexArr(arr2, poisk2) << endl;

    return 0;
}
