#include <iostream>
using namespace std;

class publication
{
protected:
    string title;
    float price;

public:
    virtual void getdata()
    {
        cout << "Enter the title" << endl;
        cin >> title;

        cout << "Enter the price" << endl;
        cin >> price;
    }

    virtual void putdata()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class sales
{
private:
    float dollarSales[3];
public:
    void getdata()
    {
        cout << "Enter first month's sale" << endl;
        cin >> dollarSales[0];

        cout << "Enter second month's sale" << endl;
        cin >> dollarSales[1];

        cout << "Enter third month's sale"<<endl;
        cin >> dollarSales[2];
    }

    void putdata()
    {
        cout << "First month sale: "<< dollarSales[0] <<endl;
        cout << "Second month sale: "<< dollarSales[1] <<endl;
        cout << "Third month sale: "<< dollarSales[2] <<endl;
    }
};


class book: public publication, public sales
{
private:
    int pageCount;
public:
    void getdata()
    {
        publication::getdata();
        //sales::getdata();

        cout << "Enter page count" << endl;
        cin >> pageCount;
    }
    void putdata()
    {
        publication ::putdata();
        //sales:: putdata();
        cout << "Page count: " << pageCount<<endl;
    }
};

class tape: public publication, public sales
{
private:

    float playingTime;
public:
    void getdata()
    {
        publication::getdata();
        //sales::getdata();
        cout << "Enter playing time" <<endl;
        cin >> playingTime;

    }
    void putdata()
    {
        publication::putdata();
        //sales::putdata();
        cout << "Playing time: "<<playingTime<<endl;
    }
};



int main()
{

    cout << "Testing book class"<<endl;
    book b1;
    //b1.getdata();
    //b1.putdata();
    /*
    cout << "\nTesting tape class"<<endl;
    tape t1;
    t1.getdata();
    t1.putdata();
    */



    publication* isaac[12];
    char input;
    int i = 0;
    do {
        cout << "Choose b for book or t for tape" <<endl;
        cin >> input;

        if(input == 'b')
        {
           isaac[i] = new book;
           isaac[i]->getdata();
           i++;
        }
        else if(input == 't')
        {
            isaac[i] = new tape;
            isaac[i]->getdata();
            i++;
        }
        else
            cout << "Enter correct choice. t or b" <<endl;


    }while(i<2);

    for(int j = 0; j < 2; j++)
        isaac[j]->putdata();
    //pubs[0]->getdata();
    //publication* test = new 0;
    //test->getdata();

}