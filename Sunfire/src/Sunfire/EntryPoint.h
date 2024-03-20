#pragma once

#ifdef SF_PLATFORM_WINDOWS

extern Sunfire::Application* Sunfire::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Sunfire::CreateApplication();
	app->Run();
	delete app;
}

#endif