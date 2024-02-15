#include "Game.h"
#include <iostream>
using namespace std;

int c = 0;

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {
	cout << "SDL init success\n";

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) {	
			cout << "Window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) 
			{
				std::cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

				TextureManager::Instance()->loadTexture("assets/Cats.png", "png", renderer);
				TextureManager::Instance()->loadTexture("assets/Sprite-Sheet.jpg", "jpg", renderer);
				
			}

			else {
				cout << "Renderer init failed\n";
				return false;
			}

		}
		else {
			cout << "Window init failed\n";
			return false;
		}
	}
	else {
		cout << "SDL init failed\n";
		return false;
	}
	cout << "Init success\n";
	running = true;
}

void Game::render() {
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);

	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh);
	
	
	TextureManager::Instance()->drawOneFrameFromTexture("png", 50, 183, 220, 130, 2, currentFrame, renderer);
	TextureManager::Instance()->drawOneFrameFromTexture("png", 560, 183, 220, 130, 2, currentFrame, renderer, SDL_FLIP_HORIZONTAL);
	SDL_RenderPresent(renderer);
}

void Game::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false;
			break;
		default: break;
		}
	}
}

void Game::update() {

	std::cout << "SDL_TICKS           :" << SDL_GetTicks() << "\n";
	std::cout << "SDL_TICKS / 100     :" << int(SDL_GetTicks() / 100) << "\n";
	std::cout << "SDL_TICKS / 100 % 10: " << int(((SDL_GetTicks() / 100) % 5)) << "\n\n";

	currentFrame = int(((SDL_GetTicks() / 250) % 5));  //%5 for 5 frames
	currentFrame = int(((SDL_GetTicks() / 250) % 5));
	c++;
	if (c % 50 == 0) {
		destinationRectangle.x++;
		destinationRectangle.y++;
		sourceRectangle.x++;
	}
}

void Game::clean() {
	cout << "Cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

bool Game::isRunning() {
	return Game::running;
}

Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	Game::currentFrame = 4;
}

Game::~Game() {

}
