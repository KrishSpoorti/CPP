#include<iostream>
using namespace std;

class Car
{
 public:
 string model;
 string brand;
 int yearOfMan;

 Car (string x, string y, int z);
 
};

Car :: Car(string x, string y, int z){
    model = x;
    brand = y;
    yearOfMan = z;

}

int main()
{
    Car sportsCar("SF", "Ferrari", 2020);
    cout << "brand:" << sportsCar.brand << endl;
    return 0;
}