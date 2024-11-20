#include <stdio.h>

#include <stdbool.h> // Su dung kieu bool 

int main() {
    int age = 25; // So nguyen 
    float height = 5.9; // So thuc chinh xac vua 
    double weight = 70.5; // so thuc chinh xac cao 
    char grade = 'A'; // Ky tu 
    bool isStudent = true; // Boolean: true/false
    short smallNum = 32000; // So nguyen nho 
    long bigNum = 123456789; // So nguyen lon 

    printf("Age: %d, Height: %.1f, Weight: %.1f\n", age, height, weight);
    printf("Grade: %c, Is Student: %d\n", grade, isStudent);
    printf("Small: %d, Big: %ld\n", smallNum, bigNum);
    return 0;
}
