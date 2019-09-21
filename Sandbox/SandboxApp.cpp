
#include <Blue.h>

class Sandbox : public Blue::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};
/*
int main()
{
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
	return 0;

}
*/

Blue::Application* Blue::CreateApplication()
{
	return new Sandbox();
}