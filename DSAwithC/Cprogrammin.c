
// #include <stdio.h>
// int main()
// {
//     printf("Hello World");
//     return 0;
// }

// Que.2 Sum  Program
// #include<stdio.h>
// int main(){
// int a, b , c, sum;
// printf("enter first number");
// scanf("%d", &a);
// printf("enter second number");
// scanf("%d", &b);
// printf("enter third number");
// scanf("%d", &c);
// printf("sum is %d",a+b+c);
// return 0;
// }


// Que.3 Swap two numbers without using third variable Program-
// #include<stdio.h>
// int main(){
// int x=10; 
// int y=20;
// x=x+y;
// y=x-y;
// x=x-y;
// printf("the value of x is %d\n",x);
// printf("the value of y is %d",y);
// return 0; 
// }


// Que.4Calculate simple interest Program-

// #include<stdio.h>
// int main(){
// int p, r , t , interest;
// printf("enter the principle");
// scanf("%d",&p);
// printf("enter the rate");
// scanf("%d",&r);
// printf("enter the time");
// scanf("%d",&t);
// interest = p*r*t/100;
// printf("the simple interest is %d",interest );
// return 0;
// }

//  Que.5 Calculate Area of Square-
 
// #include<stdio.h>
// int main(){
//     int side;
//     printf("enter the side");
//     scanf("%d",&side);
//     printf(" area is :%d", side*side);
//     return 0;
    
// }
// Que6.  Calculate the Area of circle-
// #include<stdio.h>
// int main(){
//     float radius ;
//     printf("enter the radius : ");
//     scanf("%f", &radius);
//     printf("area is %f",3.14*radius*radius);
//     return 0;
// }
 
//  Que7.  YEAR leaf Year or Not-
// #include<stdio.h>
// int main(){
//     int year;
//     printf("enter  a year");
//     scanf("%d",&year);
//     if(year%400==0){
//         printf("%d is a leaf year",year);
        
//     }
//     else if(year%100==0){
//     printf("%d is not a leaf year", year);
//     }
//     else if(year%4==0){
//         printf("%d is a leaf year", year);
        
//     }
//     else{
//         printf("%d is not a leaf year",year);
        
//     }
//     return 0;
    
// }
// Que8. FACTORIAL OF A NUMBER -
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number");
//     scanf("%d",&n);
//     int fact =1;
//     for(int i=1; i<=n; i++){
//         fact = fact*i;
//     }
//     printf("final factorial is %d", fact);
//     return 0;
// }
// Que9. Number is PALINDROME or Not-
// #include<stdio.h>
// int main(){
//     int num ,rev=0, rem , n;
//     printf("enter a number ");
//     scanf("%d",&num);
//     n =num;
//     while(num!=0){
//         rem=num%10;
//         rev=rev*10+rem;
//         num=num/10;
        
//     }
//     if(n==rev)
//     printf("%d is palindrome number ",n);
//     else
//     printf("%d is not a palindrome number", n);
//     return 0;
// }
  
//  Que10. FIND THE ROOTS OF QUARDRATIC EQUATIONS-  

// #include<stdio.h>
// #include<math.h>

// int main(){
//     float a, b, c, r1, r2, d;
//     printf("Enter the value of a b c: ");
//     scanf("%f %f %f", &a, &b, &c);

//     d = b * b - 4 * a * c;

//     if(d > 0){
//         r1 = (-b + sqrt(d)) / (2 * a);
//         r2 = (-b - sqrt(d)) / (2 * a);
//         printf("The real roots are: %f and %f\n", r1, r2);
//     }
//     else if(d == 0){
//         r1 = -b / (2 * a);
//         r2 = -b / (2 * a);
//         printf("The roots are equal: %f and %f\n", r1, r2);
//     }
//     else{
//         printf("The roots are imaginary\n");
//     }

//     return 0;
// }

// Que11. NUMBER EVEN OR ODD-
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number ");
//     scanf("%d", &n);
//     if(n%2==0)
//     printf(" even number ");
//     else
//     printf(" odd number");
//     return 0;
    
// }
 
//  Que12. Number is ARMSTRONG or Not-
//     #include<stdio.h>
//     int main(){
//         int n , arm=0 ,r,c;
//         printf("enter any number");
//         scanf("%d",&n);
//         c=n;
//         while(n>0){
//             r=n%10;
//             arm=(r*r*r)+arm;
//             n=n/10;
            
//         }
//         if(c==arm)
//         printf(" Armstrong number");
//         else
//         ("not armstrong number");
//         return 0;
        
//     }
    
// Que13. Greatest of two numbers-    
//     #include<stdio.h>
//     int main(){
//         int a, b;
//         printf("enter  the first number");
//         scanf("%d",&a);
//         printf("enter the second number");
//         scanf("%d",&b);
//         if(a>b)
//         printf("a is greater than b");
//         else
//         printf(" b is greater than a");
        
// //     }
// Que14. Divisible 5 or not program
    
//     #include<stdio.h>
//     int main(){
//         int n;
//         printf("enter a number ");
//         scanf("%d",&n);
//         if(n%5==0)
//         printf("divisible 5");
//         else
//         printf ("not divisible 5");
//         return 0 ;
        
//     }
//     Que15. given input is a character digit or special character-
//     #include<stdio.h>
//     int main(){
//         char ch;
//         printf("enter a character \n");
//         scanf("%c",&ch);
//         switch(ch)
//         case 'A'...'Z':
//         printf("upper case character");
//         break;
//         case 'a'...'z':
//         printf("lower case character");
//         break;
//         case '0'...'9':
//         printf("digit character ");
//         break;
//         default:
//         printf("special character");
//         return 0;
        
//     }
    
    
    
//     Que16. Calculator Program-
//     #include<stdio.h>
//     int main(){
//     int a;
//     scanf("%d",&a);
//     char ch;
//     scanf("%c",&ch);
//     int b;
//     scanf("%d",&b);
//     switch(ch){
//         case '+':
//         printf("%d",a+b);
//         break;
//         case '-':
//         printf("%d",a-b);
//         break;
//         case '*':
//         printf("%d",a*b);
//         break;
//         case '/':
//         printf("%d",a/b);
//         break;
//         default:
//         printf("invalid operator");
//         return 0;
//     }
// }
    
// Que18. ASCII VALUE Program - A to Z (65-90) ,a to z(97-122),DIGIT-0 TO 9 (48-57)
// #include<stdio.h>
// int main(){
//     char ch;
//     int i;
//     printf("enter the character ");
//     scanf("%c",&ch);
//     for(i='a'; i<='z'; i++){
//         printf("%d\t",i);
//         return 0;
//     }
// }
// Que19. Check character vowel or Not-
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("enter alphabet :");
//     scanf("%c",&ch);
//     switch(ch){
//     case'a':printf("vowel");
//     break;
//      case'e':printf("vowel");
//     break;
//      case'i':printf("vowel");
//     break;
//      case'o':printf("vowel");
//     break;
//      case'u':printf("vowel");
//     break;
//     default:
//     printf("constant");
    
// }
// return 0;
    
// }
    
// Que20. wap to print all natural numbers-
// #include<stdio.h>
// int main(){
//     int i,n;
//      printf("Enter the value of n: ");
//       scanf("%d", &n);
//     for (i=0; i<=n; i++){
//         printf("%d\n",i);
//     }
// }
// Que21. wap to print all natural number in reverse-
// #include<stdio.h>
// int main(){
//     int i,n;
//      printf("Enter the value of n: ");
//       scanf("%d", &n);
//     for (i=n; i>=1; i--){
//         printf("%d\n",i);
//     }
// }
    
    
// Que22. wap to print all alphabet a to z-
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("alphabet from a to z are:\n");
//     for(ch='a'; ch<='z'; ch++){
//         printf("%c\n",ch);
// }
//          return 0;
        
//  }

    
// Que23.print all even number between 1to 100-
// #include <stdio.h>

// int main() {
//     int i;

//     printf("Even numbers between 1 and 100 are:\n");
//     for(i = 2; i <= 100; i += 2) {
//         printf("%d ", i);
//     }

//     return 0;
// }
// Que24. number is multiple of 7 or not -

// #include <stdio.h>

// int main() {
//     int number;
    
//     // Input number from user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Check if the number is a multiple of 7
//     do {
//         if(number % 7 == 0) {
//             printf("%d is a multiple of 7.\n", number);
//         } else {
//             printf("%d is not a multiple of 7.\n", number);
//         }
//         // Input next number from user
//         printf("Enter another number (or enter 0 to exit): ");
//         scanf("%d", &number);
//     } while(number != 0); // Repeat until the user enters 0
    
//     return 0;
// }

// Que25. print the pattern 
// ****
// ****
// ****

// #include<stdio.h>
// int main(){
//     int n,i,j,m;
//     printf("enter no. of rows");
//     scanf("%d",&n);
//     printf("enter no. of columns");
//     scanf("%d",&m);
//     for(int i=1; i<=n; i++){
//         for(j=1; j<=m; j++){
//             printf(" * ");
            
//   }
//         printf("\n");
//     }
//     return 0;
// }

// Que26. print the pattern -
//    *
//   ***
//  *****
// *******

// #include<stdio.h>
// int main(){
//     int i,j, space,rows=4;
//     for(i=1;i<=rows; i++){
//         for(space=i; space<rows;space++){
//             printf(" ");
//         }
//         for(j=1;j<=(2*i-1); j++){
//             printf("*");
            
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Que27- find the last and first DIGIT-0
// #include<stdio.h>
// int main(){
//     int num, last;
//     printf("enter  anumber :");
//     scanf("%d",&num);
//     last =num%10;
//     printf("the last digit of number %d\n",last);
//     while(num>=10){
//         num =num/10;
        
        
//     }
//     printf("the first digit of number %d\n",num);
// }



// //print the table any integer
// #include <stdio.h>

// int main() {
//     int n;
    
//     // Input the integer
//     printf("Enter any integer: ");
//     scanf("%d", &n);
//     for(int i = 1; i <= 10; i++) {
//         printf("%d * %d = %d\n", n, i, n * i);
//     }
    
//     return 0;
// }


  

















