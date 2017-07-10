#include <stdio.h>
#include <mem.h>

struct person {
    char name[40];
    char surName[40];
    int age;
};

int print( struct person* person1){
    printf("Name: %s, Last name: %s, age: %d\n", person1->name, person1->surName,person1->age);

}


int main() {


    struct person person1;

    strcpy(person1.name, "Nikita");
    strcpy(person1.surName, "Lukyanenko");
    person1.age = 21;
    print(&person1);
}