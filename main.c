#include <stdio.h>
int main() {
    float dai, rong, chuvi;
    printf("Nhap chieu dai cua hcn nheee: ");
    scanf("%f", &dai);
    printf("Nhap chieu rong cua hcn nheee: ");
    scanf("%f", &rong);
    chuvi = 2 * (dai + rong);
    printf("Chu vi cua hinh chu nhat neee = %.2f\n", chuvi);
    return 0;
}
