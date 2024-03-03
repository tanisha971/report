/*
	------ Module 1 Assignment Solution ------

	Program:	Report Card Generator App
	Author: 	Tanisha Ali
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main() {

	char name[30], section, grade;
	int standard, mathScore, engScore, hindScore, sciScore, sscScore, totalMarksScored;

	puts("◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙");
	puts("◙ ⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕  REPORT CARD GENERATOR APP  ⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕ ◙");
	puts("◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙");

	puts("Enter the name of the student: ");
	scanf("%[^\n]%*c", name);

	puts("\nEnter standard: ");
	scanf("%d", &standard);

	while ((getchar()) != '\n');

	puts("\nEnter section:");
	scanf("%c", &section);

	puts("\nEnter marks secured in Mathematics: ");
    scanf("%d", &mathScore);

    puts("\nEnter marks secured in English: ");
    scanf("%d", &engScore);

    puts("\nEnter marks secured in Hindi: ");
    scanf("%d", &hindScore);

    puts("\nEnter marks secured in Science: ");
    scanf("%d", &sciScore);

    puts("\nEnter marks secured in Social Science: ");
    scanf("%d", &sscScore);

    totalMarksScored = mathScore + engScore + hindScore + sciScore + sscScore;

    if (totalMarksScored > 500 || totalMarksScored < 0) {
    	puts("Total score cannot not be greater than 500. Please try again!");
    	exit(0);
    }

    if (totalMarksScored >= 450 && totalMarksScored <= 500) {
        grade = 'A';
    } else if (totalMarksScored >= 400 && totalMarksScored < 450) {
        grade = 'B';
    } else if (totalMarksScored >= 350 && totalMarksScored < 400) {
        grade = 'C';
    } else if (totalMarksScored >= 300 && totalMarksScored < 350) {
        grade = 'D';
    } else if (totalMarksScored >= 200 && totalMarksScored < 300) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    puts("\nGenerating Report Card! Please wait.... ");
    usleep(2000 * 1000);

    puts("------------------------------------------\n");
    puts("\tJawahar Navodaya Vidyalaya \n");
    puts("\t    Annual Report Card \n");

    printf("\tName: %s \n", name);
    printf("\tStandard: %d \n", standard);
    printf("\tSection: %c \n", section);

    puts("\n\tMarks Secured out of 100\n");

    printf("\tMathematics: %d \n", mathScore);
    printf("\tEnglish: %d \n", engScore);
    printf("\tHindi: %d \n", hindScore);
    printf("\tScience: %d \n", sciScore);
    printf("\tSocial Science: %d \n", sscScore);

    printf("\n\tTotal marks secured: %d \n", totalMarksScored);

    printf("\tGrade: %c \n", grade);
    puts("------------------------------------------\n");

	return 0;
}
