#include <stdio.h>

int main() {
    int height, width, perimeter;

    // Prompting user input for height and width of the rectangle
    printf("Enter the height and width of the rectangle: ");
    scanf("%d %d", &height, &width);

    // Calculating the perimeter of the rectangle
    perimeter = 2 * (height + width);

    // Printing the perimeter
    printf("Perimeter of the rectangle: %d\n", perimeter);

    return 0;
}
