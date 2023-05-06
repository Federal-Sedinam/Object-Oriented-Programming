#include <iostream>

using namespace std;

int main()
{
    float height;
    float weight;

    cout << "Enter your height in centimeters"<< endl;
    cin >> height;

    cout << "Enter your weight in kilograms" << endl;
    cin >> weight;

    height = height/100;
    float BMI = weight /(height*height);

    cout << "Your BMI is " << BMI << " kg/m^2" << endl;


    if( BMI <= 18.5)
        cout << "You are underweight" << endl;
    else if(BMI >=18.5 && BMI <= 24.9)
        cout << "Your weight is normal" << endl;
    else if(BMI >= 25 && BMI <= 29.9)
        cout << "You are overweight" << endl;
    else if(BMI >= 30 && BMI <= 39.9)
        cout << "You are obese" << endl;
    else
        cout << "You are mobidly obese" << endl;


}