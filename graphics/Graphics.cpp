#include "Graphics.hpp"

#include <SDL2/SDL.h>

Graphics::Graphics(const char* game_title)
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
	{
		throw "SDL_Init(...) != 0";
	}

	window = SDL_CreateWindow(game_title,
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		800,
		600,
		0);

	SDL_Event event;

	bool running = true;
}

Graphics::~Graphics()
{
	SDL_DestroyWindow(window);

	SDL_Quit();
}

bool Graphics::getEvent(SDL_Event* event)
{
	return SDL_PollEvent(event);
}

void Graphics::frame()
{
}
