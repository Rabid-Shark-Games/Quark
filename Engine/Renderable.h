//
// Created by Zach on 11/26/2021.
//

#include <vector>
#include "World.h"
#include "Object.h"
#include "Mesh.h"

#ifndef QUARK_RENDERABLE_H
#define QUARK_RENDERABLE_H

namespace renderable
{
	class Renderable : public object::Object
	{
	public:
		world::Location location;

	};
}

#endif //QUARK_RENDERABLE_H
