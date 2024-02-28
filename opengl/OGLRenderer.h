#pragma once

#include <vector>
#include <string>
#include <glm/glm.hpp>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "Frambuffer.h"
#include "VertexBuffer.h"
#include "Texture.h"
#include "Shader.h"

#include "OGLRenderData.h"

class OGLRenderer {
public:
	bool init(unsigned int width, unsigned int height);
	void setSize(unsigned int width, unsigned int height);
	void cleanup();
	void uploadData(OGLMesh vertexData);
	void draw();

private:
	Shader mBaseicShader{};
	Framebuffer mFrameBuffer{};
	VertexBuffer mVertexBuffer{};
	Texture mTex{};
	int mTriangleCount = 0;
}