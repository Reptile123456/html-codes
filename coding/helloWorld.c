 
#include <stdio.h>
#include <math.h>

// int main()
// {
//     int a, b,;
//     printf ("enter a : ");
//     scanf("%d",&a);

//     printf("enter b : ");
//     scanf("%d", &b);

//     int sum = a + b;
//     printf("sum is : %d", sum);
//     return 0;
// }

// int main ()
// {
//     int a, b;
//     printf("multiplying 2 numbers \n");
//     printf("enter first number : ");
//     scanf("%d", &a);
//     printf("enter second number : ");
//     scanf("%d", &b);
//     int mul = a * b;
//     printf("multiplication of a and b is %d", mul);
//     return 0;
// }

// int main ()
// {
//     float a, b;
//     printf("dividind 2 number \n");
//     printf("enter first number  : ");
//     scanf("%f", &a);
//     printf("enter second number : ");
//     scanf("%f"  ,&b);
//     float div = a / b ;
//     printf("divide of a and b is %f", div);
//     return 0 ;
// }

// int main()
// {
//     int a, b, c;
//     printf("enter a : ");

//     scanf("%d", &a);

//     printf("enter b : ");
//     scanf("%d", &b);

//     printf("enter c : ");
//     scanf("%d", &c);

//     int sum = a + b;
//     int mul = sum * c;

//     printf("result of operation is : %d", mul);
//     return 0;
// }

//   int main()
//   {
//     int a, b ;
//     printf( "enter base :  ");
//     scanf ( "%d",  &a) ;

//     printf(" enter perpendicular : ");
//     scanf ("%d", &b);

//     int multiply = a * b;
//     int div =  multiply / 2;

//     printf (" area of triangle is : %d", div);
//     return 0;
//   }

// int main ()
// {
//   int b, p;
//   printf ("enter base : ");
//   scanf ("%d", &b);

//   printf("enter perpendicular: ");
//   scanf ("%d",&p);

//   int hs = p*p + b*b ;

//   printf ("hypotenuse square is : %d ", hs);
//   return 0;
// }

// int main()
// {
// int l,b;
// printf ( "enter length :" );
// scanf ("%d", &l);

// printf (" enter breath :");
// scanf ( "%d" , &b);

// int p = 2*(l+b) ;

// printf (" area of preimeter is : %d" , p );
// return 0;

// }

//  int main ()
//  {
//  int s;
//  printf ( " enter side :");
//  scanf ("%d", &s);

//  int p = 4 * s;

//  printf ( "area of perimeter is :%d", p );
//  return 0;
//  }

//  int main ()
//  {
//
// float side;
// printf (" enter side :");
// scanf ("%f" , &side);
//
//
//
// printf (" area of is :%f" , side * side);
// return 0;
//  }

// int main()
//
//  {
// int a = 5 * 3 - 2 * 3;
// printf ("%d\n",a);
//  return 0 ;
//
//  }
//
//  int main ()
// {
//  int a = (int) 6.111111;
//  printf ("%d\n",a);
// return 0;
//  }

// int main () {
//
// printf ("%d  \n", 3 >3 && 5 > 2 );
//
// return 0;
// }

// int main () {
//  printf ("%d \n", 3>4 || 1> 2);
//
//  return 0;
// }

// int main () {
//
// printf ("%d \n",!( (5>4) && (3 > 4 )));
//
// return 0;
// }

// int main () {
//
// int a = 1;
// int b = 4;
// a -= b; //a= a- b
// printf ("%d \n",a);
//
// return 0;
// }

// int main () {
//
// int x ;
// printf (" enter a number :");
// scanf ("%d",&x);
// printf ("%d", x  %  3== 0);
// return 0;
//
// }

// int main () {

//  int x ;
//  printf ("enter number :");
//  scanf ("%d", &x);
//  printf ("%d \n", x>9 && x<100);

// return 0;
// }

// int main () {
//  int isMonday = 0;
//  int isRaining = 1;
//  printf ("%d\n", isMonday || isRaining);
//  return 0;
// }

// int main () {
//
// int age = 18;
// printf ("enter age :");
// scanf ("%d", & age );
//
// if(age> 18 ) {
// printf ("adult \n");
// printf (" they can vote \n");
// printf ("they can drive \n");
// }
// else {
// printf (" not adukt\n");
// printf ("they can not vote \n");
// printf ( "they can not drive \n");
//
// }
//
// printf ("thank you");
//
// return 0;
//
// }

// int main () {

// int mark;
// printf ("enter mark : ");
// scanf  ("%d", &mark );

// if ( mark > 20){

// printf ("A+\n");
// printf ("excellent \n");
// }

// else  {

// printf ("A\n");
// printf ("well done \n ");
// printf ("do more hard work \n");
// }

//  return 0;

//  }

//  int main () {

//  int family  = 5;
//  printf  (" enter family :") ;
// scanf ("%d", &family );

//  if ( family  > 5) {

// printf (" alot 1 kitchen \n");
// printf (" alot 2 washroom\n");
// printf ("  alot 2 balcony\n");

// printf (" alot 2 room \n");
//  }

// else  {

//  printf (" alot 1 kitchen \n");
// printf (" alot 1 washroom \n");
//  printf (" alot 1 balcony\n");
// printf("alot 1 room \n");
//   }
//   printf (" welcome to TOWNHOLL \n");

//   return 0;
//  }

// int main() {
// int a, b, c;
// printf("average of three nos.\n");
// printf("enter first no. : ");
// scanf("%d", &a);
// printf("enter second no. : ");
// scanf("%d", &b);
// printf("enter third no. : ");
// scanf("%d", &c);
// int ave_rage = (a + b + c) / 3;
// printf("average of three nos. is : %d", ave_rage);
// return 0;
// }
//
// int main () {
//
// int age;
// printf (" enter age :");
// scanf ("%D", &age);
//
// if ( age > 18){
//  printf ("adult\n");
// }
//
// else if (age >13 && age <18){
// printf (" teenager \n ");
// }
// else {
// printf ("child");
// }
//
// return 0;
// }

// int main () {
//
// int age;
// printf (" enter age :");
// scanf ("%D", &age);
//
// age >= 18 ? printf ("adult \n") : printf ("not adult \n");
//
// return 0;
//
// }

// int main () {
//
// int day ; // 1-mon ; 2- tue ; 3- wed
// printf("enter day (1-7) : ");
// scanf ("%d", &day);
//
// switch (day) {
// case 1 : printf("monday\n");
// break;
// case 2 : printf("tuesday\n");
// break;
// case 3 : printf("wednesday\n");
//  break;
// case 4 : printf("thuersday\n");
// break;
// case 5 : printf("friday\n");
//  break;
// case 6 : printf("saturday\n");
// break;
// case 7 : printf ( "sunday \n");
//  break;
// default : printf (" not a valid day! \n");
// return (0);
// }

// int main () {
//     int marks;
//     printf("enter number (0-100) :");
//     scanf ("%d",&marks);

//     marks <= 30 ? printf ("fail \n") : printf ("pass \n");

//     return 0;
// }

// int main () {
//     int marks;
//     printf("enter number (0-100) :");
//     scanf ("%d",&marks);

//   if (marks< 30) {
//     printf ("C \n ");
//   } 

//   else if (marks >= 30 && marks < 70) {
//     printf ("B \n");
//   }

//   else if (marks >= 70 && marks , 90){
//     printf ("A\n");
//   }

//   else {
//     printf ("A= \n");
//   }
  
//   return 0;
// }


// int main (){

//     char ch;
//     printf (" enter character :");
//     scanf ("%c " , &ch);

//     if ( ch >= 'A' && ch <= 'Z'){
//         printf ("upper case \n");
//     }
//     else if ( ch >= 'a' && ch <= 'z'){
//         printf ("lower case \n ");
//     }
//     else {
//         printf (" not english character \n  ");
//     }

//     return 0;

// }

// int main() {

//     for ( int i = 1; i <= 10 ;i = i+1 ){
//         printf ("%d \n ", i);
//     }

//     return 0;
// }

// int main () {
//     int n ;
//     printf (" enter number : ");
//     scanf (" %d " , &n ) ;

//     int i= 0;
//     while (i <= n ) {
//         printf ("%d\n", i);
//         i++;
//     }

//     return 0;
// }

// int main () {
//     int n;
//     printf ("enter number :");
//     scanf ("%d", &n);

//     int sum = 0;
//     for (int i=1; i<=n; i++) {
//         sum = sum + i;  //sum += i
//     }

//     printf (" sum is %d \n",sum);

//     return 0;
// }

// int main() {
//     int n, x;
//     printf("enter a number : ");
//     scanf("%d", &n);
//     x = n * (n + 1) / 2;
//     printf("sum of first %d natural numbers is %d", n, x);
//     return 0;
// }
    
// int main () {
//     int n;
//     printf("enter number:");
//     scanf("%d",&n);
//     for (int i=1; i<=10; i++) {
//         printf("%d\n",n*i);
//     }
//     return 0;
// }
    
    // int main() {
    //     int n;
    //     printf("enter number : ");
    //     scanf("%d", &n);

    //     int fact = 1;
    //     for(int i=1; i<=n ; i++){
    //         fact = fact * i ;
    //     }

    //     printf("final factorial is %d", fact);

    //     return 0;
        
    //     }

    
    // void swap (inta, intb);
    // void_swap(int*a, int*b);

    // int main(){
    //     int x = 3 , int = 5;
    //     _swap(&x , &y);
    //     printf ("x =%d & y = %d\n", x, y);

    //     return 0;
    // }
    //  //call byb reference 
    //  void 
    //   _swap (int *a , int *b) {
    //     int t =*a;
    //     *a = *b;
    //     *b  = t;
    //  }

    //  //call by value
    //  void swap (inta ,intb) {
    //     int t = a;
    //     a = b ;
    //     b = t ;
    //     printf ("a = %d & b = &d\n", a, b);
    //  }
    // output comes wrong
    
    
    // int main() {
    //     float price [3];
    //     printf ("enter 3 prices :");
    //     scanf ("%f", &price[0]);
    //     scanf ("%f", &price[1]);
    //     scanf ("%f", &price[2]);

    //     printf (" total price 1 :%f\n", price [0] +(0.18 * price[0]));
    //     printf (" total price 1 :%f\n", price [1] +(0.18 * price[1]));
    //     printf (" total price 1 :%f\n", price [2] +(0.18 * price[2]));

    //     return 0;
    // }

    // int main() {
    //     // 2  * 3
    //     int marks[2] [3] ; //_ _ _ | _ _ _
    //     marks [0] [0] = 90 ;
    //     marks [0] [1] = 89 ;
    //     marks [0] [2] = 78 ;

    //     marks [1] [0] = 90 ;
    //     marks [1] [1] = 89 ;
    //     marks [1] [2] = 79 ;

    //     printf("%d", marks [0][0]);

    //     return 0;
    //  }
    

    // area of square
    // int main () {

    //     int a ;
    //     printf (" enter a :");
    //     scanf ("%d" ,&a);
    //     int mul = a * a;
    //     printf (" area of square is : %d", mul);
    //     return 0;
        
    //     }

 //  area of priemeter  p=2(l+b)

//  int main () {

//  int l,b;
//  printf ("enter l ;");
//  scanf ("%d",&l);

// printf ("enter b:");
// scanf ("%d",&b);

// int p = 2*(l+b);
// printf ("  area of priemater is : %d", p);

// return 0;
//  }


// area of circle =  3.14 *r*r
// int main () {
//     float radius , area ;
//     printf (" enter the radius of a circle \n ");
//     scanf ("%f", &radius );

//     area = 3.14* radius *radius / ;
//     printf (" area of circle = %f\n", area );
//     return 0;

// }

// area of trapizium = a+b/2*h
// int main () {

//     int a,b,h;
//     printf ("enter a:");
//     scanf ("%d", &a);

//     printf (" enter b:");
//     scanf ("%d", &b);

//     printf ("enter h:");
//     scanf ("%d",&h);

//     int t = 0.5*(a+b)*h;
//     printf (" area of trapizium is : %d", t);
//     return 0;

// }

// calculate simple interest A= p*r*t/100
// int main () {
//     int p,r,t ;
//     printf("enter p:");
//     scanf ("%d",&p);

//     printf ("enter r:");
//     scanf ("%d",&r);

//     printf ("enter t:");
//     scanf ("%d",&t);

//     int si = p*t*r/100;
//     printf (" final amount : %d ", si);
//     return 0;

//     }
// area of square 

// int main() {
//     int side; 
//     printf ("enter side");
//     scanf ("%d" ,&side);

//     printf ("area of : %d   ", side *side);
//     return 0;
// }

// area of circle

//average of three number

// }

// int main () {

//     int n;
//     printf (" enter number:");
//     scanf ("%d",&n) ;

//     for (int i= 1; i<= 10 ; i++){
//         printf ("%d\n ", n*i);
//     }
//     return 0;
// }

// int main (){

    
//     float m1  =  100;
//     float m2   =  58;
//     float m3  =  45;
//     float m4  =  78;
//     float m5  =  45;

//     float p = (m1+m2 +m3+m4 +m5)/5;
//     printf ("Percentage of 5 subject is : %f",p);
//     return 0;
// }

// int main (){
//     float p,r,t,si;
//     p = 152;
//     r = 10;
//     t = 2;
//     si = (p*r*t)/100;
//     printf("%f",si);
//     return 0;
// } 
 
//  int main () {
//     float principle ,  rate , si , time ;
//     printf (" enter principle:");;
//     scanf  (" %f",&principle);
//      printf (" enter  rate:");;
//     scanf  (" %f",& rate);
//      printf (" enter time:");;
//     scanf  (" %f",&time);
//     si = (principle *rate* time)/100;
//     printf ("simple interest: %f",si);
//     return 0;
//  } 


// int main () {

//     int n,i ,sum = 0;
//     printf("enter number:");
//     scanf ("%d",&n);

    
//     for (i=1; i <= n; i++){
//         sum = sum +i;
//     }

//     printf (" sum =%d\n",sum);

//     return 0;
// }

// int main (){
//     int n;
//     printf ("enter number :");
//     scanf ("%d",&n);
//     int i=0;
//     while (i<=n){
//         printf ("%d\n",i);
//         i++;
//     }
//     return 0;
// }


// int main (){

//  float  m1, m2, m3, m4, m5;
//  printf (" enter mark m1,m2,m3,m4,m5 :\n");
//  scanf ("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5 );

//  float  m;
//   // maximum mark
//   printf ("enter m:");
//   scanf ("%f", &m);


//  // calcula percentage

// float  percentage =(( m1+m2+m3+m4+m5)/m)*100;
//  printf ("Percentage of 5 subject is : %f",percentage);
 
// return 0;
// }


// int main()
// {
//     double num, root;

//     // Input a number from user
//     printf("Enter any number to find square root: ");
//     scanf("%lf", &num);

//     // Calculate square root of num 
//     root = sqrt(num);

//     // Print the resultant value 

//     printf("Square root of %f = %f",num ,root);

//     return 0;
// }



// int main()
// {
//     float no, cube_Root;
//    printf("enter any number\n"); // taking value from user..
//    scanf("%f",&no); 
//     cube_Root =  cbrt(no); // function to find cube root..
//     printf("Cube root of %f =  %f", no, cube_Root);
//     return 0;
//}   


// take positive integer input and tell if it is even or odd
//any no which is divisible by 2 is callled even 
// int main (){

//     int x;
//     printf("enter a number :");
//     scanf("%d",&x);
//     if (x%2==0){  //even 
//         printf("even number");
//     }
//     else{
//         printf ("odd number"); 
//     }

//     return 0;
// }

/* take postive intiger input and tell if it is divisible 
 by 5 or not */
//  int main(){
//  int x;
//     printf("enter a number :");
//     scanf("%d",&x);
//     if (x%5==0){  
//         printf("divisible by 5");
//     }
//     else{
//         printf (" not divisible by 5"); 
//     }

//     return 0;
// }

/* Any year is input through the keyboard . write a
 program to deteermini wheather the year is a leap
 year or not (considering leap year  occurs affter every 
 4 years ) */

// int main()  
// {  
//     int year;  
  
//     printf("Enter a year\n");  
//     scanf("%d", &year);  
  
//     if( (year%100 == 0 && year%400 == 0) ||  
//         (year%100 != 0 && year%4   == 0)   )  
//     {  
//         printf("%d is a leap year\n", year);  
//     }  
//     else  
//     {  
//         printf("%d is not a leap year\n", year);  
//     }  
  
//     return 0;  
// }  

/*  take  integeer input and print the absoulte value of 
that integer */

//    int main (){
//     int n;
//     printf ("enter a number:");
//     scanf ("%d",&n);
//     if(n<0){// if n is a negative 
//       n = (-1)* n;
//     }
//     printf ("the absolute value is :%d",n);


//     return 0;
//  }

/*  if cost price and selling price of an item is
input through the keyboard , write a program to determine
eheather the seller has made prifit or incurred loss . also
determine how much profit he made or loss he incurred
*/


// int main (){

//     int cp; // cost price
//     printf("enter a  cost price:");
//     scanf ("%d",&cp);

//     int sp; // selling  price
//     printf("enter a selling price:");
//     scanf ("%d",&sp);

   

//     if (sp>cp)  {
//         printf("Profit ");
//     }
//     if(cp>sp){
//         printf("Loss");

//     }
//     if (cp==sp){
//         printf("cover a mergain");
//     }
   
   
//     return 0;
    
//     }

 /* Take postive integer input and tell if it 
 is a three digit number or not*/

// int main (){
//     int n;
//     printf("enter a number :");
//     scanf ("%d",&n);
//     if (n>99&&n<1000){
//         printf ("it is a three digit number");
//     }
//     else {
//         printf("it is not a three digit number");
//     }
//     return 0;
// }


/* take a postive integer input and tell if 
it is divisibke by 5 and 3*/

// int main(){
//     int n;
//     printf ("enter a number :");
//     scanf("%d",&n);
//     if ( n % 5==0&& n % 3==0 ){
//         printf(" value are satified both digit 5 and 3");
//     }
//     if (n%5==0){
//         printf("value are only satisfied 5 ");
//     }
//     if (n%3==0){
//         printf("value are onle satisfied by 3");
//     }
//     else{
//         printf("value are not satisfied ");
//     } 
//     return 0;

// }

// int main () {
//      int a;
//      printf (" enter the value of a:");
//      scanf ("%d",&a);
//      int b;
//      printf (" enter the value of b:");
//      scanf ("%d",&b);
//      int c;
//      printf (" enter the value of c:");
//      scanf ("%d",&c);
//     if (a>b && a>c ){
//         printf(" value of a is greater ");
//     }
//     if (b>a && b>c ){
//         printf(" value of b is greater ");
//     }
//     if (c>b && c>a ){
//         printf(" value of a is greater ");
//     }
//     if (a==b && a==c ){
//         printf("  both are equal  ");
//     }
//      return 0;
// }

/* take 3 number input and tell if they can be 
the sides of a tringle*/

// int main (){
//     int a;
//     printf ("enter a side a:");
//     scanf ("%d",&a);
//     int b;
//     printf ("enter a side b:");
//     scanf ("%d",&b);
//     int c;
//     printf ("enter a side c:");
//     scanf ("%d",&c);
//     if ((a+b)>c && (b+c)>a && (a+c)>b){
//         printf (" valid triangle ");
//     }
//     else {
//         printf(" invalid triangle");
//     }
    
//     return 0;
//     }

    /* if . ages of ram ,shyam and ajay are input through 
    the keyboard, write a program to determine the youngest
    of the three.*/

    // int main (){
    //     int ram ;
    //     printf(" enter a age of ram :");
    //     scanf("%d",&ram);
    //     int shyam  ;
    //     printf(" enter a age of shyam  :");
    //     scanf("%d",&shyam);
    //     int ajay ;
    //     printf(" enter a age of ajay :");
    //     scanf("%d",&ajay);
    //      if(ram<shyam && ram<ajay){
    //         printf("ram is younger brother");
    //      }
    //      if(shyam<ram&& shyam<ajay){
    //         printf("shyam is younger brother");
    //      }
    //      if(ajay<shyam && ajay<ram){
    //         printf("ajay is younger brother");
    //         }
    //         return 0;
    // }

    
// nested if - else


// else if

  /* given three points (x1,y1),(x2,y2)and (x3.y3),
  write a program to check if all the three points fall
  on one straight line.*/


//   int main()
//   {
//     double x1;
//     printf("enter a number  x1:");
//     scanf("%d",&x1);
//     double y1;
//     printf("enter a number y1 :");
//     scanf("%d",&y1);
//     double x2;
//     printf("enter a number x2 :");
//     scanf("%d",&x2);
//     double y2;
//     printf("enter a number y2:");
//     scanf("%d",&y2);
//     double x3;
//     printf("enter a number x3 :");
//     scanf("%d",&x3);
//     double y3;
//     printf("enter a numbery3 :");
//     scanf("%d",&y3);

//     double m1=(y2-y1)/(x2-x1);
    
//     double m2 =(y3-y2)/(x3-x2);
//     if (m1=m2){
//         printf("all the three points fall on a straight line");
//     }
//     else {
//         printf("all the the tree point not fall on a straight line ");
//         }
//         return 0;
// }

/* given a point (x,y), write a program to find out if it lies on the 
X- axis , Y- axis or at the origin ,viz.(0,0). */


// int main (){
//     int x;
//     printf (" enter the x cordinates:");
//     scanf ("%d",&x);
//     int y;
//     printf (" enter the y cordinates:");
//     scanf ("%d",&y);
//         if(x==0 && y==0){
//             printf("the point is origin");
//         }
//         else if (x==0){
//             printf("lies on y- axis");
//         }
//         else if (y==0) {
//             printf(" lies on x- axis");
//         }
//         else {
//             printf(" the point does not lie on x or y axis");
//         }
//         return 0;
//     }

// ternary operator

// int main (){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n); 
//     n%2==0 ? printf("even number") : printf (" odd number");
//     return 0;
// }

// loop


/* print numbers from 1 to 100 in different line*/

// int main() {

//   for (int i=1;i<=100;i++){
//     printf("%d\n ", i);
//   }
//   return 0;
// }  



/*print all the even numbers  1 to 1oo  */

// int main (){
//   for (int i=1;i<=100;i++){
//     if (i%2==0){
//        printf("%d\n",i);
//     }
//    }
//    return 0;
// }

/* print all the odd number from 1 to 100*/
// int main (){
//   for ( int i=1 ; i<=100;i++){
//     if( i%2!=00){
//       printf("%d\n",i);
//     }
//   }
//   return 0;
// }

/* display this ap - 1,3,5,7,9.. upto'n' terms .*/

// int main (){
//   int n;
//   printf("enter a number:");
//   scanf("%d",&n);
//   for (int i=1; i<=2*n;i=i+2){
//     printf ("%d\n" ,i);
//   }
//   return 0;
// }

/* display this ap 4,7,10,13,16... upto 'n' terms.*/

// int main (){
//   int n;
//   printf ("enter  a number:");
//   scanf("%d",&n);
//   for (int i=1; i<=3*n+1;i=i+3){
//     printf("%d\n",i);
//   }
//   return 0;
// }

/* diaplay this gp -1,2,4,8,16,32,..upto 'n' terms*/

// int main () {
//   int n;
//   printf("enter a number:");
//   scanf("%d",&n);
//   int a=1;
//   for(int i=1;i<=n;i++){
//   printf("%d\n",a);
//   a=a*2;
//   }
//   return 0;
// }

// int main () {
//   int n;
//   printf("enter a number:");
//   scanf("%d",&n);
//   int a=3;
//   for(int i=1;i<=n;i++){
//   printf("%d\n",a);
//   a=a*4;
//   }
//   return 0;
// }

/* display this ap 100,97,94,..upto all terms which are postive.
*/

// int main (){
//   int a =100;
//   for (int i=1; a>0;i++){
//   printf("%d ", a);
//   a = a-3;
//   }
//   return 0;
// }

/* second method using anterm */
// int main(){
//   int n;
//   printf("enter a number :");
//   scanf("%d",&n);
//   int a=100;
//   for(int i=1;i<=n;i++){
//     printf("%d ",a);
//     a = a-3;
//   }
//   return 0;
// }

/* display this gp- 100,50,25,.. upto 'n' terms*/

// int main (){
//   int n;
//   printf("enter a number:");
//   scanf("%d",&n);
//   float a=100;
//   for (int i=1;i<n;i++){
//     printf("%f\n ",a);
//     a= a/2*1;
//   }
//   return 0;
// }

// second method

// int main(){
//   float a=100;
//   for(float i=1; a>0; i++){
//     printf("%f ",a);
//     a=(a*1)/2;
//   }
//   return ;
// }

// break

/* write a program if a number is prime or not.*/


// int main (){
//   int n;
//   printf("enter a number:");
//   scanf("%d",&n);
//   int a = 0;
//   for (int i=2;i<=n-1;i++){
//     if (n%i==0){
//       a =1;
//       break;
//     }
//   }
//   if(n==1)printf("1 is niether prime nor composite");
//   else if (a==0)printf("the given number is prime\n");
//   else printf("the given number is not a prime number\n");
//   return 0;
// }

// comtinue
/* write a program to print odd number from 1 to 100*/

// int main (){
//   for (int i=1; i<= 100; i++)
//   {
//     if (i% 2 !== 0)
//     {
//       printf("%d ",i);
//     }
//   }
//   return 0;
// }

 // using continue statement
// int main (){
//   for (int i =1; i<= 100 ; i++)
//   {
//     if (i % 2== 0)
//     {
//       continue;
//     }
//     printf("%d ",i);
//   }
//   return 0;
//}
/* write a program to print even number from 1 to 100*/

// using continue statement

// int main (){
//   for (int i =1; i<= 100 ; i++)
//   {
//     if (i % 2!= 0)
//     {
//       continue;
//     }
//     printf("%d ",i);
//   }
//   return 0;
// }

// int main (){
//   for (int i=1; i<= 100; i++)
//   {
//     if (i% 2 == 0)
//     {
//       printf("%d ",i);
//     }
//   }
//   return 0;
// }


// while loop

int main (){
   
}



























































































  




























    









































































    

    










    
    













    
    
    
    
