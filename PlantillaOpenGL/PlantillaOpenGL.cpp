         // PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

#include "Shader.h"
#include "Vertice.h"

#include "Modelo.h"


using namespace std;



Shader *shader;
GLuint posicionID;
GLuint colorID;

Modelo *triangulo;
Modelo *cuadrado;


Modelo *rectangulo1;
Modelo *rectangulo2;
Modelo *rectangulo3;
Modelo *rectangulo4;
Modelo *rectangulo5;



void inicializarRectangulo1(){

	rectangulo1 = new Modelo();

	Vertice v1 = {
		vec3(-0.5,0.15,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v2 = {
		vec3(-0.5,0.06,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v3 = {
		vec3(0.5,0.06,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v4 = {
		vec3(0.5,0.15,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	rectangulo1->vertices.push_back(v1);
	rectangulo1->vertices.push_back(v2);
	rectangulo1->vertices.push_back(v3);
	rectangulo1->vertices.push_back(v4);

}

void inicializarRectangulo2() {

	rectangulo2 = new Modelo();

	Vertice v1 = {
		vec3(-0.4,0.2,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v2 = {
		vec3(-0.4,0.15,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v3 = {
		vec3(0.4,0.15,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v4 = {
		vec3(0.4,0.2,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	rectangulo2->vertices.push_back(v1);
	rectangulo2->vertices.push_back(v2);
	rectangulo2->vertices.push_back(v3);
	rectangulo2->vertices.push_back(v4);

}

void inicializarRectangulo3() {

	rectangulo3 = new Modelo();

	Vertice v1 = {
		vec3(-0.3,0.25,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v2 = {
		vec3(-0.3,0.2,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v3 = {
		vec3(0.3,0.2,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v4 = {
		vec3(0.3,0.25,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	rectangulo3->vertices.push_back(v1);
	rectangulo3->vertices.push_back(v2);
	rectangulo3->vertices.push_back(v3);
	rectangulo3->vertices.push_back(v4);

}

void inicializarRectangulo4() {

	rectangulo4 = new Modelo();

	Vertice v1 = {
		vec3(-0.2,0.3,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v2 = {
		vec3(-0.2,0.25,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v3 = {
		vec3(0.2,0.25,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v4 = {
		vec3(0.2,0.3,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	rectangulo4->vertices.push_back(v1);
	rectangulo4->vertices.push_back(v2);
	rectangulo4->vertices.push_back(v3);
	rectangulo4->vertices.push_back(v4);

}

void inicializarRectangulo5() {

	rectangulo5 = new Modelo();

	Vertice v1 = {
		vec3(-0.1,0.36,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v2 = {
		vec3(-0.1,0.3,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v3 = {
		vec3(0.1,0.3,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v4 = {
		vec3(0.1,0.36,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	rectangulo5->vertices.push_back(v1);
	rectangulo5->vertices.push_back(v2);
	rectangulo5->vertices.push_back(v3);
	rectangulo5->vertices.push_back(v4);

}




void inicializarCuadrado() {

	cuadrado = new Modelo();

	Vertice v1 = {
		vec3(-0.8,0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v2 = {
		vec3(-0.4,0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v3 = {
		vec3(-0.4,0.5,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v4 = {
		vec3(-0.8,0.5,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	cuadrado->vertices.push_back(v1);
	cuadrado->vertices.push_back(v2);
	cuadrado->vertices.push_back(v3);
	cuadrado->vertices.push_back(v4);

}

void inicializarTriangulo() {

	triangulo = new Modelo();

	Vertice v1 =
	{
		vec3(0.0f,0.3f,0.0f),
		vec4(1.0f,0.8f,0.0f,1.0f)
	};

	Vertice v2 =
	{
		vec3(-0.3f,-0.3f,0.0f),
		vec4(1.0f,0.8f,0.0f,1.0f)
	};

	Vertice v3 =
	{
		vec3(0.3f,-0.3f,0.0f),
		vec4(1.0f,0.8f,0.0f,1.0f)
	};

	triangulo->vertices.push_back(v1);
	triangulo->vertices.push_back(v2);
	triangulo->vertices.push_back(v3);
	
}



void dibujar() {
	/*
	triangulo->dibujar(GL_TRIANGLES);
	cuadrado->dibujar(GL_QUADS);
	*/

	
	rectangulo1->dibujar(GL_QUADS);
	rectangulo2->dibujar(GL_QUADS);
	rectangulo3->dibujar(GL_QUADS);
	rectangulo4->dibujar(GL_QUADS);
	rectangulo5->dibujar(GL_QUADS);

}

void actualizar() {
	
}


int main()
{
	//Declaramos apuntador de ventana
	GLFWwindow *window;
	
	//Si no se pudo iniciar glfw
	//terminamos ejcución
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	//Si se pudo iniciar GLFW
	//entonces inicializamos la ventana
	window = glfwCreateWindow(1024, 768, "Ventana", 
			NULL, NULL);
	//Si no podemos iniciar la ventana
	//Entonces terminamos ejecucion
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Establecemos el contexto
	glfwMakeContextCurrent(window);

	//Una vez establecido  el contexto
	//Activamos funciones modernas
	glewExperimental = true;
	GLenum errorGlew = glewInit();

	if (errorGlew != GLEW_OK) {
		cout << glewGetErrorString(errorGlew);
	}

	const GLubyte *versionGL = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << versionGL;

	//---------------------------------------------------------------------....................................................................................

	//AQUI INICIALIZAMOS METODOS/PROCEDIMIENTO
	
	/*
	inicializarTriangulo();
	inicializarCuadrado();
	*/

	
	inicializarRectangulo1();
	inicializarRectangulo2();
	inicializarRectangulo3();
	inicializarRectangulo4();
	inicializarRectangulo5();



	const char *rutaVertex = "VertexShader.shader";
	const char *rutaFragment = "FragmentShader.shader";

	shader = new Shader(rutaVertex, rutaFragment);

	//Mapeo de atributos
	posicionID = glGetAttribLocation(shader->getID(), "posicion");
	colorID = glGetAttribLocation(shader->getID(), "color");

	//Desenlazar el shader
	shader->desenlazar();




	//-------------AQUI MANDAMOS LLAMAR LOS SHADERS Y VERTEX ARRAY DE LOS OBJETOS------------------------



	/*----------------------------------TRIANGULO----------------------------------
	//Establecer shader al modelo
	triangulo->shader = shader;
	//Inicializar el vertex array
	triangulo->inicializarVertexArray(posicionID, colorID);*/



	/*----------------------------------CUADRADO----------------------------------
	//Establecer shader al modelo
	cuadrado->shader = shader;
	//Inicializar el vertex array
	cuadrado->inicializarVertexArray(posicionID, colorID);*/


	


	/*----------------------------------RECTANGULO 1----------------------------------*/
	//Establecer shader al modelo
	rectangulo1->shader = shader;
	//Inicializar el vertex array
	rectangulo1->inicializarVertexArray(posicionID, colorID);


	/*----------------------------------RECTANGULO 2----------------------------------*/
	//Establecer shader al modelo
	rectangulo2->shader = shader;
	//Inicializar el vertex array
	rectangulo2->inicializarVertexArray(posicionID, colorID);


	/*----------------------------------RECTANGULO 3----------------------------------*/
	//Establecer shader al modelo
	rectangulo3->shader = shader;
	//Inicializar el vertex array
	rectangulo3->inicializarVertexArray(posicionID, colorID);


	/*----------------------------------RECTANGULO 4----------------------------------*/
	//Establecer shader al modelo
	rectangulo4->shader = shader;
	//Inicializar el vertex array
	rectangulo4->inicializarVertexArray(posicionID, colorID);


	/*----------------------------------RECTANGULO 5----------------------------------*/
	//Establecer shader al modelo
	rectangulo5->shader = shader;
	//Inicializar el vertex array
	rectangulo5->inicializarVertexArray(posicionID, colorID);


	//----------------------------------------------------------------------....................................................................................

	//Ciclo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window)) {

		//Esablecer region de dibujo
		glViewport(0, 0, 1024, 768);

		//Establece el color de borrado
		glClearColor(1, 0.2, 0.5, 1);

		//Borramos
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo
		dibujar();
		actualizar();

		//Cambiar los buffers
		glfwSwapBuffers(window);

		//Reconocer si hay entradas
		glfwPollEvents();

	}

	glfwDestroyWindow(window);
	glfwTerminate();

    return 0;

}

