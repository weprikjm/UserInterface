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
	GUIElement(p2Point<int> p, type_object type) : pos(p), GUIType(type){}
	GUIElement(){}

public:
	p2Point<int> pos;
	type_object GUIType;
	static int id;
};
#endif