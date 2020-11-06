#pragma once
#include "DirectX.h"

#ifndef  _VISUALS_H_
#define _VISUALS_H_


class Visuals
{
private:

public:

	void CooldownTimers(CObject obj, int type);

	void DrawAARanges(CObject obj, int points, int thickness, RGBA color, bool local, RGBA localcolor);
	void DrawTracers(CObject obj, int thickness);

	void AutoSmite(CObject obj);

};



#endif // ! _VISUALS_H_