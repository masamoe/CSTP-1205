#include <iostream>
#include "Car.h"
#include "Motorcycle.h"

using namespace std;

int main()
{
    Vehicle vehicle;
    Car car;
    Motorcycle motorcycle;

    cout << "Vehicle has " << vehicle.GetNumberOfWheels() << " wheels\n";
    cout << "Car has " << car.GetNumberOfWheels() << " wheels\n";
    cout << "Motorcycle has " << motorcycle.GetNumberOfWheels() << " wheels\n";

    Vehicle *pVehicle = &vehicle;
    cout << "Vehicle has " << pVehicle->GetNumberOfWheels() << " wheels\n";
}