#pragma once
#include "Blue/Core.h"


namespace Blue {

	class BLUE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();

	};
	Application* CreateApplication();
}