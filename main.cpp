#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#include "window.h"

using std::cout;
using std::endl;
using std::string;

int main(int argc, char* args[]){
  Window w(500, 500, "Vai caraio");
  if(!w.couldInitialize()){
    printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    return 1;
  }
  if(!w.isValid()){
    printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
    return 1;
  }
  SDL_FillRect( w.surface(), NULL, SDL_MapRGB( w.surface()->format, 0xFF, 0xFF, 0xFF ) );
  w.update();
  SDL_Delay(5000);
  return 0;
}
