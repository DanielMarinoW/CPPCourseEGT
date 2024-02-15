#include "Shapes.h"

void Shapes::drawRectangle(SDL_Renderer* renderer, int x, int y, int width, int height, int thickness)
{

    SDL_Rect topRect = { x, y, width, thickness };  //top left corner position (x,y)
    SDL_RenderFillRect(renderer, &topRect); //draw filled top line of the rectangle

    SDL_Rect bottomRect = { x, y + height - thickness, width, thickness }; //calculated to ensure the rectangle is positioned at the bottom of the specified height with the same width and thickness like the top.
    SDL_RenderFillRect(renderer, &bottomRect);

    SDL_Rect leftRect = { x, y, thickness, height }; //same as top line but for height not for width (left line of the rectangle)
    SDL_RenderFillRect(renderer, &leftRect);

    SDL_Rect rightRect = { x + width - thickness, y, thickness, height };   //same as left, but flipped to be the right line
    SDL_RenderFillRect(renderer, &rightRect);
}