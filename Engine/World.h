//
// Created by Zach on 11/26/2021.
//

#include "glm/glm.hpp"
#include "glm/gtx/quaternion.hpp"
#include <map>

#include "Object.cpp"

#ifndef QUARK_WORLD_H
#define QUARK_WORLD_H

namespace world
{
	struct Location {
		glm::vec3 position;
		glm::quat rotation;
		glm::vec3 scaling;
	};

	class World
	{
	public:
		Location camera_position;
		std::map<int, object::Object> objects;

		void deleteObject(int id);
	};
}

#endif //QUARK_WORLD_H
