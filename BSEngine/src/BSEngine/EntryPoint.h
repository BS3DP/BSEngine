#pragma once


#ifdef BSEngine_PLATFORM_WINDOWS

extern BSEngine::Application* BSEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = BSEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif // BSEngine_PLATFORM_WINDOWS
