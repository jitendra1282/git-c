#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[50];
    float grade;
};


void add_student_grade(struct student students[], int count);
void display_all_grades(struct student students[], int count);
void calculate_average_grade(struct student students[], int count);
void find_highest_grade(struct student students[], int count);
void find_lowest_grade(struct student students[], int count);

int main() {
    struct student students[100];  
    int count = 5;  
    strcpy(students[0].name, "John Doe");
    students[0].grade = 9.0;

    strcpy(students[1].name, "Jane Smith");
    students[1].grade = 8.5;

    strcpy(students[2].name, "Alice Johnson");
    students[2].grade = 9.2;

    strcpy(students[3].name, "Bob Brown");
    students[3].grade = 7.8;

    strcpy(students[4].name, "Charlie Green");
    students[4].grade = 8.0;
    
    int choice;
    
    while(1) {  // Infinite loop to keep the program running until the user exits
        printf("\nEnter the case you want:\n");
        printf("1 - Add student grade\n");
        printf("2 - Display all grades\n");
        printf("3 - Calculate average grade\n");
        printf("4 - Find highest grade\n");
        printf("5 - Find lowest grade\n");
        printf("6 - Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);  // Corrected scanf usage to take the address of choice

        switch(choice) {
            case 1:
            add_student_grade(students,count);
            break;
            case 2:
            display_all_grades(students,count);
            break;
            case 3:
            calculate_average_grade(students,count);
            break;
            case 4:
            find_highest_grade(students,count);
            break;
            case 5:
            find_lowest_grade(students,count);
            break;
            case 6:
            printf("terminating the cases ");
            return 0;
            default:
            printf ("invalid operations");
        }
    }
    return 0;
}

void add_student_grade(struct student students[],int count){
 float jithu=0;
for (int i =0;i<=4;i++){
    jithu+=students[i].grade;


}
printf("totalcgp :%f\n",jithu);

}
void display_all_grades(struct student students[], int count){
    for (int i =0;i<=4;i++){
        printf("%f,%s\n",students[i].grade,students[i].name);
    }
}
void calculate_average_grade(struct student students[], int count){
   float jithu=0;
for (int i =0;i<=4;i++){
    jithu+=students[i].grade;
} 
float result=jithu/5;
printf("%.2f",result);
}
void find_highest_grade(struct student students[], int count){
    float max=students[0].grade;
    for(int i =0;i<=4;i++){
    if (max<=students[i].grade){
        max=students[i].grade;
    }
    }
    printf("%.2f",max);
}
void find_lowest_grade (struct student students[], int count){
float min=students[0].grade ;
for (int i =0;i<5;i++){
    if (min >=students[i].grade){
        min =students[i].grade;
    }
}
printf ("%.2f",min );

}

               