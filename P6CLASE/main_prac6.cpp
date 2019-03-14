//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): Pérez Tepox Luis Carlos *********************************//
//*************				Práctica 06  Grupo_02 Ejercicio de Clase							******//
//*************		Visual Studio 2017 ------- Sistema Solar									******//
//************************************************************//
#include "Main.h"


// Variables used to calculate frames per second: (Windows)
DWORD dwFrames = 0;
DWORD dwCurrentTime = 0;
DWORD dwLastUpdateTime = 0;
DWORD dwElapsedTime = 0;


//Variables used to create movement

int sol=0;
int mercurio = 0;
int venus = 0;
int tierra = 0;
int mars = 0;
int jupiter = 0;
int saturno = 0;
int uranus = 0;
int neptune = 0;
int moon = 0;



float camaraZ = 0.0;
float camaraX = 0.0;

GLfloat SunDiffuse[]= { 1.0f, 1.0f, 1.0f, 1.0f };			// Diffuse Light Values
GLfloat SunSpecular[] = { 1.0, 1.0, 1.0, 1.0 };				// Specular Light Values
GLfloat SunPosition[]= { 0.0f, 0.0f, 0.0f, 1.0f };			// Light Position

GLfloat EarthDiffuse[]= { 0.2f, 0.2f, 1.0f, 1.0f };			// Tierra
GLfloat EarthSpecular[] = { 0.8, 0.8, 0.8, 1.0 };
GLfloat EarthShininess[] = { 50.0 };

GLfloat MoonDiffuse[]= { 0.8f, 0.8f, 0.8f, 1.0f };			// Luna
GLfloat MoonSpecular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat MoonShininess[] = { 50.0 };

GLfloat MarsDiffuse[]= { 0.8f, 0.4f, 0.1f, 1.0f };			// Marte
GLfloat MarsSpecular[] = { 1.0, 0.5, 0.0, 1.0 };
GLfloat MarsShininess[] = { 50.0 };

void InitGL ( GLvoid )     // Inicializamos parametros
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo

	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
	
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glTranslatef(camaraX,0.0,-5.0+camaraZ);			//camara
	//glRotatef(90, 1.0, 0.0, 0.0);

	//SISTEMA SOLAR
	glPushMatrix();

	//SOL
	glPushMatrix();
	glRotatef(sol,0.0,1.0,0.0);	//El Sol gira sobre su eje
	glColor3f( 1.0,1.0,0.0 );	//Sol amarillo
	glutSolidSphere(4,15,15);  //Draw Sun (radio,H,V);
	glPopMatrix();

	///MERCURIO
	glPushMatrix();
	glRotatef(mercurio, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glTranslatef(5.0, 0.0, 0.0);
	glRotatef(mercurio, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glColor3f(1.0, 0.60, 0.0);	//Sol amarillo
	glutSolidSphere(0.2, 15, 15);  //Draw Sun (radio,H,V);
	glPopMatrix();

//	VENUS
	glPushMatrix();
	glRotatef(venus, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glTranslatef(8.0, 0.0, 0.0);
	glRotatef(venus, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glColor3f(1.0, 0.60, 1.0);	//Sol amarillo
	glutSolidSphere(0.5, 15, 15);  //Draw Sun (radio,H,V);
	glPopMatrix();

	///TIERRA
	glPushMatrix();
	glRotatef(tierra, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glTranslatef(10.0, 0.0, 0.0);
	//moon
	glPushMatrix();
	glRotatef(moon, 0.0, 0.0, 1.0);	//El Sol gira sobre su eje
	glTranslatef(1.0, 0.0, 0.0);
	glRotatef(moon, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glColor3f(0.9, 0.90, 0.90);	//Sol amarillo
	glutSolidSphere(0.1, 15, 15);  //Draw Sun (radio,H,V);
	glPopMatrix();
	glRotatef(tierra, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glColor3f(0.0, 0.60, 1.0);	//Sol amarillo
	glutSolidSphere(0.8, 15, 15);  //Draw Sun (radio,H,V);



	glPopMatrix();


	///MARTE
	glPushMatrix();
	glRotatef(mars, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glTranslatef(13.0, 0.0, 0.0);
	glRotatef(mars, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glColor3f(1.0, 0.0, 0.0);	//Sol amarillo
	glutSolidSphere(0.9, 15, 15);  //Draw Sun (radio,H,V);
	glPopMatrix();


	///JUPITER
	glPushMatrix();
	glRotatef(jupiter, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glTranslatef(18.0, 0.0, 0.0);

	//moon
	glPushMatrix();
	glRotatef(moon, 1.0, 0.0, 0.0);	//El Sol gira sobre su eje
	glTranslatef(0.0, 2.5, 0.0);
	glRotatef(moon, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glColor3f(0.9, 0.90, 0.90);	//Sol amarillo
	glutSolidSphere(0.1, 15, 15);  //Draw Sun (radio,H,V);
	glPopMatrix();
	//moon2
	glPushMatrix();
	glRotatef(moon, 0.0, 0.0, 1.0);	//El Sol gira sobre su eje
	glTranslatef(2.5, 0.0, 0.0);
	glRotatef(moon, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glColor3f(0.9, 0.90, 0.90);	//Sol amarillo
	glutSolidSphere(0.1, 15, 15);  //Draw Sun (radio,H,V);
	glPopMatrix();
	glRotatef(jupiter, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glColor3f(1.0, 0.50, 0.0);	//Sol amarillo
	glutSolidSphere(2.0, 15, 15);  //Draw Sun (radio,H,V);
	glPopMatrix();

	///SATURNO
	glPushMatrix();
	glRotatef(saturno, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glTranslatef(23.0, 0.0, 0.0);
//ring 1
	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.0);
	glRotated(70,1.0,0.0,0.0);
	glColor3f(1.450, 0.0, 0.80);	//Sol amarillo
	glutSolidTorus(0.1, 1.6, 120, 120);
	glPopMatrix();
	//ring 2

	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.0);
	glRotated(90,1.0,0.0,0.0);
	glColor3f(1.450, 0.0, 0.80);	//Sol amarillo
	glutSolidTorus(0.1, 2.0, 120, 120);
	glPopMatrix();

	glRotatef(saturno, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glColor3f(0.450, 0.60, 0.80);	//Sol amarillo
	glutSolidSphere(1.5, 15, 15);  //Draw Sun (radio,H,V);
	glPopMatrix();

	///URANUS
	glPushMatrix();
	glRotatef(uranus, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glTranslatef(27.0, 0.0, 0.0);

	//moon
	glPushMatrix();
	glRotatef(moon, 1.0, 0.0, 0.0);	//El Sol gira sobre su eje
	glTranslatef(0.0, 2.0, 0.0);
	glRotatef(moon, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glColor3f(0.9, 0.90, 0.90);	//Sol amarillo
	glutSolidSphere(0.1, 15, 15);  //Draw Sun (radio,H,V);
	glPopMatrix();

	glRotatef(uranus, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glColor3f(1.0, 0.0, 1.0);	//Sol amarillo
	glutSolidSphere(1.4, 15, 15);  //Draw Sun (radio,H,V);
	glPopMatrix();

	///NEPTUNE
	glPushMatrix();
	glRotatef(neptune, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glTranslatef(31, 0.0, 0.0);

	//moon
	glPushMatrix();
	glRotatef(moon, 1.0, 0.0, 0.0);	//El Sol gira sobre su eje
	glTranslatef(0.0, 1.5, 0.0);
	glRotatef(moon, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glColor3f(0.9, 0.90, 0.90);	//Sol amarillo
	glutSolidSphere(0.1, 15, 15);  //Draw Sun (radio,H,V);
	glPopMatrix();
	//moon2
	glPushMatrix();
	glRotatef(moon, 0.0, 0.0, 1.0);	//El Sol gira sobre su eje
	glTranslatef(1.5, 0.0, 0.0);
	glRotatef(moon, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glColor3f(0.9, 0.90, 0.90);	//Sol amarillo
	glutSolidSphere(0.1, 15, 15);  //Draw Sun (radio,H,V);
	glPopMatrix();

	glRotatef(neptune, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glColor3f(1.0, 0.60, 0.60);	//Sol amarillo
	glutSolidSphere(1.0, 15, 15);  //Draw Sun (radio,H,V);
	glPopMatrix();

	glPopMatrix();




	glutSwapBuffers ( );

}

void animacion()
{
	// Calculate the number of frames per one second:
	//dwFrames++;
	dwCurrentTime = GetTickCount(); // Even better to use timeGetTime()
	dwElapsedTime = dwCurrentTime - dwLastUpdateTime;

	if(dwElapsedTime >= 30)
	{
		sol = (sol - 5) % 360;
		mercurio = (mercurio - 10) % 360;
		venus = (venus - 9) % 360;
		tierra= (tierra - 8) % 360;
		mars = (mars - 7) % 360;
		jupiter = (jupiter - 6) % 360;
		saturno = (saturno - 5) % 360;
		uranus = (uranus - 4) % 360;
		neptune= (neptune - 3) % 360;
		tierra = (tierra - 2) % 360;
		moon = (moon - 1) % 360;

		dwLastUpdateTime = dwCurrentTime;
	}

	glutPostRedisplay();
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

	// Tipo de Vista
	
	glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	//glLoadIdentity();
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {
		case 'w':   //Movimientos de camara
		case 'W':
			camaraZ +=0.5f;
			break;
		case 's':
		case 'S':
			camaraZ -=0.5f;
			break;
		case 'a':
		case 'A':
			camaraX -= 0.5f;
			break;
		case 'd':
		case 'D':
			camaraX += 0.5f;
			break;

		case 'i':		//Movimientos de Luz
		case 'I':
			
			break;
		case 'k':
		case 'K':
			
			break;

		case 'l':   //Activamos/desactivamos luz
		case 'L':
			break;
		case 27:        // Cuando Esc es presionado...
			exit ( 0 );   // Salimos del programa
			break;        
		default:        // Cualquier otra
			break;
  }
	glutPostRedisplay();
}

void arrow_keys ( int a_keys, int x, int y )  // Funcion para manejo de teclas especiales (arrow keys)
{
  switch ( a_keys ) {
    case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...
		
		break;
    case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...
		
		break;
	case GLUT_KEY_LEFT:
		
		break;
	case GLUT_KEY_RIGHT:
		
		break;
    default:
      break;
  }
  glutPostRedisplay();
}


int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (20, 60);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 6"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut función de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutIdleFunc		  ( animacion );
  glutMainLoop        ( );          // 

  return 0;
}