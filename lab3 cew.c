 //LAB 3 CEW LAB TASK .  aressha cs110



//#include <stdio.h>
//void swap(int *a, int *b) {
//    int t = *a;
//    *a = *b;
//    *b = t;
//}
//int main() {
//    int num1, num2;
//    printf("Enter the num1: ");
//    scanf("%d", &num1);
//    printf("Enter the num2: ");
//    scanf("%d", &num2);
//    swap(&num1, &num2);
//    printf("num1 = %d, num2 = %d\n", num1, num2);
//    return 0;
//}

//#include <stdio.h>
//void printReverse(const char *str) {
//    int length = 0;
//    while (*(str + length) != '\0') {
//        length++;
//    }
//    printf("Reversed String: ");
//    for (int i = length - 1; i >= 0; i--) {
//        printf("%c", *(str + i));
//    }
//    printf("\n");
//}
//int main() {
//    char inputString[100];
//    printf("Enter a string: ");
//    scanf("%s", inputString);
//    printReverse(inputString);
//    return 0;
//}





//#include <stdio.h>
//int main() {
//    int size;
//    printf("Enter the size of the array: ");
//    scanf("%d", &size);
//    int arr[size];
//    printf("Enter %d elements:\n", size);
//    for (int i = 0; i < size; i++) {
//        scanf("%d", &(*(arr + i)));
//    }
//    printf("Array elements: ");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", *(arr + i));
//    }
//    printf("\n");
//    return 0;
//}
//



//#include <stdio.h>
//int main() {
//    int size, target;
//    printf("Enter the size of array: ");
//    scanf("%d", &size);
//    int arr[size];
//    printf("Enter %d elements:\n", size);
//    for (int i = 0; i < size; i++) {
//        scanf("%d", arr + i);
//    }
//    printf("Enter the element to search for: ");
//    scanf("%d", &target);
//    int found = 0;
//    for (int i = 0; i < size; i++) {
//        if (*(arr + i) == target) {
//            found = 1;
//            printf("Element found at index %d\n", i);
//        }
//    }
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//

//#include <stdio.h>
//void addMatrices(int rows, int cols, int *mat1, int *mat2, int *result) {
//    for (int i = 0; i < rows * cols; i++)
//        *(result + i) = *(mat1 + i) + *(mat2 + i);
//}
//void displayMatrix(int rows, int cols, int *matrix) {
//    for (int i = 0; i < rows * cols; i++)
//        printf("%d%c", *(matrix + i), (i + 1) % cols == 0 ? '\n' : '\t');
//}
//int main() {
//    int rows, cols;
//    printf("Enter the number of rows and columns: ");
//    scanf("%d %d", &rows, &cols);
//    int mat1[rows][cols], mat2[rows][cols], result[rows][cols];
//    printf("Enter elements for the first matrix:\n");
//    for (int i = 0; i < rows * cols; i++) scanf("%d", &mat1[0][i]);
//    printf("Enter elements for the second matrix:\n");
//    for (int i = 0; i < rows * cols; i++) scanf("%d", &mat2[0][i]);
//    addMatrices(rows, cols, &mat1[0][0], &mat2[0][0], &result[0][0]);
//    printf("Sum of Matrices:\n");
//    displayMatrix(rows, cols, &result[0][0]);
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//



//
