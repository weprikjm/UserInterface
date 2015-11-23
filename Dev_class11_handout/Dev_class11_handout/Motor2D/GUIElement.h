#ifndef __GUIELEMENT_H__
#define __GUIELEMENT_H__

#include "p2Point.h"

enum type_object
{
	LABEL = 0,
	IMAGE = 1
};


class GUIElement
{
public:
	p2Point<int> pos;
	type_object GUIType;
	int id;
};
#endif