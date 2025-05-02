#include <iostream>
using namespace std;

class Box{
private:
    double length;   // Length of a box
    double breadth;  // Breadth of a box
    double height;   // Height of a box
public:
    void setLength(double length);
    void setBreadth(double breadth);
    void setHeight(double height);
    double getVolume(void);

    Box operator + (const Box& b){
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }
};

void Box::setLength(double len){
    length = len;
}
void Box::setBreadth(double bre){
    breadth = bre;
}
void Box::setHeight(double hei){
    height = hei;
}
double Box::getVolume(void){
    return length * breadth * height;
}

int main(){

    Box Box1;
    Box Box2;
    Box Box3;
    Box1.setLength(1.0);
    Box1.setBreadth(1.0);
    Box1.setHeight(1.0);
    Box2.setLength(1.0);
    Box2.setBreadth(1.0);
    Box2.setHeight(1.0);

    cout << "Volume of Box1 : " << Box1.getVolume() << endl;
    cout << "Volume of Box2 : " << Box2.getVolume() << endl;
    Box3 = Box1 + Box2; // Add two object as if they are primitive data types
    cout << "Volume of Box3 : " << Box3.getVolume() << endl;

    return 0;
}
/*
Volume of Box1 : 1
Volume of Box2 : 1
Volume of Box3 : 8
*/