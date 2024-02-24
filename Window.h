#pragma once
#include<string>
#include <vulkan/vulkan.h>
#include<GLFW/glfw3.h>

class Window {
public:
	bool initVulkan();
	bool init(unsigned int width, unsigned int height, std::string title);
	void mainLoop();
	void cleanup();

private:
	GLFWwindow* mWindow = nullptr;
	std::string mApplicationName;
	VkInstance mInstance{};
	VkSurfaceKHR mSurface{};
};