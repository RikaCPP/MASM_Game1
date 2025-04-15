.386

.model flat,stdcall
.stack 4096
ExitProcess proto,dwExitCode:dword

include logic.inc

.data


.code
main proc
    push offset WinTitle
    push 400
    push 400
    call InitWindow
    add esp, 12

    mov         esi,esp  
    push        40h  
    call        SetWindowState 
    add         esp,4  

    push 60
    call SetTargetFPS
    add esp, 4
    whilestart:
    call WindowShouldClose 
    movzx eax,al  
    test eax,eax  
    jne whileexit
        call logic
        mov         esi,esp  
        mov         eax,dword ptr ColBG  
        push        eax
        call        ClearBackground
        add         esp,4    
        call BeginDrawing

        mov         esi,esp  
        mov         eax,dword ptr ColREC
        push        eax  

        push        25  

        push        25  
        mov         eax,dword ptr sPlayer.y 
        push        eax  
        mov         ecx,dword ptr sPlayer.x 
        push        ecx  
        call        DrawRectangle
        add         esp,14h  
        call EndDrawing
    jmp whilestart
    whileexit:

    call CloseWindow
    invoke ExitProcess,0



main endp
end main