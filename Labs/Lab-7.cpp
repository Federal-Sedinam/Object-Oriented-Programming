#include <iostream>

using namespace std;

class CPolygon
{
protected:
    int width, height;
public:
    //void set_values(int a, int b)
    void set_values() //trial line

    {
        //width = a, height = b;
        cout << "Enter width" <<endl;
        cin >> width;
        cout << "Enter height" <<endl; //trial line
        cin >> height;
    }
};
 class CRectangle: public CPolygon
 {
 public:

     int area()
     {
        return height * width;
     }
 };
 class CTriangle: public CPolygon
 {
 public:

     int area()
     {
         return 0.5 * height * width;
     }
 };

 int main()
 {
     CRectangle rect;
     CTriangle tri;
     rect.set_values();
     //(10,5);
     tri.set_values();
     //(10,5);

     cout << "Area of the rectangle is: " << rect.area() << endl;
     cout << "Area of the triangle is: " << tri.area() << endl;

 }