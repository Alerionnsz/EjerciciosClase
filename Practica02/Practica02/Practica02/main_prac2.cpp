//Semestre 2019 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): Pérez Tepox Luis Carlos*********************************//
//*************	Práctica 02 GRUPO:02										******//
//*************						Visual Studio 2017					******//
//************************************************************//
#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Poner aqui codigo ha dibujar
	
//**	glBegin(GL_LINE_LOOP);
//	glColor3f(0.1,0.7,0.1);
	//glVertex3f(-1.5f,-1.5f,1.0f);
	//glVertex3f(1.5f, -1.5f, 1.0f);
	//glVertex3f(1.5f, 1.5f, 1.0f);
	//glVertex3f(-1.5f, 1.5f, 1.0f);


//	glBegin(GL_TRIANGLES);
//	glColor3f(0.1,0.7,0.1);
//	glVertex3f(-1.5f,-1.5f,1.0f);
//	glVertex3f(1.5f, -1.5f, 1.0f);
//	glVertex3f(1.5f, 1.5f, 1.0f);
//	glVertex3f(-1.5f, 1.5f, 1.0f);
//	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.5, 0.4);
	glVertex3f(-45.0f, 45.0f, 1.0f);
	glVertex3f(-35.0f, 45.0f, 1.0f);
	glColor3f(0.4, 0.3, 0.7);
	glVertex3f(-35.0f, 35.0f, 1.0f);
	glVertex3f(-45.0f, 35.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.4, 0.3, 0.7);
	glVertex3f(-45.0f, 40.0f, 1.0f);
	glVertex3f(-40.0f, 35.0f, 1.0f);
	glColor3f(0.7, 0.7, 0.1);

	glVertex3f(-40.0f, 20.0f, 1.0f);
	glVertex3f(-45.0f, 20.0f, 1.0f);

	glEnd();

	
	glBegin(GL_POLYGON);
	glColor3f(0.7, 0.7, 0.1);
	glVertex3f(-45.0f, 20.0f, 1.0f);
	glVertex3f(-35.0f, 20.0f, 1.0f);
	glColor3f(0.7, 0.9, 0.3);

	glVertex3f(-35.0f, 10.0f, 1.0f);
	glVertex3f(-45.0f, 10.0f, 1.0f);

	glEnd();

	/////G

	glBegin(GL_POLYGON);
	glColor3f(0.9, 0.7, 0.3);
	glVertex3f(-25.0f, 45.0f, 1.0f);
	glVertex3f(-15.0f, 45.0f, 1.0f);
	glColor3f(0.7, 0.7, 0.7);

	glVertex3f(-15.0f, 35.0f, 1.0f);
	glVertex3f(-25.0f, 35.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(-25.0f, 40.0f, 1.0f);
	glVertex3f(-20.0f, 35.0f, 1.0f);
	glColor3f(0.517, 0.32, 0.7);

	glVertex3f(-20.0f, 20.0f, 1.0f);
	glVertex3f(-25.0f, 20.0f, 1.0f);

	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.17, 0.32, 0.67);
	glVertex3f(-25.0f, 20.0f, 1.0f);
	glVertex3f(-15.0f, 20.0f, 1.0f);
	glColor3f(0.1, 0.5, 0.3);

	glVertex3f(-15.0f, 10.0f, 1.0f);
	glVertex3f(-25.0f, 10.0f, 1.0f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.5, 0.3);
	glVertex3f(-15.0f, 20.0f, 1.0f);
	glVertex3f(-18.0f, 20.0f, 1.0f);
	glColor3f(0.3, 0.02, 0.9);

	glVertex3f(-18.0f, 27.0f, 1.0f);
	glVertex3f(-15.0f, 27.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.3, 0.02, 0.9);
	glVertex3f(-18.0f, 25.0f, 1.0f);
	glVertex3f(-18.0f, 27.0f, 1.0f);
	glColor3f(0.7, 0.2, 0.1);

	glVertex3f(-20.0f, 27.0f, 1.0f);
	glVertex3f(-20.0f, 25.0f, 1.0f);
	glEnd();


	//////////////////// L

	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.23, 0.7);

	glVertex3f(0.0f, 45.0f, 1.0f);
	glVertex3f(8.0f, 45.0f, 1.0f);
	glColor3f(0.6, 0.23, 0.7);

	glVertex3f(8.0f, 10.0f, 1.0f);
	glVertex3f(0.0f, 10.0f, 1.0f);
	
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.23, 0.7);

	glVertex3f(8.0f, 20.0f, 1.0f);
	glVertex3f(16.0f, 20.0f, 1.0f);
	glColor3f(0.6, 0.23, 0.7);

	glVertex3f(16.0f, 10.0f, 1.0f);
	glVertex3f(8.0f, 10.0f, 1.0f);

	glEnd();



	////////////////// T

	glBegin(GL_POLYGON);

	glColor3f(0.4, 0.23, 0.1);

	glVertex3f(20.0f, 45.0f, 1.0f);
	glVertex3f(40.0f, 45.0f, 1.0f);
	glColor3f(0.6, 0.5, 0.2);

	glVertex3f(40.0f, 38.0f, 1.0f);
	glVertex3f(20.0f, 38.0f, 1.0f);


	glEnd();


	glBegin(GL_POLYGON);

	glColor3f(0.4, 0.23, 0.1);

	glVertex3f(27.0f, 38.0f, 1.0f);
	glVertex3f(33.0f, 38.0f, 1.0f);
	glColor3f(0.6, 0.5, 0.2);

	glVertex3f(33.0f, 10.0f, 1.0f);
	glVertex3f(27.0f, 10.0f, 1.0f);


	glEnd();


	glFlush();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-50,50,-50,50,-1,2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (250, 50);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 2"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

