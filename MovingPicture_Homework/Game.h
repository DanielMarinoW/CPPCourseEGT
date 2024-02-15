#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include "TextureManager.h"

class Game {
public:
	Game();
	~Game();
	bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
	void render();
	void handleEvents();
	void update();
	void clean();
	bool isRunning();
	void movePicture(int dx, int dy);

private:
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	bool running;
	SDL_Texture* texture = NULL;
	int currentFrame;
	int xPos = 300; // x-position of picture
	int yPos = 150; // y-position of picture
};