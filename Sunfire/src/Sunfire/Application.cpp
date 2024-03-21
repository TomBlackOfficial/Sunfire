#include "Application.h"

#include "Sunfire/Events/ApplicationEvent.h"
#include "Sunfire/Log.h"

namespace Sunfire {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			SF_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			SF_TRACE(e);
		}

		while (true);
	}

}