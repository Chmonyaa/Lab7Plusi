#include "Vector.h"
using namespace std;
vector::vector() { //создание вектора по умолчанию
    cout<<"Enter 3 coordinates(x,y,z):";
    cin>> cord[0];
    cin>> cord[1];
    cin>> cord[2];
}
vector::vector(float crd[3], int key) { //создание вектора с параметрами
    this->key=key;
    this->cord[0] = crd[0];
    this->cord[1] = crd[1];
    this->cord[2] = crd[2];
}
void vector::setvals(float crd[3]) { //изменение координат вектора
    this->cord[0] = crd[0];
    this->cord[1] = crd[1];
    this->cord[2] = crd[2];
}
void vector::getcord(float* arr) { //возвращение координат вектора
    arr[0] = this->cord[0];
    arr[1] = this->cord[1];
    arr[2] = this->cord[2];
}
float avtrg(float x, float y, float z) { //l
    return sqrt(x * x + y * y + z * z);
}
float vector::dlina() { //подсчет длины по координатам
    return avtrg(this->cord[0], this->cord[1], this->cord[2]);
}
vector:: ~vector(){
    cout<<"Destruktor"<<endl;
}

bool vector::checkid(int id)
{
    if (id == key) return true;
    else return false;
}

