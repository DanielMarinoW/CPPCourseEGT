#include "Class.h"
#include <iostream>
#include <SDL_image.h>

using namespace std;

int c = 0;

bool Class::init(const char* title, int xpos, int ypos, int width, int height, int flags) {
	cout << "SDL init success\n";

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		// Create window
		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) {	// window init success
			cout << "Window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) // renderer init success
			{
				cout << "Renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
				// Add picture to window
				SDL_Surface* tempSurface = IMG_Load("assets/bmp2.png");
				texture = SDL_CreateTextureFromSurface(renderer, tempSurface);
				SDL_FreeSurface(tempSurface);
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

void Class::render() {
	SDL_RenderClear(renderer);

	int windowH, textureW, textureH;
	SDL_GetWindowSize(window, NULL, &windowH);
	SDL_QueryTexture(texture, NULL, NULL, &textureW, &textureH);
	SDL_Rect dstrect = { (int)x, (windowH - textureH) / 2, textureW , textureH };

	SDL_RenderCopy(renderer, texture, NULL, &dstrect);

	SDL_RenderPresent(renderer);
}

void Class::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false;
			break;
		default: break;
		}
	}
}

void Class::update() {
	if (!reachRight || dx < 0) {
		x += dx;
		dx += (dx > 0 ? 0.0001 : -0.0001); //ternary operator for increasing the speed of movement
	}
	int windowW, textureW;
	SDL_GetWindowSize(window, &windowW, NULL);
	SDL_QueryTexture(texture, NULL, NULL, &textureW, NULL);
	if (x > windowW - textureW) {
		dx = -0.005;
		reachRight = true;
	}
	else if (x < 0 && reachRight) {
		dx = 0.0;
	}

}

void Class::clean() {
	cout << "Cleaning class\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

bool Class::isRunning() {
	return Class::running;
}

Class::Class() {
	Class::window = NULL;
	Class::renderer = NULL;
	Class::running = true;
}

Class::~Class() {

}
