#pragma once
#include <string>
#include <SDL2/SDL.h>

using std::string;

class Window{
  
  int width;
  int height;
  SDL_Window* sdl_window = NULL;
  SDL_Surface* sdl_surface = NULL;
  string title;
  int initStatus;
  
  void initialize(){
    initStatus = SDL_Init(SDL_INIT_VIDEO);
  }
  
public:
  Window(int, int, string);
  bool isValid();
  SDL_Surface* surface();
  void update();
  bool couldInitialize();
};
