.386

include Globals.inc
.code

logic proc
    ;Move Right if key is pressed
    mov         esi,esp  
    push        44h  
    call        IsKeyDown
    add         esp,4  
    movzx       eax,al  
    test        eax,eax  
    je          @F
    mov         eax, dword ptr sPlayer.x
    cmp         eax ,177h  
    jge         @F

    mov         eax, dword ptr sPlayer.x
    inc         eax 
    mov         [sPlayer.x], eax
    @@:
    ;Mov left if key is pressed
    mov         esi,esp  
    push        41h  
    call        IsKeyDown
    add         esp,4  
    movzx       eax,al  
    test        eax,eax  
    je          @F
    mov         eax, dword ptr sPlayer.x
    cmp         eax ,0h  
    jle         @F

    mov         eax, dword ptr sPlayer.x
    dec         eax  
    mov         [sPlayer.x], eax
    @@:
    ;Mov down if key is pressed
    mov         esi,esp  
    push        53h  
    call        IsKeyDown
    add         esp,4  
    movzx       eax,al  
    test        eax,eax  
    je          @F
    mov         eax, dword ptr sPlayer.y
    cmp         eax ,177h  
    jge         @F

    mov         eax, dword ptr sPlayer.y
    inc         eax 
    mov         [sPlayer.y], eax
    @@:
    ;Mov up if key is pressed
    mov         esi,esp  
    push        57h  
    call        IsKeyDown
    add         esp,4  
    movzx       eax,al  
    test        eax,eax  
    je          @F
    mov         eax, dword ptr sPlayer.y
    cmp         eax ,0h  
    jle         @F

    mov         eax, dword ptr sPlayer.y
    dec         eax  
    mov         [sPlayer.y], eax
    @@:
    ret
logic endp