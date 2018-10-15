#include <Game.h>

#include "SFML/Graphics.hpp" 
#include "SFML/OpenGL.hpp" 

#include <iostream>


int main(void){

	Game* game = new Game();
	game->run();

}