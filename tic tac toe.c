#include<stdlib.h>
#include<stdio.h>
int player,choice;
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkforwin();
void displayboard();
void markboard(char mark);
int main()
{
    int gamestatus;
    char mark;
    player=1;
    do{
        displayboard();
        //change turns between player 1 and 2
        player =(player %2)?1:2;
        // get input
        printf("Player %d Enter a number: ",player);
        scanf("%d",&choice);
        // set the correct character bases on player turn
        mark =( player==1)?'X':'O';
        // set the board based on user choice or invalid
        markboard(mark);
        gamestatus=checkforwin();
        player++;

    }while(gamestatus== -1);

    if(gamestatus == 1)
    {
        printf(" ==> Player %d WIN !\n\n",--player);
    }
    else
    {
        printf(" GAME DRAW \n\n");
    }
    return 0;
}
/*
function return the game current status
1 for game over with a result
-1 for game over with no result
0 for game in progress
*/
int checkforwin()
{
    int returnvalue=0;
    if(square[1]==square[2]&&square[2]==square[3])
    {
        returnvalue=1;
    }
    else if(square[4]==square[5]&&square[5]==square[6])
    {
        returnvalue=1;
    }
    else if(square[7]==square[8]&&square[8]==square[9])
    {
        returnvalue=1;
    }
    else if(square[1]==square[4]&&square[4]==square[7])
    {
        returnvalue=1;
    }
    else if(square[2]==square[5]&&square[5]==square[8])
    {
        returnvalue=1;
    }
    else if(square[3]==square[6]&&square[6]==square[9])
    {
        returnvalue=1;
    }
    else if(square[1]==square[5]&&square[5]==square[9])
    {
        returnvalue=1;
    }
    else if(square[3]==square[5]&&square[5]==square[7])
    {
        returnvalue=1;
    }
    else if(square[1]!='1'&&square[2]!='2'&&square[3]!='3'&&square[4]!='4'&&square[5]!='5'&&square[6]!='6'&&square[7]!='7'&&square[8]!='8'&&square[9]!='9')
    {
        returnvalue=0;
    }
    else
    {
    returnvalue=-1;
    }
    return returnvalue;
}

/*
function to display the board
*/

void displayboard()
{
    system("cls");
    printf("\n\n\n\t Tic Tac Toe \n");
    printf("\t KAT KUT \n\n");
    printf("Player 1 (X) - Player 2 (O)\n\n\n");
    printf("\t     |     |     \n");
    printf("\t %c   |  %c  | %c \n",square[1],square[2],square[3]);
    printf("\t_____|_____|____\n");
    printf("\t     |     |     \n");
    printf("\t %c   |  %c  | %c \n",square[4],square[5],square[6]);
    printf("\t_____|_____|____\n");
    printf("\t     |     |     \n");
    printf("\t %c   |  %c  | %c \n",square[7],square[8],square[9]);
    printf("\t     |     |     \n\n");

}

/*
set the board with the correct character
X or O in the array
*/
void markboard(char mark)
{
    if (choice == 1 && square[1] == '1')
        square[1] = mark;

    else if (choice == 2 && square[2] == '2')
        square[2] = mark;

    else if (choice == 3 && square[3] == '3')
        square[3] = mark;

    else if (choice == 4 && square[4] == '4')
        square[4] = mark;

    else if (choice == 5 && square[5] == '5')
        square[5] = mark;

    else if (choice == 6 && square[6] == '6')
        square[6] = mark;

    else if (choice == 7 && square[7] == '7')
        square[7] = mark;

    else if (choice == 8 && square[8] == '8')
        square[8] = mark;

    else if (choice == 9 && square[9] == '9')
        square[9] = mark;
    else
    {
        printf("Invalid move ");

        player--;
    }
}
