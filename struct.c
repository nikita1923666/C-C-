#include <stdio.h>
#include <mem.h>

#include "reverse.h"

struct person {
    char name[40];
    char surName[40];
    int age;
};

int print(struct person *person1) {
    printf("Name: %s, Last name: %s, age: %d\n", person1->name, person1->surName, person1->age);

}


int main() {

    struct person person1;

    strcpy(person1.name, "Nikita");
    strcpy(person1.surName, "Lukyanenko");
    person1.age = 21;
    print(&person1);
    char aaa[100];
    int method = -1;
    //for method 3!
    int a[100];
    int b = 0;
    int l = 0;

    while (1) {
        printf("Enter method (1,2,...) or 0 to exit: ");
        scanf("%d", &method);
        switch (method) {
            case 0:
                printf("0/0");
                return 0;
            case 1:
                printf("Enter line: ");
                scanf("%s", aaa);
                method1(aaa);
                break;
            case 2:
                printf("Enter line: ");
                scanf("%s", aaa);
                method2(aaa);
                break;
            case 3:

                while (1) {
                    printf("Your array is %d long, Enter the number: or -1 to exit!:", l);
                    scanf("%d", &b);
                    if (b == -1) {
                        break;
                    }
                    a[l] = b;
                    l++;
                }
                method3(a, l);
                break;
            default:
                printf("Unknown method\n");
        }

    }
}

