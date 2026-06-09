#include <stdio.h>
#include <string.h>

// Structure definition for pointer with structures
struct Student {
    int roll;
    char name[30];
    float marks;
};

// Function prototypes
void pointerWithFunction(int *x, int *y);
void pointerWithArray(int *arr, int n);
void pointerWithString(char *str);
void pointerWithStructure();
void pointerWithFileHandling(int *arr, int n);

int main() {
    printf("=============================================\n");
    printf("         POINTER DEMO USING C LANGUAGE\n");
    printf("=============================================\n");

    // 1️⃣ Pointer Basic Understanding
    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b;

    printf("\n-- Basic Pointer Understanding --\n");
    printf("Value of a = %d, Address of a = %p\n", a, &a);
    printf("Value of b = %d, Address of b = %p\n", b, &b);
    printf("Pointer p1 points to address: %p, value = %d\n", p1, *p1);
    printf("Pointer p2 points to address: %p, value = %d\n", p2, *p2);

    // 2️⃣ Pointer Operations
    printf("\n-- Pointer Operations --\n");
    printf("Before increment: p1 = %p, *p1 = %d\n", p1, *p1);
    p1++;  // Pointer arithmetic
    printf("After increment: p1 = %p (moved to next memory location)\n", p1);
    p1--;  // Restore original
    if (p1 != p2)
        printf("Pointers p1 and p2 point to different memory locations.\n");

    // 3️⃣ Pointer with Arrays
    printf("\n-- Pointer with Arrays --\n");
    int arr[5] = {10, 20, 30, 40, 50};
    pointerWithArray(arr, 5);

    // 4️⃣ Pointer with Strings
    printf("\n-- Pointer with Strings --\n");
    char str[] = "PointerDemo";
    pointerWithString(str);

    // 5️⃣ Pointer with Structures
    printf("\n-- Pointer with Structures --\n");
    pointerWithStructure();

    // 6️⃣ Pointer with Functions (Call by Reference)
    printf("\n-- Pointer with Functions (Call by Reference) --\n");
    printf("Before Swap: a = %d, b = %d\n", a, b);
    pointerWithFunction(&a, &b);
    printf("After Swap:  a = %d, b = %d\n", a, b);

    // 7️⃣ Pointer with File Handling
    printf("\n-- Pointer with File Handling --\n");
    pointerWithFileHandling(arr, 5);
    printf("Pointer data successfully written to 'pointer_demo.txt'\n");

    printf("\n========= END OF POINTER DEMO =========\n");
    return 0;
}

// 📌 Function Definitions

// Pointer with Functions - Call by Reference
void pointerWithFunction(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Pointer with Arrays
void pointerWithArray(int *arr, int n) {
    for (int i = 0; i < n; i++)
        printf("Element %d = %d | Address = %p\n", i + 1, *(arr + i), (arr + i));
}

// Pointer with Strings
void pointerWithString(char *str) {
    printf("String characters accessed using pointer:\n");
    while (*str != '\0') {
        printf("%c ", *str);
        str++;
    }
    printf("\n");
}

// Pointer with Structures
void pointerWithStructure() {
    struct Student s1 = {101, "Niju", 89.5};
    struct Student *ptr = &s1;

    printf("Student Roll No: %d\n", ptr->roll);
    printf("Student Name: %s\n", ptr->name);
    printf("Student Marks: %.2f\n", ptr->marks);
}

// Pointer with File Handling
void pointerWithFileHandling(int *arr, int n) {
    FILE *fp = fopen("pointer_demo.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fprintf(fp, "Pointer Demo File Output:\n");
    for (int i = 0; i < n; i++)
        fprintf(fp, "Value: %d, Address: %p\n", *(arr + i), (arr + i));

    fclose(fp);
}
