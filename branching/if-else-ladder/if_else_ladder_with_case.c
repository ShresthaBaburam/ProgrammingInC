#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    printf("Enter your Name: ");
    scanf("%s", name);

    int age;
    printf("Enter your Age: ");
    scanf("%d", &age);

    char gender;
    printf("Enter your Gender (F/M): ");
    scanf(" %c", &gender);

    char sex[10];
    switch (gender) {
        case 'F':
        case 'f':
            strcpy(sex, "Female");
            break;
        case 'M':
        case 'm':
            strcpy(sex, "Male");
            break;
        default:
            strcpy(sex, "Other");
    }

    if (strcmp(sex, "Female") == 0) {
        if (age > 20) {
            printf("%s is %s and Can Vote with age %d\n", name, sex, age);
        } else {
            printf("%s is %s and Can not Vote with age %d\n", name, sex, age);
        }
    } else if (strcmp(sex, "Male") == 0) {
        if (age > 18) {
            printf("%s is %s and Can Vote with age %d\n", name, sex, age);
        } else {
            printf("%s is %s and Can not Vote with age %d\n" ,name, sex, age);
        }
    } else {
        printf("%s is %s and Can not Vote with age %d\n", name, sex, age);
    }
    return 0;
}
/*
Output 1:
    Enter your Name: Baburam
    Enter your Age: 25
    Enter your Gender (F/M): M
    Baburam is Male and Can Vote with age 25
    
Output 2:
    Enter your Name: Sita
    Enter your Age: 19
    Enter your Gender (F/M): F
    Sita is Female and Can not Vote with age 19
*/