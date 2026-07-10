#include<stdio.h>

struct owner {
    char name[20];
};

struct car {
    char name[20];
    int year;
    struct owner owner; 
};

int main() {
    struct owner person = {"Liza"};
    struct car myCar = {"Toyota", 2020, person};

    printf("Car Name: %s\n", myCar.name);
    printf("Year: %d\n", myCar.year);
    printf("Owner Name: %s\n", myCar.owner.name);

    return 0;
}
