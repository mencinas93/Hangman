/* Universe - 10 words, no more than 5 characters each. 6 fails*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char action = 'Y';
    /*char HangmanWord_First[10] = "Star";
     char HangmanWord_Second[10] = "Moon";
     char HangmanWord_Third[10] = "Earth";
     char HangmanWord_Fourth[10] = "Galaxy";
     char HangmanWord_Fifth[10] = "Space";
     char HangmanWord_Sixth[10] = "Planet";
     char HangmanWord_Seventh[10] = "Sun";
     char HangmanWord_Eighth[10] = "Comet";
     char HangmanWord_Ninth[10] = "Orbiter";
     char Hangmanword_Tenth[10] = "Gravity";
     */
    char HangmanWord10[10][10]= {"Star", "Moon", "Earth", "Galaxy", "Space", "Planet", "Sun", "Comet", "Orbiter", "Gravity"};
    
    char guesses;
    
    printf("Welcome to Hangman! Enter N if you want to start a New the game or Enter Q to Quit: ");
    scanf("%c", &action);
    
    if (action == 'Q'){
        printf("Have a good day");
    }
    else if (action == 'N'){
        printf("Are you ready to play in a category called Universe! Lets begin.\n ");
        
        for (int i = 0; i < 10; i++){
            printf("%s \n", HangmanWord10[i]);
        }
        printf("Guess the letters in the first word ");
        scanf("%c", &guesses);
        if (guesses == 's'){
            printf("%s", HangmanWord10[0]);
        }
            else {
                printf("Wrong!");
            }
            return 0;
        }
    }

