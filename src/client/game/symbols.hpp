#pragma once

#define WEAK __declspec(selectany)

namespace game
{
	// Functions
	

	// Variables

	namespace lua
	{
		WEAK symbol<int(lua_State* s, const char* buffer, 
			size_t size, const char* name)> luaL_loadbuffer{0x14C200F90, 0x0};

		WEAK symbol<const char*(lua_State* L, int idx, size_t* len)> lua_tolstring{0x14C1ECA70, 0x0};

		WEAK symbol<lua_state_container*> state_container{0x142B641F0, 0x0};
	}
}
