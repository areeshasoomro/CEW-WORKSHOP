//CEW LAB TASK + CLASS EXERCISES

//#include <stdio.h>
//int main() {
//    int n, i, odd, sum;
//    printf("Enter the value of n: ");
//    scanf("%d", &n);
//    printf("\nUsing for loop:\n");
//    sum = 0;
//    for (i = 1; i <= n; i++) {
//        odd = 2 * i - 1;
//        printf("%d ", odd);
//        sum += odd;
//    }
//    printf("Sum: %d\n", sum);
//    printf("\nUsing while loop:\n");
//    i = 1;
//    sum = 0;
//    while (i <= n) {
//        odd = 2 * i - 1;
//        printf("%d ", odd);
//        sum += odd;
//        i++;
//    }
//    printf("Sum: %d\n", sum);
//    printf("\nUsing do-while loop:\n");
//    i = 1;
//    sum = 0;
//    do {
//        odd = 2 * i - 1;
//        printf("%d ", odd);
//        sum += odd;
//        i++;
//    } while (i <= n);
//    printf("Sum: %d\n", sum);
//
//    return 0;
//}










//
//#include <stdio.h>
//int main() {
//    int rows, spaces, asterisks;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (int i = 1; i <= rows; i++) {
//        for (spaces = 1; spaces <= rows - i; spaces++) {
//            printf(" ");
//        }
//        for (asterisks = 1; asterisks <= 2 * i - 1; asterisks++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}


//#include <stdio.h>
//int main() {
//    int flag = 0, i;
//    char s1[100], s2[100];
//    printf("Enter string 1: ");
//    scanf("%s", s1);
//    printf("Enter string 2: ");
//    scanf("%s", s2);
//    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
//        if (s1[i] != s2[i]) {
//            flag = 1;
//            break;
//        }
//    }
//    if (flag == 0) {
//        printf("Both strings are the same!\n");
//    } else {
//        printf("Not equal!\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char str[200];
//    int i;
//    printf("Enter your string: ");
//    scanf("%s", str);
//    printf("Original string: %s\n", str);
//    for (i = 0; i < strlen(str); i++) {
//        if (str[i] >= 'a' && str[i] <= 'z') {
//            str[i] = str[i] - 32;
//        } else if (str[i] >= 'A' && str[i] <= 'Z') {
//            str[i] = str[i] + 32;
//        }
//    }
//    printf("new string: %s\n", str);
//    return 0;
//}




//#include <stdio.h>
//int main() {
//    int size;
//    printf("Enter the size of the array: ");
//    scanf("%d", &size);
//    int arr[size];
//    printf("Enter the elements of the array:\n");
//    for (int i = 0; i < size; i++) {
//        scanf("%d", &arr[i]);
//    }
//    printf("Unique elements in the array:");
//    for (int i = 0; i < size; i++) {
//        int isUnique = 1;
//        for (int j = 0; j < i; j++) {
//            if (arr[i] == arr[j]) {
//                isUnique = 0;
//                break;
//            }
//        }
//        if (isUnique==1) {
//            printf(" %d", arr[i]);
//        }
//    }
//    printf("\n");
//    return 0;
//}

//
//
//#include <stdio.h>
//struct Distance {
//    int feet;
//    float inch;
//};
//int main() {
//    struct Distance d1, d2, sum;
//printf("Enter the distance_1 (feet inch): ");
//scanf("%d %f", &d1.feet, &d1.inch);
//printf("Enter the distance_2 (feet inch): ");
//scanf("%d %f", &d2.feet, &d2.inch);
//    sum.feet = d1.feet + d2.feet;
//    sum.inch = d1.inch + d2.inch;
//    if (sum.inch >= 12.0) {
//        sum.inch -= 12.0;
//        sum.feet++;
//    }
//    printf("Sum of distances: %d ft %.2f inch\n",
//           sum.feet,sum.inch);
//    return 0;
//}


//#include <stdio.h>
//int main(){
//    int i,j,k,n;
//    printf("enter number of rows:");
//    scanf("%d",&n);
//    for (i=1;i<=n;i++){
//        for(j=n;j>i;j--){
//            printf(" ");
//        }
//        for(k=1;k<=i;k++){
//            printf("* ");
//        }
//    printf("\n");
//    }
//    return 0;
//}


//class exercises
//print reverse pyramid
//
//#include <stdio.h>
//int main() {
//    int i, j, k, n;
//    printf("Enter number of rows: ");
//    scanf("%d", &n);
//    for (i = n; i >= 1; i--) {
//        for (j = n; j > i; j--) {
//            printf(" ");
//        }
//        for (k = 1; k <= i; k++) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//

//print matrix in matrix form
//#include <stdio.h>
//int main() {
//    int rows, cols;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    printf("Enter the number of columns: ");
//    scanf("%d", &cols);
//    int matrix[rows][cols];
//    printf("Enter matrix elements:\n");
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            scanf("%d", &matrix[i][j]);
//        }
//    }
//    printf("\nThe matrix is:\n");
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//print odd number table by using continue
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//    int n ,i;
//    printf("enter n:");
//    scanf("%d",&n);
//    for(i=0;i<=10;i++){
//        if (i%2==0){
//            continue;
//        }
//        printf("%d x %d =%d\n",n,i,n*i);
//    }
//    return 0;
//}
//
//



//print table of number but if input is negativve break out of loop
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//    int n ,i;
//    printf("enter n:");
//    scanf("%d",&n);
//    for(i=1;i<=10;i++){
//        if (n<0){
//            break;
//        }
//        printf("%d x %d =%d\n",n,i,n*i);
//    }
//    return 0;
//}
////
////
//
//
//
//

















