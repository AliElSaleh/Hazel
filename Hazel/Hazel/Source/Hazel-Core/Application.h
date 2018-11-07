#pragma once

#include "Core.h"

namespace Hazel
{
	class HAZEL_API Application
	{
	public:
		Application();
		Application(const Application &); // Copy Constructor
		Application(Application &&); // Move Constructor
		virtual ~Application();

		// Operator overloads
		Application &operator= (const Application& OtherApp); // Copy Assignment
		Application &operator= (Application&& OtherApp); // Move Assignment

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}
