#include <stdio.h>

void main()
{
    char character = 'a';
    char name[] = "sebuah nama";
    char city[10] = "Magelang";
    int integer = 21;
    float someFloat = 9.0f;
    double someDouble = 9.9;
    int numbers[3] = {1, 2, 3};

    printf("a char: %c \n", character);
    printf("a integer: %i \n", integer);
    printf("a string: %s \n", name);
    printf("a string with length: %s \n", city);
    printf("a float: %f \n", someFloat);
    printf("a double: %lf \n", someDouble);
    printf("a array: [%i, %i, %i] \n", numbers[0], numbers[1], numbers[2]);
}
