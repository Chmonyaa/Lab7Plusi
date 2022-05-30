#include "CWhole.h"
using namespace std;
CWhole :: CWhole() { m_count = 0; }
CWhole ::~CWhole() { for (int i = 0; i < m_count; i++) delete m_a[i]; }

bool CWhole::add(float crd[3], int key) {
    if (search(key) < 0) { // ищем в массиве – есть ли уже объект с таким ключем
        m_a[m_count] = new vector(crd,key); //добавляем, если нет
        m_count++;
        return true; //и возвращаем true
    }
    return false; // если уже есть – возвращаем false
}

int CWhole::search(int id) {
    for (int i = 0; i < m_count; i++) if (m_a[i]->checkid(id)) return i;
    return -1;
}

bool CWhole::del(int id) {
    int del = search(id); //находим номер объекта с таким ключом
    if (del < 0) return false; // если его нет – возвращаем false
    delete m_a[del]; // удаляем объект по найденному выше номеру
    while (del < m_count - 1)
    { // сдвигаем объекты в массиве, которые следуют за удаленным
        m_a[del] = m_a[del + 1];
        del++;
    }
    m_count--; // уменьшаем кол-во объектов в массиве на единицу
    return true;
}
void CWhole::output() {//вывод всех векторов
    for (int i=0; i < m_count; i++) {
        cout << "id: " <<m_a[i]->getid() << endl;
        cout << "coords: " << endl;
        float* arr = new float[3];
        m_a[i]->getcord(arr);
        cout << arr[0] << " ";
        cout << arr[1] << " ";
        cout << arr[2] << " ";
        cout << endl;
    }
}