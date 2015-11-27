#include "GUIElement.h"
#include "j1Textures.h"
#include "SDL/include/SDL.h"


class GUIImage : public GUIElement
{
public:
	GUIImage(p2Point<int> p, type_object type, SDL_Rect* rect) : GUIElement(p,type)
	{
		img = rect;
	}
	GUIImage(){}

public:
	SDL_Rect* img = NULL;
};