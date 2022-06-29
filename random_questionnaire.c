#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ARRAY_SIZE 10
#define STRING_LENGTH 100

int generateRandomQuestion()
{
    srand(time(0));

    int randomIndex = rand() % 10;

    return randomIndex;
}

void displayQuestion(int n, char array[ARRAY_SIZE][STRING_LENGTH])
{
    for (int i = n; i < ARRAY_SIZE; i++)
    {
        for (int j = 0; array[i][j] != '\0'; j++)
        {
            printf("%c", array[i][j]);
        
        }
        printf("\n");
        break;
    }
}


int main()
{
    printf("\n");
    printf("  * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("* * * * * * * * * * TEN RANDOM QUESTIONS * * * * * * * * * *\n");
    printf("  * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\n");
    char questions[ARRAY_SIZE][STRING_LENGTH] = {"What's your favourite programming language?", "What's your favourite SHELL command?", "If a debugging duck could talk, what would it say?", "What book are you currently reading?", "Which programming language are you learning next?", "What's your favourite ice-cream?", "Which tech invention are you most fascinated by?", "Where do you see yourself in 5 years?", "What's the name of your best friend?", "What makes you happy?"};
    char answer[STRING_LENGTH];

    int random = generateRandomQuestion();

    int i = 1;
    while (i <= 10)
    {
        printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
        printf("\n");
        printf("#%d ", i);//question number
        
        displayQuestion(random, questions);

        printf("\n");
        printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
        printf("\n");


        printf("YOUR ANSWER: ");
        gets(answer);
        printf("\n");
        i++;
        //to be fixed: random needs to be 10x random, not just 1 random 10x 

    }
    printf("* * * * Thank you for your answers!  Have a nice day! * * * *\n");
    
    printf("\n");
    return 0;
}