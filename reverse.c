#include <stdio.h>

#include "reverse.h"

//
// Created by Nikita on 7/10/2017.
//


int length(char *str) {
    int count = 0;
    while (str[count] != '\0')
        count++;
    return count;
}

void method1(char *str) {
    char bbb[100];
    int l = length(str);
    int fl = l - 1;

    for (int i = 0; i < l; i++) {
        bbb[i] = str[fl];
        fl--;
    }
    bbb[l] = '\0';
    printf("The original string is:%s\nThe reverse string is:%s\n", str, bbb);

}

void method2(char *str) {
    char b;
    int l = length(str);
    int fl = l - 1;
    int i = 0;
    while (i < fl) {
        b = str[i];
        str[i] = str[fl];
        str[fl] = b;
        i++;
        fl--;
    }
    printf("The reverse string is:%s\n", str);

}

void method3(int *a, int l) {
    int b=0;
    for (int i = 0; i < l; i++) {
        for (int j = i + 1; j < l; j++) {
            if (a[i] > a[j]) {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
    printf("The array by increment:");
    for (int i=0; i < l; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}