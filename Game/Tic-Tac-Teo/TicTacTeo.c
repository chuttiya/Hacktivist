#include <stdio.h>
#include <string.h>
#include <math.h>

/* Complete the function below to print 2 integers separated by a single space which will be your next move 
 */
void nextMove(char player, char ar[3][3]){


}


int main(void) {

    int i;
    char player;
    char board[3][3];

    //If player is X, I'm the first player.
    //If player is O, I'm the second player.
    scanf("%c", &player);

    //Read the board now. The board is a 3x3 array filled with X, O or _.
    for(i=0; i<3; i++) {
        scanf("%s[^\n]%*c", board[i]);
    }
  
   nextMove(player,board);
    return 0;
}
