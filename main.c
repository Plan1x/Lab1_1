#include <stdio.h>
#include <stdlib.h>
#define Name "Ivan"
#define LastName"Rubtsov"
#define GroupName "PE-21"
#define Faculty "RTF"
#define University "Igor Sikorsky Kyiv Polytechnic Institute"
#define RTF "RTF IS THE BEST!"
int main()
{
 unsigned  int semestr;
 float admissionScore;
 float DreamScore;
 int grade1;
 int  grade2;
 int  grade3;
 int grade4;
 int grade5;
 double averageGrade;
 unsigned int age;// оголошенн€ зм≥нноњ
printf("%s %s Enter following data.\n", Name, LastName);//%s Ч введенн€/виведенн€ символьного р€дка (набору символ≥в)
 printf("Enter semestr:");
 scanf("%u", &semestr);
 printf("Enter your admission score: ");
 scanf("%f", &admissionScore);//%f Ч введенн€/виведенн€ чисел типу float
 printf("Enter your Dream admission score:");
 scanf("%f", &DreamScore);
 printf("Enter grade #1: ");
 scanf("%d", &grade1);//%d або %i Ч введенн€/виведенн€ ц≥лих дес€ткових чисел ≥з знаком
 printf("Enter grade #2:");
 scanf("%d", &grade2);//%d або %i Ч введенн€/виведенн€ ц≥лих дес€ткових чисел ≥з знаком
 printf("Enter grade #3:");
 scanf("%d", &grade3);//%d або %i Ч введенн€/виведенн€ ц≥лих дес€ткових чисел ≥з знаком
 printf("Enter grade #4:");
 scanf("%d", &grade4);//%d або %i Ч введенн€/виведенн€ ц≥лих дес€ткових чисел ≥з знаком
 printf("Enter grade #5:");
 scanf("%d", &grade5);//%d або %i Ч введенн€/виведенн€ ц≥лих дес€ткових чисел ≥з знаком
 printf("Enter your age: ");
 scanf("%u", &age);//%u Ч введенн€/виведенн€ беззнакових ц≥лих дес€ткових чисел,
 averageGrade = (double)(grade1 + grade2 + grade3 + grade4 + grade5) / 5; // зм≥нна, середнЇ значенн€ оц≥нки.
 system("cls");
 printf("\n==============");
  printf("\n%s", RTF);
  printf("\n**************");
 getch();
 printf("\n%s", University);
 printf("\n%s", Faculty);
 printf("\n%s", GroupName);
 printf("\n---------------------------");
 printf("\nstudent: %s %s", Name, LastName );
 printf("\nage: %u", age);
 printf("\nsemestr: %u", semestr);
 printf("\n---------------------------");
 printf("\nadmission score  %3f. ", admissionScore);
 printf("\naverage grade = %.3lf", averageGrade);//%lf Ч введенн€/виведенн€ чисел типу double.
 printf("\nDream score %3f. ", DreamScore);
 printf("\n---------------------------");
 return 0;
}
