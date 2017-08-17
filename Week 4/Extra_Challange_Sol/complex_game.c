#include <stdlib.h>
#include <stdio.h>

/*
 * Write a small turn based battle
 * game!!
 *
 * A function is provided that
 * asks the user to make a move out of 4 
 * possible moves and returns what move 
 * the user picked. 
 *
 * This function breaks if the user enters in anything
 * that isn't a valid move. Change this to detect when
 * the user hasn't put in valid input and ask again. 
 *
 * Once that's done, fill in the update functions
 * to make the game work
 * 
 * Once you think the game is working, play it,
 * test it! and then add 1 new feature. 
 * maybe you make the enemy harder to beat
 * maybe a new move?
 */

#define SLASH 1  // does 2 damage to enemy
#define SKIP 2   // does nothing
#define SHIELD 3 // negates half of the enemys damage next turn
#define ARROW 4  // does 3 damage to enemy

int updateMe(int myHP, int enemyMove, int myMove);
int updateEnemy(int enemyHP, int enemyMove, int myMove);
int getMoveFromUser(int health, int enemyHealth);

int main(int argc, char* argv[]){
	int enemyHP = 20;
	int myHP = 40;
	int move = 0;
	int enemyMove = SLASH; // enemy will always slash
	while(enemyHP > 0){
		move = getMoveFromUser(myHP,enemyHP);
		while (move == 0){
			// something must have gone wrong!!
			// try again
			printf("Sorry that wasn't a valid move, try again..\n");
			move = getMoveFromUser(myHP,enemyHP);
		}
		enemyHP = updateEnemy(enemyHP, enemyMove, move);
		myHP = updateMe(myHP, enemyMove, move);
	}
    return EXIT_SUCCESS;
}

// Takes in the enemy move, my move and my current HP
// and returns what my new HP is. 
int updateMe(int myHP, int enemyMove, int myMove){
	// get the enemy attack damage
	// there is only 1 move to conisder atm
	int attackDmg = 0;
	if(enemyMove == SLASH){
		attackDmg = 2;
	}

	// if i have a shield negate some damage
	if(myMove == SHIELD){
		attackDmg = attackDmg/2;
	}

	return myHP - attackDmg; // FILL ME!
}

// Takes in the enemy move, my move and enemy current HP
// and returns what the new enemy HP is. 
int updateEnemy(int enemyHP, int enemyMove, int myMove){
	int dmg = 0;
	if(myMove == SKIP){
		// do nothing
	}else if(myMove == SLASH){
		dmg = 2;
	}else if(myMove == ARROW){
		dmg = 3;
	}else if(myMove == SHIELD){
		// do nothing
	}
	return enemyHP-dmg; // FILL ME!
}

/*
 * Shows the users the current moves
 * they can make and also what the HP
 * is. Then lets them choose a attack
 * by putting in the corrosponding number
 */
int getMoveFromUser(int health,int enemyHealth){
	printf("------------------------\n");
	printf("HP: %d      |  Enemy: %d\n",health,enemyHealth);
	printf("------------------------\n");
	printf(" 1: SLASH   |  2: SKIP  \n");
	printf(" 3: SHIELD  |  4: ARROW \n");
	int move = 0;
	int valuesRead = scanf("%d",&move);
	if(valuesRead < 1 || move < 1 || move > 4){
		return 0;
	}else{
		return move;
	}
}

