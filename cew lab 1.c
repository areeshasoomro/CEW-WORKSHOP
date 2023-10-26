



//LAB 1 ALL TASK CLASSWORK + LAB WORK  (AREESHA SOOMRO )




//take x and y from user and show all arthemetic operations u do on it .
//#include <stdio.h>
//#include <stdlib.h>
//  int main(){
//  int x;
//  int y;
//  printf("enter x:\n");
//  scanf("%d",&x);
//  printf("enter y:\n");
//  scanf("%d",&y);
//  printf("x+y :%d\n",x+y);
//   printf("x-y :%d\n",x-y);
//   printf("x/y :%d\n",x/y);
//   printf("x*y :%d\n",x*y);
//  return 0;
//
//  }



//if any number is positive check if it is even or odd
//#include <stdio.h>
//#include <stdlib.h>
//  int main(){
//    int x;
//    printf("enter any number:");
//    scanf("%d",&x);
//    if (x>0){
//      if (x%2==0){
//        printf("the number is even !");
//      }
//      else{
//        printf("the number is odd !!");
//      }
//      }
//    }
//


//call a function to print table upto 10 of  input number asked
//#include <stdio.h>
//#include <stdlib.h>
//void func(int x){
//  printf("%d*1=%d\n",x,x*1);
//   printf("%d*2=%d\n",x,x*2);
//   printf("%d*3=%d\n",x,x*3);
//   printf("%d*4=%d\n",x,x*4);
//   printf("%d*5=%d\n",x,x*5);
//   printf("%d*6=%d\n",x,x*6);
//   printf("%d*7=%d\n",x,x*7);
//   printf("%d*8=%d\n",x,x*8);
//   printf("%d*9=%d\n",x,x*9);
//   printf("%d*10=%d\n",x,x*10);
//}
//  int main(){
//    int x;
//    printf("enter x:");
//    scanf("%d",&x);
//    func(x);
//    return 0;
//  }



//take two input if both inputs are greatter than 5 add them or any one is greater than 5 multiply them else both are neither greater than 5 print hello world
//#include <stdio.h>
//int main(){
//  int x;
//  int y;
//  printf("enter x:");
//  scanf("%d",&x);
//  printf("enter y:");
//  scanf("%d",&y);
//  if(x && y >5){
//    printf("the sum of %d and %d is :%d\n",x,y,x+y);
//  }else if (x || y>5){
//    printf("The multiply of %d and %d is: %d\n",x,y,x*y);
//  }else{
//    printf("hello world");
//  }
//  return 0;
//}



//(lab task 1)
//#Write a C program that accepts an employee's ID, total worked hours in a month and
//#the amount received per hour. Print the ID and salary (with two decimal places) of the
//#employee for a particular month.
//#include <stdio.h>
//int main() {
//    int employeeID;
//    float hoursWorked, hourlyRate, salary;
//    printf("Enter employee ID: ");
//    scanf("%d", &employeeID);
//    printf("Enter total hours worked in a month: ");
//    scanf("%f", &hoursWorked);
//    printf("Enter amount received per hour: ");
//    scanf("%f", &hourlyRate);
//    salary = hoursWorked * hourlyRate;
//    printf("Employee ID: %d\n", employeeID);
//    printf("Salary for the month: $%.2f", salary);
//    return 0;
//}
//
//

//(lab task 2)
//Write a C program that takes the height and width of a rectangle as an input from user
//and compute the perimeter and area of a rectangle.
//#include <stdio.h>
//int main() {
//    float height, width, perimeter, area;
//    printf("Enter the height of the rectangle: ");
//    scanf("%f", &height);
//    printf("Enter the width of the rectangle: ");
//    scanf("%f", &width);
//    perimeter = 2 * (height + width);
//    area = height * width;
//    printf("\nPerimeter of the rectangle: %.2f units\n", perimeter);
//    printf("Area of the rectangle: %.2f square units\n", area);
//    return 0;
//}


//(lab task 3)
//Write a C program to accept the height of a person in centimeters and categorize the
//person according to his height. (Height < 150cm – Dwarf, Height=150cm – Average,
//Height>=165cm – Tall).
//#include <stdio.h>
//int main() {
//    float height;
//    printf("Enter the height of the person in centimeters: ");
//    scanf("%f", &height);
//    if (height < 150) {
//        printf("Person is categorized as a Dwarf.\n");
//    } else if (height >= 150 && height < 165) {
//        printf("Person is categorized as Average.\n");
//    } else {
//        printf("Person is categorized as Tall.\n");
//    }
//    return 0;
//}
//(lab task 5)
//write program to calculate nth term of fibonnaci series and print series
//#include <stdio.h>
//int fibonacci(int n) {
//    if (n <= 1) {
//        return n;
//    } else {
//        return fibonacci(n - 1) + fibonacci(n - 2);
//    }
//}
//void Series(int n) {
//    int first = 0, second = 1, third;
//    printf("Fibonacci series up to %d terms: ", n);
//    for (int i = 0; i < n; ++i) {
//        if (i <= 1) {
//            third = i;
//        } else {
//            third = first + second;
//            first = second;
//            second = third;
//        }
//        printf("%d ", third);
//    }
//    printf("\n");
//}
//int main() {
//    int n;
//    printf("Enter the number of terms for Fibonacci series: ");
//    scanf("%d", &n);
//    printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));
//    Series(n);
//    return 0;
//}
//
//(lab task 4)
//Write a program in C to convert a decimal number to a binary numbers.
//#include <stdio.h>
//int main() {
//    int n;
//    printf("Enter number: ");
//    scanf("%d", &n);
//    int binary[10];
//    int i = 0;
//    while (n != 0) {
//        int r = n % 2;
//        binary[i] = r;
//        n = n / 2;
//        i++;
//    }
//    printf("Binary equivalent: ");
//    for (int j = i - 1; j >= 0; j--) {
//        printf("%d", binary[j]);
//    }
//    printf("\n");
//    return 0;
//}





















