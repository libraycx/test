#include <stdio.h>

#define MIN_DOSE 0.8
#define DOSE_INCREMENT 0.2
#define MAX_DOSE 5.0

#define MIN_TIMES 10
#define MAX_TIMES 180
#define TIMES_INCREMENT 10

#define INJECTION_TYPES 3
#define DOSE_TYPES 5

int main() {
    double doses[DOSE_TYPES] = {0.8, 2.0, 3.0, 4.0, 5.0};
    int times;
    
    printf("所有可能的组合及单次注射剂量：\n");
    
    for (int i = 0; i < DOSE_TYPES; i++) {
        for (int j = MIN_TIMES; j <= MAX_TIMES; j += TIMES_INCREMENT) {
            double single_dose = doses[i] / j;
            printf("注射剂量选择 %.1f/%d ml，注射次数选择 %d 次，单次注射剂量为: %.3f ml\n", doses[i], i + 1, j, single_dose);
        }
    }
    
    return 0;
}
