#include <stdio.h>


struct Record {
    char IDNumber[50];
    char Name[50];
    float Grade;
};

void separator(){
    printf("==============================\n");
}

void inputRecords(struct Record *students, int numStudents) {
	
	int i;
    for (i = 0; i < numStudents; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Enter ID Number: ");
        scanf("%s", &students[i].IDNumber);

        printf("Enter Name: ");
        scanf(" %49[^\n]", students[i].Name);

        printf("Enter Grade: ");
        scanf("%f", &students[i].Grade);

        separator();
    }
}

void printRecords(struct Record *students, int numStudents) {
    printf("\n");
    separator();
    printf("USTP Student Database:\n");
    separator();
    
    int i;
    for (i = 0; i < numStudents; i++) {
        printf("Student %d Data:\n", i + 1);
        printf("ID Number: %s\n", students[i].IDNumber);
        printf("Name: %s\n", students[i].Name);
        printf("Grade: %.2f\n", students[i].Grade);
        separator();
    }
}

int main() {

    int numStudents = 3;
    struct Record students[numStudents];

    inputRecords(students, numStudents);
    printRecords(students, numStudents);

    return 0;
}

