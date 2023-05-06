#include <iostream>

using namespace std;


class CarbonFootprint
{
    virtual int getCarbonFootprint() = 0;
};
class Building: public CarbonFootprint
{
    int getCarbonFootprint() {
        return 0;
    }
};
class car: public CarbonFootprint
{
    int getCarbonFootprint() {
        return 0;
    }
};
class Bicycle: public CarbonFootprint
{
    int getCarbonFootprint() {
        return 0;
    }
};


int main()
{

}