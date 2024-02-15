#pragma once
#include <SDL.h>

class Class
{
public:
	Class();
	~Class();
	bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
	void render();
	void update();
	void handleEvents();
	void clean();
	bool isRunning();
	float x = 0.0; //coordinate x of the image
	float dx = 0.005; //change coordinate x of the image
	bool reachRight = false;

private:
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	bool running;
	SDL_Texture* texture = NULL;
};
