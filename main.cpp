#include <iostream>
#include "CWhole.h"
#include <conio.h>
using namespace std;
int main() {
    CWhole arrtr;
    float x1,x2,x3;
    int key;
    while (true) {
        cout << "Choose an action:" << endl;	//
        cout << "1-print " << endl;	//
        cout << "2-add " << endl;     //
        cout << "3-delete" << endl;	//вывод меню
        cout << "4-exit" << endl;				//
        float* arr = new float[3]{x1,x2,x3};
        switch (_getch()) {		//выбор нужного элемента меню
            case '1'://элемент, который выводит все вектора
                arrtr.output();
                system("pause");
                system("cls");
                break;
            case '2'://элемент, который добавляет вектор
                cout << "x:";
                cin >> x1;
                cout << "y:";
                cin >> x2;
                cout << "z:";
                cin >> x3;
                cout << "key:";
                cin >> key;
                arr[0]=x1;
                arr[1]=x2;
                arr[2]=x3;
                arrtr.add(arr ,key);
                system("cls");
                break;
            case '3'://элемент, который удаляет вектор
                cout << "key:";
                cin >> key;
                arrtr.del(key);
                system("cls");
                break;
            case '4'://выход из программы
                return 0;
        }
    }
}
