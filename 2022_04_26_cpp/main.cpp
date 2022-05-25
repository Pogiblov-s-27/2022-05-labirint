/*
 * main.cpp
 *
 * 1. Лабиринт на прямоугольной сетке. Пусть из файла грузится
 * 2. Объект двигается по лабиринту
 * 3. Оформлена отрисовка
 */

#include "Map.h"
#include "Window.h"

int main(int, char **)
{
	SDL_Init(SDL_INIT_EVERYTHING);

	Window w {1280, 920};

	w.main_loop();

	return 0;
}
