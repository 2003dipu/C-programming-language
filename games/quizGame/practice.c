#include <stdio.h>
#include <ctype.h>

int main()
{
  printf("\n\nProject Name: Quiz Game in C\n");

  char questions[][100] = {"1. What year did the C language debut?: ",
                           "2. Who is credited with creating C?: ",
                           "3. What is the predecessor of C?: ",
                           "4. Which programming language is the fastest?: ",
                           "5. What is the successor of C?: ",
                           "6. Which is the correct statement about C?: "};

  char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
                         "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
                         "A. Objective C", "B. B", "C. C++", "D. C#",
                         "A. Java", "B. Python", "C. C++", "D. C",
                         "A. Objective C", "B. D", "C. C++", "D. C#",
                         "A. Best for embedded system", "B. Best for graphic design", "C. Best for 3D Engines", "D. Best for Machine Learning"};

  char answers[6] = {'B', 'A', 'B', 'D', 'C', 'A'};
  int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

  char guess;
  int score = 0;

  printf("QUIZ GAME\n\n");

  for (int i = 0; i < numberOfQuestions; i++)
  {
    // Print the question
    printf("--------------------------------------------------------------\n");
    printf("%s\n", questions[i]);
    printf("--------------------------------------------------------------\n");

    // Print the options
    for (int j = (i * 4); j < (i * 4) + 4; j++)
    {
      printf("%s\n", options[j]);
    }

    // Prompt the user for a guess
    printf("Guess: ");

    // Use the `fgets()` function to read the user's guess
    char guessBuffer[100];
    fgets(guessBuffer, sizeof(guessBuffer), stdin);

    // Extract the first character from the user's guess
    guess = guessBuffer[0];

    // Convert the guess to uppercase
    guess = toupper(guess);

    // Check if the guess is correct
    if (guess == answers[i])
    {
      // Increment the score
      score++;
    }
    else
    {
      // Decrement the score
      score--;
    }
  }

  // Print the score
  printf("\n\n|||||||||||||||| Your Score:\t %d \n", score);

  // Print the correct answers
  printf(".................>  Correct Answers ?\n");
  for (int k = 0; k < numberOfQuestions; k++)
  {
    printf(" %d . %c\t\n", k + 1, answers[k]);
  }

  return 0;
}
