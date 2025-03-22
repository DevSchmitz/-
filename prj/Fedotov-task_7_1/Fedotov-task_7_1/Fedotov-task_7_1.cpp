#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(65001);
    SetConsoleCP(1251);

    string answer;
    do
    {
        string sentence;
        int count = 0;
        bool flag = false;

        cout << "Введіть речення (що закінчується на '.' або '!'): ";
        getline(cin, sentence);

        char lastChar = sentence[sentence.length() - 1];
        while (flag == false) {
            if (lastChar != '.' && lastChar != '!') {
                cout << "Помилка: речення має закінчуватися '.' або '!'" << endl;
                cout << "Введіть речення знову: ";
                getline(cin, sentence);
                lastChar = sentence[sentence.length() - 1];
            }
            else {
                flag = true;
            }
        }
  
        for (int i = 0; i < sentence.length(); i++) {
            if (sentence[i] == 'е' || sentence[i] == 'Е' || sentence[i] == 'e' || sentence[i] == 'E') {
                count++;
            }
        }
     
        if (count > 0) {
            cout << "Кількість символів 'е' або 'Е' у реченні: " << count << endl;
        }
        else {
            cout << "Символ 'е' або 'Е' відсутній у введеному реченні." << endl;
        }
       
        cout << "Чи хочете спробувати заново? (так/ні): ";
        cin >> answer;
        cin.ignore(); 

    } while (answer == "так" || answer == "Так" || answer == "ТАК" );
    cout << "Програма завершена!";
    system("pause"); 
    return 0;
}


