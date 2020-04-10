#pragma once

#include "core.h"

namespace BSEngine
{
	class BSEngine_API Application
	{
	public:
		Application();
		~Application();

		void Run();
	};

	Application* CreateApplication();
}


