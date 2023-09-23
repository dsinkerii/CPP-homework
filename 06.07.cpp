#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

using namespace std;

struct Car {
    char color[100];
    char model[100];
    char numberPlate[9];
};
void fillCar(Car& car) {
    char newcolor[100],newmodel[100],newnumber[9];
    cout << "Enter new color: ";
    cin.ignore();
    cin.getline(newcolor,100);
    cout << "Enter new model: ";
    cin.getline(newmodel,100);
    cout << "Enter new number plate: ";
    cin.getline(newnumber,9);
    memcpy(newcolor,car.color,100);
    memcpy(newmodel,car.model,100);
    memcpy(newnumber,car.numberPlate,9);
}
void printCar(Car& car) {
    cout << "Color: " << car.color << endl;
    cout << "Model: " << car.model << endl;
    cout << "Number Plate: " << car.numberPlate << endl;
}
void printAllCars(Car cars[], int size) {
    cout << "All Cars:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Car " << i << ": " << endl;
        printCar(cars[i]);
    }
}
void editAllCars(Car cars[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Car " << i << ": " << endl;
        fillCar(cars[i]);
    }
}
void searchCarByNumber(Car cars[], int size, char* number) {
    for (int i = 0; i < size; ++i) {
        if (cars[i].numberPlate == number) {
            cout << "Car found:" << endl;
            cout << "Color: " << cars[i].color << endl;
            cout << "Model: " << cars[i].model << endl;
            cout << "Number Plate: " << cars[i].numberPlate << endl;
            return;
        }
    }
    cout << "Car with number " << number << " not found." << endl;
}



struct Entity {
    float speed;
    char type[20];
    char* color;
    double flightSpeed;
    bool clovenHoofed;
    int iqLevel;
};
void inputInfo(Entity entity) {
    cout << "Enter speed (km/h): ";
    cin >> entity.speed;

    cin.ignore();

    cout << "Enter type (bird, livestock, human): ";
    cin.getline(entity.type,20);

    cout << "Enter the color: ";
    cin >> entity.color;

    if(entity.type == "bird"){
        cout << "Enter the flight speed: ";
        cin >> entity.flightSpeed;
    }else if(entity.type == "livestock"){
        cout << "Enter 0 or 1 if its cloven hoofed: ";
        cin >> entity.clovenHoofed;
    }else if(entity.type == "human"){
        cout << "Enter the IQ level: ";
        cin >> entity.iqLevel;
    }
}
void printInfo(Entity entity) {
        cout << "Entity: " << endl;
        cout << "Speed: " << entity.speed << " km/h" << endl;
        cout << "Type: " << entity.type << endl;
        cout << "Color: " << entity.color << endl;
        cout << "Additional Info: " << endl;
        if(entity.type == "bird"){
            cout << "\tFlight speed: " << entity.flightSpeed;
        }else if(entity.type == "livestock"){
            cout << "\tIs cloven hoofed: " << entity.clovenHoofed;
        }else if(entity.type == "human"){
            cout << "\tIQ level: " << entity.iqLevel;
        }
}
void editAllEntities(Entity entities[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Entity " << i << ": " << endl;
        inputInfo(entities[i]);
    }
}
void printAllEntities(Entity entities[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Entity " << i << ": " << endl;
        printInfo(entities[i]);
    }
}

int main() {
    return 0;
}