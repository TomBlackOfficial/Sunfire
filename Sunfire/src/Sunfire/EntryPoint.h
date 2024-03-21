#pragma once

#ifdef SF_PLATFORM_WINDOWS

extern Sunfire::Application* Sunfire::CreateApplication();

int main(int argc, char** argv)
{
	Sunfire::Log::Init();
	SF_CORE_WARN("Initialized Log!");
	int a = 5;
	SF_INFO("Hello! var={0}", a);


	auto app = Sunfire::CreateApplication();
	app->Run();
	delete app;
}

#endif