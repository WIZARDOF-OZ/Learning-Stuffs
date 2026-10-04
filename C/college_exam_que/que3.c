#include <stdio.h>


int total_marks(int m1, int m2, int m3){
    return m1 + m2 + m3;

}
int average_marks(int total, int subjects){
 return (float)total/subjects;
}
char gradeCheck(float avg){
if(avg>=90) return 'A';
else if(avg>=80) return 'B';
else if(avg>=70) return 'C';
else if(avg>=60) return 'D';
else return 'F';
}
int main(){
    int m1,m2,m3, total;
    float avg;
    char grade;
    printf("Enter marks of three subjects:");
    scanf("%d %d %d", &m1, &m2, &m3);
    total = total_marks(m1,m2,m3);
    avg = average_marks(total,3);
    grade = gradeCheck(avg);
    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", avg);
    printf("Grade: %c\n", grade);

    
    return 0;
}