#include <iostream>
#include <cmath>
class vector {
private:
    float cord[3];	//координаты вектора
    int key;
public:
    vector();	//конструктор по умолчанию
    vector(float crd[3], int key);	//конструктор с параметрами
    void setvals(float crd[3]);	//переназначение координат
    void getcord(float* arr);	//получение координат из private для функций
    float dlina();	//определение длины
    vector operator+ (vector& obj2);	//сложение векторов
    vector operator- (vector& obj2);	//вычитание векторов
    int getX() const {return cord[0]; }
    int getY() const {return cord[1]; }
    int getZ() const {return cord[2]; }
    void setX(int X) { cord[0] = X; }
    void setY(int Y) { cord[1] = Y; }
    void setZ(int Z) { cord[2] = Z; }
    bool checkid(int key);
    int getid() { return key; }
    ~vector();
    vector (const vector& obj1);
};
