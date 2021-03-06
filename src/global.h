#ifndef GLOBALS_H_
#define GLOBALS_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include <GL/glew.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_opengl.h>

#include <cglm/cglm.h>
#include "gl_utils.h"

#define DEBUG_BUILD

enum RENDER_LAYERS {RNDR_BACKGROUND = 0, RNDR_LEVEL = 5, RNDR_ENTITY = 20, RNDR_UI = 30, RNDR_TEXT = 40};

extern int SCREEN_WIDTH;
extern int SCREEN_HEIGHT;
extern SDL_Window *window;

extern bool running;
extern float deltatime;
extern int target_framerate;

void Quit();

#include "bundle.h"
extern Bundle app;

#endif