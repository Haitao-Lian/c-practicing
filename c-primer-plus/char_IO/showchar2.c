#include <stdio.h>

void display(char cr, int line, int width);
int main()
{
    int ch;
    int rows, cols;

    printf("Enter a character and two integers:\n");
    while ((ch = getchar()) != '\n') {
        if (scanf("%d %d", &rows, &cols) != 2)
            break;
        display(ch, rows, cols);
        while (getchar() != '\n')
            continue;
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
    }
    printf("Bye.\n");

    return 0;
}

void display(char cr, int line, int width)
{
    int row, col;
    for (row = 0; row < line; row++) {
        for (col = 0; col < width; col++)
            putchar(cr);
        putchar('\n');
    }
}