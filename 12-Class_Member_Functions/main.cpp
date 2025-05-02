#include <iostream>

class Box{
public:
    double length;   // Length of a box
    double breadth;  // Breadth of a box
    double height;   // Height of a box

    void setLength(double length);
    void setBreadth(double breadth);
    void setHeight(double height);

    // Member function to calculate volume
    double getVolume(void);
};

// Member function definitions
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
    Box Box1;        // Declare Box1 of type Box
    Box Box2;        // Declare Box2 of type Box
    double volume = 0.0; // Store the volume of a box here
    // box 1 specification
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);
    // box 2 specification
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    // volume of box 1
    volume = Box1.getVolume();
    std::cout << "Volume of Box1 : " << volume << std::endl; //Volume of Box1 : 210
    // volume of box 2
    volume = Box2.getVolume();
    std::cout << "Volume of Box2 : " << volume << std::endl; //Volume of Box2 : 1560
    return 0;
}