EXTERN InitWindow :PROC
EXTERN SetTargetFPS :PROC
EXTERN WindowShouldClose :PROC
EXTERN ClearBackground :PROC
EXTERN BeginDrawing :PROC
EXTERN DrawRectangle :PROC
EXTERN EndDrawing :PROC
EXTERN CloseWindow :PROC
EXTERN IsKeyDown :PROC
EXTERN SetWindowState :PROC

.data
Color STRUCT
    r BYTE ?
    g BYTE ?
    b BYTE ?
    a BYTE ?
Color ENDS
ColBG Color <255, 0,   0, 255>
ColREC Color <  0, 0, 255, 255>
WinTitle BYTE "Hello World!",0

Player STRUCT
    x DWORD ?
    y DWORD ?
Player ENDS

sPlayer Player <103,107>