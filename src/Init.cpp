#include "Init.h"

Init::Init()
{
  // Set window title
  set_window_title("Error");

  // Set screen mode
  if(false == true){
    resDiv = 1;
    if(set_gfx_mode( GFX_AUTODETECT_FULLSCREEN, 1280, 960, 0, 0) !=0){
      resDiv = 2;
      if(set_gfx_mode( GFX_AUTODETECT_FULLSCREEN, 640, 480, 0, 0) !=0){
        resDiv = 4;
        if(set_gfx_mode( GFX_AUTODETECT_FULLSCREEN, 320, 240, 0, 0) !=0){
          set_gfx_mode(GFX_TEXT, 0, 0, 0, 0);
          allegro_message("Unable to go into fullscreen graphic mode\n%s\n", allegro_error);
          exit(1);
        }
      }
    }
  }
  else{
    resDiv = 1;
    if(set_gfx_mode( GFX_AUTODETECT_WINDOWED, 1280, 960, 0, 0) !=0){
      resDiv = 2;
      if(set_gfx_mode( GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0) !=0){
        resDiv = 4;
        if(set_gfx_mode( GFX_AUTODETECT_WINDOWED, 320, 240, 0, 0) !=0){
          set_gfx_mode(GFX_TEXT, 0, 0, 0, 0);
          allegro_message("Unable to set any windowed graphic mode\n%s\n", allegro_error);
          exit(1);
        }
      }
    }
  }

  set_window_title("Tile Engine");
}

void Init::update()
{
  // Change to splash screen
  set_next_state(STATE_MENU);
}

void Init::draw()
{

}

Init::~Init()
{

}
