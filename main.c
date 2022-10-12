#include <stdio.h>

int main() {
    printf("Podaj temperature w stopniach Celsjusza:");
    float temp_cel,temp_kel,temp_far;
    scanf("%f",&temp_cel);
    temp_far = ((temp_cel*9)/5)+32;
    temp_kel = temp_cel + 273.15;
    printf("%.2f\n%.2f\n",temp_kel,temp_far);
//k
    return 0;
}
