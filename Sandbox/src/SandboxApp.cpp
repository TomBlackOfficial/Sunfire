#include <Sunfire.h>

class Sandbox : public Sunfire::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Sunfire::Application* Sunfire::CreateApplication()
{
	return new Sandbox();
}