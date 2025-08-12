#include <stdio.h>

int main() {
    float s1, s2, s3, total, avg;

    printf("Enter marks of three subjects:\n");
    scanf("%f %f %f", &s1, &s2, &s3);

    if (s1 < 35 || s2 < 35 || s3 < 35) {
        printf("Student failed due to marks < 35 in one or more subjects.\n");
    } else {
        total = s1 + s2 + s3;
        avg = total / 3;

        printf("Total = %f\n", total);
        printf("Average = %f\n", avg);

        if (avg >= 70) {
            printf("Grade: Distinction\n");
        } else if (avg >= 60) {
            printf("Grade: First\n");
        } else if (avg >= 50) {
            printf("Grade: Second\n");
        } else if (avg >= 35) {
            printf("Grade: Third\n");
        } else {
            printf("Fail\n");
        }
    }

    return 0;
}
