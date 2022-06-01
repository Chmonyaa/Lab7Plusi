#include <iostream>
#include "Vector.h"

class CWhole
{
private:
    int m_count;
public:
    vector* m_a[20]; // массив указателей на объект-часть
    CWhole();
    ~CWhole();
    int getn() { return m_count; } // получение кол-ва элементов
    bool del(int id); // удаление объекта по ключу
    bool add(float crd[3], int key); //добавление объекта
    int search(int id); // поиск объекта по ключу
    void output();
    void outputid(int id);
};
