/*

Name: Daniel Wu
Student ID: C21460524
Programming
Assessment 1 Due: 28th November

Requirements:
You are required to develop a program in C that will simulate a mathematics quiz
game. The game will include various features, each of which must be incorporated
into your program.
Your program should be menu-driven and must display a main menu when run. The
menu should include the following options:

1. Enter the number of questions to be asked for this round of the quiz
(maximum of 5 questions allowed).
2. Start and play quiz
3. Display the number of questions that were answered (i) correctly and (ii)
incorrectly for this round.
4. Exit Program

Features to include:
1. Your program should continually run and re-display the main menu after each
option has completed, i.e., start over again. Only when the customer enters
option 4 (i.e., Exit Program), should your program terminate.
2. For option 2, your program should display a simple mathematical question and
ask the user to enter the answer. After the user has entered their answer, your
program should display the correct answer beside the user's answer. Your
program should then ask the next question (if there are more to ask) and
continue this sequence.
For example:
Question 1: 9 / 3 + 6 = ?
6
You entered: 6 - Wrong !! The correct answer: 9
3. Option 3 should only be allowed to be selected after the user selects option 2
(i.e., plays the quiz). If the user starts a new quiz, option 3 should be reset from
the previous round (i.e., Do not count correct & incorrect answers for all
rounds).
4. Try to take account of input errors by the user and display appropriate error
messages.

*/

#include <stdio.h> // header file

int main() // main body
{
    int gamestart = 0; // gamestart function
    int questions = 0; // amount of questions
    int right = 0; // right counter
    int wrong = 0; // wrong counter
    int q1; // Question 1
    int q2; // Question 2
    int q3; // Question 3
    int q4; // Question 4
    int q5; // Question 5
    char option = 0; // char menu input
    int count = 1; // Counter
    int CodeStart = 1; // Condition for the main body do while

    do // main do while containing all the code
    {
        do // secondary do while for the menu
        {
            // menu
            printf("\n1. Choose Number of questions to Answer ---(n)---", option); // number of Questions to select
            printf("\n2. Start ---(s)---", option); // start option
            printf("\n3. Round History ---(h)---", option); // brings up number of questions answered right and wrong
            printf("\n4. End ---(e)---\n", option); // terminates and ends the program
            scanf("\n%c", &option); // lets the user input a letter

            // start of menu
            switch (option) // use of switch statement
            {

            case 'n': // if 'n' is pressed
            {
 
                printf("\n\nPlease enter the amount of Questions you would like to answer this round between (1 - 5)\n", questions); // print statement
                scanf("\n%d", &questions); // input number of question user wants

                if ((questions > 0) && (questions < 6)) // if input is between 1 - 5
                {
                    printf("\nYou chose %d Questions this round", questions); // print statement
                } // end if

                else // if input is not between 1 - 5 
                {
                    printf("\nInvalid Number, Please Choose a number BETWEEN (1-5)", questions); // print statement
                } // end else

                break; // end case
            } // ends case 'n'

            case 's': // if 's' is pressed
            {
                printf("\nGood Luck\n", option); // print statement
                gamestart = 1; // ends this do while loop and goes into the the next do while which is the quiz
                break; // ends case 's'
            } // ends case 's'

            case 'h': // if 'h' is pressed
            {

                if ((right == 0) && (wrong == 0)) // if statement so user does not try to select this option before playing a round of the quiz
                {
                    printf("\nPLAY and finish the quiz to enable this input\n"); // print statement
                    break; // ends case 'h'
                }

                else
                {
                printf("\n\nRight: %d", right); // answered right print statement
                printf("\nWrong: %d\n\n", wrong); // answered wrong print statement
                right = 0; // resets right counter after round
                wrong = 0; // resets wrong counter after round
                break; // ends case 'h'
                }

            } // ends case 'h'

            case 'e': // if 'e' is pressed
            {
                printf("\nYou chose to End the quiz, Thank You for Playing!!!", option); // print statement for end 
                return 0; // Ends game with 'e'
                break; // ends case 'e'
            } // ends case 'h'

            default: // if an invalid keyboard input is pressed
            {
                printf("\nInvalid Input, Please enter a LETTER from the menu\n", option); //error checking
                break; // ends case default
            } // ends default case

            } // end switch
        } while (gamestart != 1); // end while

        do // do while for the quiz
        {
            for (count = 1; count <= questions; count++) // 'for' loop 

            // quiz start
            {
                switch (count) // switch statement
                {
                case 1: // question 1
                {

                    printf("\nQuestion 1: 5 + 4 = ?\n", q1); // display q1
                    scanf("%d", &q1); // user able to input

                    if (q1 == 9) // if user inputs 9 as answer
                    {
                        printf("You Entered: %d - CORRECT\n", q1); // print statement
                        right++; // counts if answered right
                    }

                    else // anything else
                    {
                        printf("You Entered: %d - INCORRECT | Correct Answer: 9\n", q1); // print statement
                        wrong++; // counts if answered wrong
                    }

                    break; // get out case

                } // end case 1

                case 2: // question 2
                {
                    printf("\nQuestion 2: 43 - 26 = ?\n", q2); // display q2
                    scanf("\n%d", &q2); // user able to input

                    if (q2 == 17) // if user puts 17 as answer
                    {
                        printf("You Entered: %d - CORRECT\n", q2); // print statement
                        right++; // counts if answered right
                    }

                    else // anything else
                    {
                        printf("You Entered: %d - INCORRECT | Correct Answer: 17\n", q2); // print statement
                        wrong++; // counts if answered wrong
                    }

                    break; // get out case

                } // end case 2

                case 3: // question 3
                {

                    printf("\nQuestion 3: 9 x 8 = ?\n", q3); // display q3
                    scanf("\n%d", &q3); // user able to input

                    if (q3 == 72) // if user inputs 72 as answer
                    {
                        printf("You Entered: %d - CORRECT\n", q3); // print statement
                        right++; // counts if answered right
                    }

                    else // anything else
                    {
                        printf("You Entered: %d - INCORRECT | Correct Answer: 72\n", q3); // print statement
                        wrong++; // counts if answered wrong
                    }

                    break; // get out case
                } // end case 3

                case 4: // question 4
                {
                    printf("\nQuestion 4: 192 / 12 = ?\n", q4); // display q4
                    scanf("\n%d", &q4); // user able to input

                    if (q4 == 16) // if user inputs 16 as answer
                    {
                        printf("You Entered: %d - CORRECT\n", q4); // print statement
                        right++; // counts if answered right
                    }

                    else // anything else
                    {
                        printf("You Entered: %d - INCORRECT | Correct Answer: 16\n", q4); // print statement
                        wrong++; // counts if answered wrong
                    }

                    break; // get out case
                } // end case 4

                case 5: // question 5
                {
                    printf("\nQuestion 5: (8 x 12) - (63 / 9) = ?\n", q5); // display q5
                    scanf("\n%d", &q5); // user able to input

                    if (q5 == 89) // if user inouts 89 as answer
                    {
                        printf("You Entered: %d - CORRECT\n", q5); // print statement
                        right++; // counts if answered right
                    }

                    else // anything else
                    {
                        printf("You Entered: %d - INCORRECT | Correct Answer: 89\n", q5); // print statement
                        wrong++; // counts if answered wrong
                    }

                    break; // get out case
                } // end case 5

                } // end switch

                // Returning Menu/ stop loop game
                gamestart = 0;
            } // end of 'for' loop
                
        } while (gamestart == 1); 
    }
    while(CodeStart == 1); // The code will always run if the condtion is equal to 1 as stated here

    // terminates the program
    return 0; 
} 
// end of body