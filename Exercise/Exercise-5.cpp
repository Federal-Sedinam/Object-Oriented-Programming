#include <iostream>

using namespace std;

class tollbooth
{
private:
    unsigned int number_of_cars;
    double amount_of_money;

public:
    tollbooth()
    {
        number_of_cars = 0;
        amount_of_money = 0;
    }


    void payingCar()
    {
        number_of_cars++;
        amount_of_money+=0.5;
    }
    void nopayCar()
    {
        number_of_cars++;
    }
    void display()
    {
        cout << "Number of cars: "<< number_of_cars<<endl;
        cout << "Amount of money: "<< amount_of_money<<endl;
    }
};

int main()
{
    char choice;

    tollbooth tech;

    while(true) {

        cout << "Choose P for paying car, N for no paying car and Q to quit"<<endl;
        cin >> choice;

        if (choice == 'P')
            tech.payingCar();
        else if (choice == 'N')
            tech.nopayCar();
        else if (choice == 'Q')
           {
                tech.display();
                break;
           }

        else
            cout << "Enter P, N or Q"<<endl;


    }

}