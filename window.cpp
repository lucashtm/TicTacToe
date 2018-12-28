#include "window.h"
#include <stdio.h>

Window::Window(int width, int height, string title){
  this->width = width;
  this->height = height;
  this->title = title;
  this->initialize();
  this->sdl_window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
  this->sdl_surface = SDL_GetWindowSurface(this->sdl_window);
}

bool Window::isValid(){
  return this->sdl_window != NULL;
}

SDL_Surface* Window::surface(){
  return this->sdl_surface;
}

void Window::update(){
  SDL_UpdateWindowSurface(this->sdl_window);
}

bool Window::couldInitialize(){
  return this->initStatus >= 0;
}
