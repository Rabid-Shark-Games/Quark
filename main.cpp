#include <SDL2/SDL_main.h>
#undef main

#include "graphics/Graphics.hpp"

int main()
{
	Graphics graphics("Quark Engine");

	bool running = true;

	SDL_Event event;
	while (running)
	{
		while (graphics.getEvent(&event))
		{
			if (event.type == SDL_QUIT)
			{
				running = false;
			}
		}

		graphics.frame();
	}

	return 0;
}