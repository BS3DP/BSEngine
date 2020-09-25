#pragma once


#ifdef BSE_PLATFORM_WINDOWS

extern BSEngine::Application* BSEngine::CreateApplication();

int main(int argc, char** argv)
{
	BSEngine::log::Init();
	BSE_CORE_WARN("Core Init Log!");
	BSE_INFO("Client Init Log!");

	auto app = BSEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif // BSE_PLATFORM_WINDOWS
