# C++ Car & Living entity struct code

This code provides `Car` and `Entity` structs.

## Car struct parameters:
```c++
char color[100];
char model[100];
char numberPlate[9];
```

## Entity struct parameters:
```c++
float speed;
char type[20];
char* color;
double flightSpeed;
bool clovenHoofed;
int iqLevel;
```

# Functions:
## Car functions:
```c++
void fillCar(Car& car) // fill info about the car
```
```c++
void printCar(Car& car) // print info about the car
```
```c++
void printAllCars(Car cars[], int size) // print info about all cars
```
```c++
void editAllCars(Car cars[], int size) // edit info about all cars
```
```c++
void searchCarByNumber(Car cars[], int size, char* number) // search a car in a car array by number plate
```

## Entity functions:
```c++
void inputInfo(Entity entity) // input info about the entity
```
```c++
void printInfo(Entity entity) // print info about the entity
```
```c++
void editAllEntities(Entity entities[], int size) // edit all entities
```
```c++
void printAllEntities(Entity entities[], int size) // print all entities
```
