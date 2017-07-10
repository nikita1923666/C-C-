#include <stdio.h>


int strlen(char *str) {
    int count = 0;
    while (str[count] != '\0')
        count++;
    return count;
}


int main1() {
//    int arr[5] = {3, 7, 8, 1, 20};
//    int radius;
//
//    printf("Enter radius of the pizza:");
//
//
//    scanf("%d", &radius);
//    float area = 3.14 * radius * radius;
//    printf("The area of the pizza is:%4.2f\n", area);
//
//    for (int i = 0; i < 5; i++) {
//        printf("arr[%d] = %4d\n", i, arr[i]);
//    }

//    char* str ="Hello";
//
//    printf(str);

    char buffer[100];

    printf("Enter line:");
    scanf("%s", buffer);

    int len = strlen(buffer);

    printf("Length of string you entered is: %d\n", len);
    char a[100];

    char *c = buffer;
    char *c1 = a;

    while (*c != '\0') {
        *c1 = *c;
        c1++;
        c++;
    }
    *c1 = *c;

//    for(int i=0;i<len+1;i++) {
//        a[i] = buffer[i];
//    }
    printf("Buffer= %s\n", buffer);
    printf("a= %s\n", a);

    if (len < 20) {
        printf("short\n");
    }
}