#include <iostream>
int main(){int age; printf("%d", age); setlocale(LC_ALL, ""); int i; float f; double d; char c; printf("Size of INT %i\n", sizeof(int)); printf("Size of FLOAT %d\n", sizeof(float)); printf("Size of DOUBLE %d\n", sizeof(double)); printf("Size of SHORT %d\n", sizeof(short)); printf("Size of LONG %d\n", sizeof(long)); printf("Size of CHAR %d\n", sizeof(char)); int currentYear = 2019, currentMonth = 9, currentDay = 30; int birthYear, birthMonth, birthDay; printf("Please enter your birthday date: \n"); printf("Year: "); scanf("%d", &birthYear); printf("Month: "); scanf("%d", &birthMonth); printf("Day: "); scanf("%d", &birthDay); int age = currentYear-birthYear; if(currentDay == birthDay && currentMonth == birthMonth){ printf("Boldog születésnapot!!:("); } return 0;}
