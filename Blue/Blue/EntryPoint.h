#pragma once
#ifdef BL_PLATFORM_WINDOWS

extern Blue::Application* Blue::CreateApplication();

int main(int argc, char** argv)
{
	printf("Welcome to Blue Engine one\n");
	auto app = Blue::CreateApplication(); 
	app->Run();
	delete app;

}

#endif