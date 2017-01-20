#include <GLFW/glfw3.h>
#include <iostream>

const int g_width  = 640;
const int g_height = 480;

int main() {
	//GLFW�̏�����
	if (!glfwInit()) {
		return -1;
	}

	//�E�B���h�E�̍쐬
	GLFWwindow *window = glfwCreateWindow(g_width, g_height, "Bound", NULL, NULL);
	if (!window) {
		return 1;
	}

	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);

	//�Q�[�����[�v
	while (!glfwWindowShouldClose(window)) {
		//�o�b�t�@�̃N���A
		glClearColor(0.2f, 0.2f, 0.2f, 0.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		//�_�u���o�b�t�@�̃X���b�v
		glfwSwapBuffers(window);
	}
	//GLFW�̏I������
	glfwTerminate();

	return 0;
}