#pragma once

#include <SDL2/SDL.h>

class Graphics
{
public:
	Graphics(const char* game_title);
	~Graphics();

	bool getEvent(SDL_Event *event);

	void frame();
private:
	SDL_Window* window;
};