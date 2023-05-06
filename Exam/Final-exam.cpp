#include <iostream>

using namespace std;

class CPolygon // The base class
{
protected:
float width;  // data members
float height;
public:
void setValues()   //public member functions
{
cout << "Enter width " << endl;  //displaying message to the user
cin >> width;  //taking width from the user

cout << "Enter height" << endl;
cin >> height;
}
virtual float area() = 0;  //declaration of pure virtual function


void printArea()
{
cout << " Area of polygon is " << this->area() << endl; // member function to display area of polygon
}

};

class CRectangle: public CPolygon  // derived class of CPolygon
{
public:
float area()  // member function
{
return width * height; //returning area of rectangle
}

};

class CTriangle: public CPolygon //Another derived class of CPolygon
{
public:
float area()  // member function
{
return width * height * 0.5; // returning area of triangle
}
};

class CSquare: public CPolygon // another derived class of cpolygon
{
public:
float area() //member function
{
return width * width;  //returning area of square
}
};

int main()  // main function
{
CPolygon* polygons[100];  // array of polygons with pointers to objects of derived class
int n = 0;  // initialization of variable
char choice, input;  

do  // do while loop to collect input from user
{
cout << "Enter R for rectangle, T for triangle, S for square" << endl;
cin >> choice;


if (choice == 'R')
{
polygons[n] = new CRectangle; //creating a pointer to rectangle using new operator
polygons[n]->setValues();
n++;  // increamenting n
   }
   
else if (choice == 'T')
{
polygons[n] = new CTriangle;  //creating a pointer to triangle using new operator
polygons[n]->setValues();   // setting values
n++;
}

else if(choice == 'S')
{
polygons[n] = new CSquare;  // creating a pointer to triangle using new operator
polygons[n]->setValues();
n++;
}

else
{
cout << "Incorrect input"<<endl; // sending error message to user

}

cout << "Do you want to add another polygon? (Y / N)" << endl;
cin >> input;  // taking input from user

}while(input != 'N' && input !='n'); // terminating while looop if user enters N

cout << "Area of polygons" << endl;  // displaying area of polygons

for (int a = 0; a < n; a++)  // for loop
{
cout << a + 1 << ". ";
polygons[a]->printArea();
}


return 0;  // returning zero

}