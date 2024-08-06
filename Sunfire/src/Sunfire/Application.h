#pragma once

#include "Core.h"

#include "Window.h"
#include "Sunfire/LayerStack.h"
#include "Sunfire/Events/Event.h"
#include "Sunfire/Events/ApplicationEvent.h"


namespace Sunfire {

	class SUNFIRE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_layerStack;
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}