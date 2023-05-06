#include <iostream>

using namespace std;
 class CPolygon
 {
 protected:
    int width, height;

 public:
    void set_values(int a, int b)
    {
        width = a, height = b;
    }
    virtual int area()
    {
        return 0;
    }
 };

 class CRectangle: public CPolygon
 {
 public:
    int area()
    {
        return width * height;
    }
 };

 class CTriangle: public CPolygon
 {
 public:

     int area()
     {
        return width * height *0.5;
     }
 };

 /*
Triangle t1(5, 6);
Shape* s1 = &t1; // pointer to base class

cout << s1->area(); Triangle t1(5, 6);
Shape* s1 = &t1; // pointer to base class

cout << s1->area();
*/

 int main()
 {
     CRectangle rect;
     CTriangle trgl;
     CPolygon poly;

     CPolygon* ppoly1 = &rect;
     CPolygon* ppoly2 = &trgl;
     CPolygon* ppoly3 = &poly;

     ppoly1->set_values(10, 5);
     ppoly2->set_values(10, 5);
     ppoly3->set_values(10, 5);

     cout << ppoly1->area() <<endl;
     cout << ppoly2->area() <<endl;
     cout << ppoly3->area() <<endl;


 }