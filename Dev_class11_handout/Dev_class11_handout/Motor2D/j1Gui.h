#ifndef __j1GUI_H__
#define __j1GUI_H__

#include "j1Module.h"
#define CURSOR_WIDTH 2

// TODO 1: Create your structure of classes
class GUILabel;
class GUIImage;
class GUIElement;
enum type_object;

// ---------------------------------------------------
class j1Gui : public j1Module
{
public:

	j1Gui();

	// Destructor
	virtual ~j1Gui();

	// Called when before render is available
	bool Awake(pugi::xml_node&);

	// Call before first frame
	bool Start();

	// Called before all Updates
	bool PreUpdate();

	// Called after all Updates
	bool PostUpdate();

	// Called before quitting
	bool CleanUp();

	// TODO 2: Create the factory methods
	// Gui creation functions
	GUIImage* CreateImage(p2Point<int>, type_object, SDL_Rect&);
	GUILabel* CreateLabel(p2Point<int>, type_object, p2SString&);

	const SDL_Texture* GetAtlas() const;

private:
	p2List<GUIElement*> GUIList;
	SDL_Texture* atlas;
	p2SString atlas_file_name;
};

#endif // __j1GUI_H__