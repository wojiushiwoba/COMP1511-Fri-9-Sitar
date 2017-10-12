typedef struct _game {
	int turn;
	int player;
	int cardsPerHand;
} game;

Game newGame () {

}

int currentTurn (Game game) {
	return game->turn;
}

void playMove(Game g, playerMove move) {
	g->turn++;							 

	if (g->direction == CLOCKWISE) {

		g->player = g->player % NUM_PLAYERS;
	} else {

		g->player = g->player - 1;

		if (g->player < 0) {

			g->player = NUM_PLAYERS -1;
		}
	}

}	

int currentPlayer(Game game) {
	return game->player;
}


void test() {
	Game game = newGame();
	assert(currentTurn(game) == 0);
	playMove();
	assert(currentTurn(game) == 1);











}