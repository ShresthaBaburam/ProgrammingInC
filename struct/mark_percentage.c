/*
Develop a program in C using structure to ask the information of 12 students with roll no., name , and marks secured in sub1 , sub2, and sub3 . 
Also display them in proper format along with calculation of total , percentage , . [ Note  the full marks of all subject is 100 ].
*/
#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int sub1;
    int sub2;
    int sub3;
};

int main() {
    const int totalMarks = 100;
    struct Student students[12];
    printf("Enter Information for 12 Students:\n");
    for (int i = 0; i < 2; ++i) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks for Subject 1: ");
        scanf("%d", &students[i].sub1);
        printf("Marks for Subject 2: ");
        scanf("%d", &students[i].sub2);
        printf("Marks for Subject 3: ");
        scanf("%d", &students[i].sub3);
    }
    printf("\nStudent Information:\n");
    printf("Roll No\tName\tSub1\tSub2\tSub3\tTotal\tPercentage\n");
    for (int i = 0; i < 12; ++i) {
        int totalMarksObtained = students[i].sub1 + students[i].sub2 + students[i].sub3;
        float percentage = (float)totalMarksObtained / (3 * totalMarks) * 100;

        printf("%d\t%s\t%d\t%d\t%d\t%d\t%.2f%%\n",
               students[i].rollNo, students[i].name,
               students[i].sub1, students[i].sub2, students[i].sub3,
               totalMarksObtained, percentage);
    }
    return 0;
}