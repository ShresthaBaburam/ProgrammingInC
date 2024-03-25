/*
Write a program to store five students information (id , name , DOB, and Phone )  and display them using structure 
*/
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    char dob[20];
    char phone[15];
};

int main() {
    struct Student students[5];
    printf("Enter Information for 5 Students:\n");
    for (int i = 0; i < 5; ++i) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("DOB: ");
        scanf("%s", students[i].dob);
        printf("Phone: ");
        scanf("%s", students[i].phone);
    }
    printf("\nStudent Information:\n");
    for (int i = 0; i < 5; ++i) {
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("DOB: %s\n", students[i].dob);
        printf("Phone: %s\n", students[i].phone);
    }
    return 0;
}