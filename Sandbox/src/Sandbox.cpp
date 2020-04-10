#include <BSEngine.h>

class Sandbox : public BSEngine::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

BSEngine::Application* BSEngine::CreateApplication()
{
	return new Sandbox();
}