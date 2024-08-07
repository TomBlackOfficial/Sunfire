#include <Sunfire.h>

class ExampleLayer : public Sunfire::Layer
{
public:
	ExampleLayer() : Layer("Example")
	{
	}

	void OnUpdate() override
	{
		SF_INFO("ExampleLayer::Update");
	}

	void OnEvent(Sunfire::Event& event) override
	{
		SF_TRACE("{0}", event);
	}
};

class Sandbox : public Sunfire::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new Sunfire::ImGuiLayer());
	}

	~Sandbox()
	{

	}
};

Sunfire::Application* Sunfire::CreateApplication()
{
	return new Sandbox();
}