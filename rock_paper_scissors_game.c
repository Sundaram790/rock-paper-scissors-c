#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
int PlayerChoice, ComputerChoice;
int PlayerScore = 0, ComputerScore = 0 , rounds , i ;
srand(time(0));

printf("Enter number of rounds : ");
scanf("%d", &rounds);

for(i = 1 ; i <=rounds ; i++) {
    printf("\nround %d\n", i);
    printf("Choose : 1 = rock, 2 = paper, 3 = scissors: ");
    scanf("%d", &PlayerChoice);

    if(PlayerChoice < 1 || PlayerChoice > 3 ) {
        printf("Invalid choice! Try again\n");
        i--;
        continue;
    }
    ComputerChoice = (rand() % 3) + 1;
    printf("Computer choose :");

    switch(ComputerChoice) {
        case 1: printf("Rock\n"); break;
        case 2: printf("Paper\n"); break;
        case 3: printf("Scissiors\n"); break;
    }
    switch(PlayerChoice) {
        case 1: //Rock

          if(ComputerChoice == 3) {
                printf("You win this round\n");
                PlayerScore ++;

       }  else if(ComputerChoice == 2) {
                printf("Computer win this round\n");
                ComputerScore ++;

            }  else  {
                printf("It's a draw\n");
            }
            break;

        case 2: //Paper

           if(ComputerChoice == 3) {
            printf("Computer win this round\n");
            ComputerScore ++;

           } else if(ComputerScore == 1) {
            printf("You win this round\n");
            PlayerScore ++;

           } else {
            printf("It's a draw\n");
           }
           break;

        case 3: //Scissors
        
           if(ComputerChoice == 1) {
            printf("Computer win this round\n");
            ComputerScore ++;

           } else if(ComputerChoice == 2) {
            printf("You win this round\n");
            PlayerScore ++;

           } else {
            printf("It's a draw\n");
           }
           break;
    }   
        printf("Score: You = %d | Computer = %d", PlayerScore, ComputerScore);

}
    //Final Winner
    printf("\n---Final Results---\n");
    if(PlayerScore > ComputerScore) {
        printf("Congrats! You win this game\n");
    } else if(PlayerScore < ComputerScore) {
        printf("Computer win this game\n");
    } else {
        printf("It's a tie\n");
    }


return 0;
}