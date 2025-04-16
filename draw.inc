.386

include Globals.inc
.code

draw proc
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
        ret
draw endp