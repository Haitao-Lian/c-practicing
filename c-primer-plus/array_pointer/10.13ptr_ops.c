#include <stdio.h>

int main()
{
    int urn[5] = {100, 200, 300, 400, 500};
    int *ptr1, *ptr2, *ptr3;
    ptr1 = urn;
    ptr2 = &urn[2];

    printf("/* ------ OUTPUT ------ */\n");
    printf("pointer value, dereferenced pointer, pointer address:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
    // ptr1 = 00000034FC1FF830, *ptr1 = 100, &ptr1 = 00000034FC1FF828
    // 指针 ptr1 之后就是数组存放的位置 ~ 这个看编译器安排

    ptr3 = ptr1 + 4;
    printf("\nadding an int to a pointer:\n");
    printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));
    ptr1++;

    printf("\nvalue agter ptr1++:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

    ptr2--;
    printf("\nvalues after --ptr2:\n");
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);

    --ptr1;
    ++ptr2;
    printf("\nPointes reset to original values:\n");
    printf("ptr1 = 5p, ptr2 = %p\n", ptr1, ptr2);

    printf("\nsubtracting one pointer from another\n");
    printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);
    printf("ptr2 = %p, ptr1 = %p, ptr1 - ptr2 = %td\n", ptr2, ptr1, ptr1 - ptr2);
    printf("ptr3 = %p, ptr1 = %p, ptr1 - ptr3 = %td\n", ptr3, ptr1, ptr1 - ptr3);
    printf("ptr3 = %p, ptr1 = %p, ptr3 - ptr1 = %td\n", ptr3, ptr1, ptr3 - ptr1);

    printf("\nsubtracting an int from a pointer:\n");
    printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);

    return 0;
}
