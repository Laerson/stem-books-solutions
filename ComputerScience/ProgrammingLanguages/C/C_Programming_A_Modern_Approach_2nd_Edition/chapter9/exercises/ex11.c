#include <ctype.h>

float compute_GPA(char grades[], int n) {
    double grades_sum = 0;
    for (int i = 0; i < n; i++)
        switch (tolower(grades[i])) {
            case 'a': grades_sum += 4; break;
            case 'b': grades_sum += 3; break;
            case 'c': grades_sum += 2; break;
            case 'd': grades_sum += 1; break;
        }
    return grades_sum / n;

}
