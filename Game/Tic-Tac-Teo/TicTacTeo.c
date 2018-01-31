/* the original board
 O |   | X
 ---------
 X |   | X
 ---------
   | O | O
 */

/*
 1 | 2 | 3
 ---------
 4 | 5 | 6
 ---------
 7 | 8 | 9
*/
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


function winning(board, player){
 if (
 (board[0] == player && board[1] == player && board[2] == player) ||
 (board[3] == player && board[4] == player && board[5] == player) ||
 (board[6] == player && board[7] == player && board[8] == player) ||
 (board[0] == player && board[3] == player && board[6] == player) ||
 (board[1] == player && board[4] == player && board[7] == player) ||
 (board[2] == player && board[5] == player && board[8] == player) ||
 (board[0] == player && board[4] == player && board[8] == player) ||
 (board[2] == player && board[4] == player && board[6] == player)
 ) {
  return true;
 } else {
  return false;
 }
}
