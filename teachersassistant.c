#include <stdio.h>
#include <math.h>
#include <float.h>

int NUMBER_OF_DEGREES = 7;
float SCALE = 6;


float calculate_average(float d1, float d2, float d3, float d4, float d5, float d6, float d7)
{
	float average;

	average = (d1 + d2 + d3 + d4 + d5 + d6 + d7)/NUMBER_OF_DEGREES;

	return average;
}

float give_percentages(float average)
{
	float percent;

	percent = (average * 100)/ SCALE; // to see the percentages

	return percent;
}

const char* give_note(float percent) 
{
	if (percent > 90.1)
	{
		return "A";
	}
	else if ((percent < 90) && (percent > 80.1))
	{
		return "B";
	}
	else if ((percent < 80) && (percent > 70.1))
	{
		return "C";
	}
	else if ((percent < 70) && (percent > 60.1))
	{
		return "D";
	}
	else if ((percent < 60) && (percent > 50.1))
	{
		return "E";
	}
	else
	{
		return "F";
	}
}



float is_shcolarship(float note1, float note2, float note3)
{
	float sum;
	sum = (note1 + note2 + note3)/3;
	if (sum > 95)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

float take_grade()
{
	int grade;

	scanf_s("%d", &grade);

	return grade;
}

int main()
{
	
	float grade1, grade2, grade3, grade4,  grade5, grade6, grade7, average;
	int schoolarship;
	char *note;


	printf("Hello, I'm your assistant. Give me 7 grades in percentages:\n");
	grade1 = take_grade();
	grade2 = take_grade();
	grade3 = take_grade();
	grade4 = take_grade();
	grade5 = take_grade();
	grade6 = take_grade();
	grade7 = take_grade();

	average = calculate_average(grade1, grade2, grade3, grade4, grade5, grade6, grade7);
	printf("your average is %.2f\n", average);

	note = give_note(average);

	printf("your note is %s\n", note);

	int tab[8] = {grade1,grade2,grade3,grade4,grade5,grade6,grade7};
	int bufor;


	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (tab[j] > tab[j + 1])
			{
				bufor = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = bufor;
			}
		}

	}

	printf("The highest notes are: %d %d %d\n", tab[6], tab[5], tab[4]);

	schoolarship = is_shcolarship(tab[6], tab[5], tab[4]);

	if (schoolarship == 1)
	{
		printf("You will get a schoolarship!\n");
	}
	else
	{
		printf("You won't get a schoolarschip.\n");
	}
	//int i = 0;
	//printf("Wyswietlam\n");
	//while (i < 7)
	//{
	//	printf("%d\n", tab[i]);
	//	i++;
	//}
	
	return 0;
}