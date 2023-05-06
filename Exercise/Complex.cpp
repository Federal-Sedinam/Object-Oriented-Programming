#include <iostream>

using namespace std;

class Complex
{
private:

    float real;
    float imaginary;

public:
    Complex()
    {
        real = 0;
        imaginary = 0;
    }
    Complex(float a, float b)
    {
        real = a;
        imaginary = b;

    }

    float getreal()
    {
        return real;
    }

    float getimaginary()
    {
        return imaginary;
    }

    void setreal(float r)
    {
        real = r;
    }
    void setimaginary(float i)
    {
        imaginary = i;
    }

    void printnumber()
    {
        string sign = (imaginary > 0) ? "+" : "-";
        cout << real << sign << abs(imaginary) << "i" << endl;
    }
};

int main()
{
    Complex c1(4,5);
    Complex c2;

    float real;
    float imaginary;

    cout << "Enter real part" <<endl;
    cin >> real;

    cout << "Enter imaginary part" <<endl;
    cin >> imaginary;

    c2.setreal(real);
    c2.setimaginary(imaginary);

    c2.printnumber();
}
