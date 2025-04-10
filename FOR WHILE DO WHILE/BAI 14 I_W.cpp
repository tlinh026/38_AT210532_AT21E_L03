#include <stdio.h>

int main() {
    double gdp_2014, growth_rate, gdp;
    int year = 2014;

    printf("Nhap GDP nam 2014 (USD): ");
    scanf("%lf", &gdp_2014);
    printf("Nhap toc do tang truong kinh te trung binh (%%): ");
    scanf("%lf", &growth_rate);

    growth_rate = growth_rate / 100;
    gdp = gdp_2014;

    printf("\nNam\tGDP\n");
    
    while (gdp <= 2 * gdp_2014) {
        printf("%d\t%.2lf\n", year, gdp);
        gdp = gdp * (1 + growth_rate);
        year = year + 1;
    }

    return 0;
}
