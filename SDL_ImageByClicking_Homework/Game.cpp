#include "Game.h"
#include <iostream>

using namespace std;

int c = 0;

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {
	cout << "SDL init success\n";

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) {	//window init success
			cout << "Window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) //renderer init success
			{
				std::cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

				TextureManager::Instance()->loadTexture("assets/bmp2.png", "1", renderer);
				TextureManager::Instance()->loadTexture("assets/money.jpg", "2", renderer);
				TextureManager::Instance()->loadTexture("assets/scent.jpg", "3", renderer);
				TextureManager::Instance()->loadTexture("assets/Sprite-Sheet.jpg", "4", renderer);


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

	SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0xFF, 0xFF);
	SDL_RenderDrawLine(renderer, 0, wh / 2, ww, wh / 2);
	SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0xFF, 0xFF);
	SDL_RenderDrawLine(renderer, ww / 2, wh, ww / 2, SDL_FLIP_VERTICAL);

	if (c != 0) { // Show pictures if a quadrant is clicked
		switch (c) {
		case 1:
			TextureManager::Instance()->drawTexture("1", 125, 40, 191, 245, renderer);
			TextureManager::Instance()->drawOneFrameFromTexture("1", 0, 0, 130, 130, 2, currentFrame, renderer);
			break;
		case 2:
			TextureManager::Instance()->drawTexture("2", 500, 40, 191, 245, renderer);
			TextureManager::Instance()->drawOneFrameFromTexture("2", 0, 0, 130, 130, 2, currentFrame, renderer);
			break;
		case 3:
			TextureManager::Instance()->drawTexture("3", 125, 330, 191, 245, renderer);
			TextureManager::Instance()->drawOneFrameFromTexture("3", 0, 0, 130, 130, 2, currentFrame, renderer);
			break;
		case 4:
			TextureManager::Instance()->drawTexture("4", 500, 330, 191, 245, renderer);
			TextureManager::Instance()->drawOneFrameFromTexture("4", 0, 0, 130, 130, 2, currentFrame, renderer);
			break;
		default:
			break;
		}
	}

	SDL_RenderPresent(renderer);
}


void Game::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT:
			running = false;
			break;
		case SDL_MOUSEBUTTONDOWN:
			int mouseX, mouseY;
			SDL_GetMouseState(&mouseX, &mouseY);
			if (mouseX < WINDOW_WIDTH / 2 && mouseY < WINDOW_HEIGHT / 2) {
				
				if (c == 1) {
					c = 0; 
				}
				else {
					c = 1; 
				}
			}
			else if (mouseX >= WINDOW_WIDTH / 2 && mouseY < WINDOW_HEIGHT / 2) {
				
				if (c == 2) {
					c = 0;
				}
				else {
					c = 2;
				}
			}
			else if (mouseX < WINDOW_WIDTH / 2 && mouseY >= WINDOW_HEIGHT / 2) {
				
				if (c == 3) {
					c = 0;
				}
				else {
					c = 3;
				}
			}
			else {
				
				if (c == 4) {
					c = 0;
				}
				else {
					c = 4;
				}
			}
			break;
		default:
			break;
		}
	}
}


void Game::update() {

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