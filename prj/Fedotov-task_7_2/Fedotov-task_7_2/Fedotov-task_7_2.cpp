#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(65001);
    SetConsoleCP(1251);

    int arr [20];  
    cout << "Введіть 20 натуральних чисел:\n";
    for (int i = 0; i < 20; i++) {
        cin >> arr[i];
    }
       
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < 20; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }

    if (evenCount > oddCount) {
        cout << "Більше парних чисел.\n";
    }
    else if (oddCount > evenCount) {
        cout << "Більше непарних чисел.\n";
    }
    else {
        cout << "Кількість парних і непарних чисел однакова.\n";
    }
    system("pause");
    return 0;
}
