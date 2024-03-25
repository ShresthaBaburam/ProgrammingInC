/*
Demonstrate a program in C to create a data file named  score.dat to store student's information with reg no, name , gender,and address . 
The program should ask the user to continue or not. 
When finished the program should also display all the records in proper format.

*/
#include <stdio.h>

struct Student {
    int regNo;
    char name[50];
    char gender;
    char address[100];
};

int main() {
    struct Student student;
    char choice;
    FILE *filePtr;
    filePtr = fopen("score.dat", "wb");
    if (filePtr == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }
    do {
        printf("\nEnter Student Information:\n");
        printf("Registration No: ");
        scanf("%d", &student.regNo);
        printf("Name: ");
        scanf("%s", student.name);
        printf("Gender: ");
        scanf(" %c", &student.gender);
        printf("Address: ");
        scanf("%s", student.address);
        fwrite(&student, sizeof(struct Student), 1, filePtr);
        printf("Do you want to continue adding records? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    fclose(filePtr);
    filePtr = fopen("score.dat", "rb");
    if (filePtr == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }
    printf("\nStudent Records:\n");
    printf("Reg No\tName\tGender\tAddress\n");
    while (fread(&student, sizeof(struct Student), 1, filePtr)) {
        printf("%d\t%s\t%c\t%s\n", student.regNo, student.name, student.gender, student.address);
    }
    fclose(filePtr);
    return 0;
}