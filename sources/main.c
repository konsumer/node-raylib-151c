#include "raylib.h"

int main(void)
{
    InitWindow(300, 300, "Image Draw Test");
    SetTargetFPS(60);

    Image MapImage = GenImageColor(200, 200, RED);

    Rectangle rect = {50,10,10,5};

    ImageDrawPixel(&MapImage, 5, 5, YELLOW);
    ImageDrawRectangle(&MapImage, 10, 10, 10, 10, GREEN);
    ImageDrawCircle(&MapImage, 50, 50, 10, PINK);
    ImageDrawRectangleLines(&MapImage, rect, 1, BLUE);

    Texture MapTexture = LoadTextureFromImage(MapImage);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);

        DrawTexture(MapTexture, 50, 50, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
