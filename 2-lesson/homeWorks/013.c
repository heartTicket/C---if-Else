#include <stdio.h>

int main() {

    int people, area, population_density; 
    

    printf("Enter how many people r there: ");
    scanf("%d", &people);

    printf("Enter the area: ");
    scanf("%d", &area);

    population_density = people / area;

    printf("The population density is = %d", population_density);
}