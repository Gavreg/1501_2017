

#include "Render.h"

#include <windows.h>
#include <GL\GL.h>
#include <GL\GLU.h>
#include <math.h>



void Render()   //void - функция не возвращает ничего, как процедура в паскале
{    



}   



/*
// типы данных:
int   -  целое
float, double   - с точкой  

Функция в С/С++:                              Аналог в Pascal

	int Render()                              function Render ():integer;
	{                                         begin
	 
	 return(1);                                   Render := 1;
	}                                         end;



Пример функции, которая выдает наибольшее из трех чисел

int  Max(int a, int b, int c)                                           Условия в С/С++
{
	if (a>b)															if (условие)           
		if (a>c)														{
			return(a);														действия...
		else                                                            }
			return(c);                                                  else
	else                                                                {
		if (b>c)															действия...
			return (b);                                                 }
		else
			return (c);


цикл в с++:

1)
while (условие)
{
	тело цикла
}


2)

do
{
	тело цикла
}
while(условие);


3) 
     int i;
	 for (i=0; i<20; ++i)      цикл по i, менябшее значение от 0 до 19, увеличиваясь каждый раз на 1 (++i тоже самое что и i=i+1)
	 {
		тело
	 }

Функции Open GL:

glBegin(ТИП_ФИГУРЫ);      GL_LINES   GL_TRIANGLES   GL_QUADS

glColor3d(float R, float G, float B);

glVertex3d(int X, int Y, int Z);

glEnd();




}
*/


