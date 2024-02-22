#include <stdio.h>

int main() {
    int score = 0;
    char answer;

    printf("Welcome to the Ujjwal Quiz Game!\n\n");

    printf("Question 1: What is the capital of France?\n");
    printf("a) London\n");
    printf("b) Paris\n");
    printf("c) Rome\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'b' || answer == 'B') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect!\n");
    }
    printf("\nQuestion 2: What is the powerhouse of the cell?\n");
    printf("a) Nucleus\n");
    printf("b) Mitochondria\n");
    printf("c) Chloroplast\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'b' || answer == 'B') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect!\n");
    }
    printf("\nQuestion 3: What is the largest planet in our solar system?\n");
    printf("a) Earth\n");
    printf("b) Jupiter\n");
    printf("c) Saturn\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'b' || answer == 'B') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect!\n");
    }  
    printf("\nQuestion 4: What is the longest river in the world?\n");
    printf("a) Nile\n");
    printf("b) Amozon\n");
    printf("c) Mississippi\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'a' || answer == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect!\n");
    }
    printf("\nQuestion 5: Which planet is known as the 'Red Planet'\n");
    printf("a) Mars\n");
    printf("b) Jupiter\n");
    printf("c) Venus\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'a' || answer == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect!\n");
    }
   
    printf("\nYour final score is: %d out of 5\n", score);

    return 0;
}