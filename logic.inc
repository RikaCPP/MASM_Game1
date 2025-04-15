.386

include Globals.inc
.code

logic proc
        mov         esi,esp  
        push        44h  
        call        IsKeyDown
        add         esp,4  
        movzx       eax,al  
        test        eax,eax  
        je          XINXexit
        mov         eax, dword ptr sPlayer.x
        cmp         eax ,177h  
        jge         XINXexit

        mov         eax, dword ptr sPlayer.x
        inc         eax 
        mov         [sPlayer.x], eax
        XINXexit:
        mov         esi,esp  
        push        41h  
        call        IsKeyDown
        add         esp,4  
        movzx       eax,al  
        test        eax,eax  
        je          XDECexit
        mov         eax, dword ptr sPlayer.x
        cmp         eax ,0h  
        jle         XDECexit

        mov         eax, dword ptr sPlayer.x
        dec         eax  
        mov         [sPlayer.x], eax
        XDECexit:
        mov         esi,esp  
        push        53h  
        call        IsKeyDown
        add         esp,4  
        movzx       eax,al  
        test        eax,eax  
        je          YINXexit
        mov         eax, dword ptr sPlayer.y
        cmp         eax ,177h  
        jge         YINXexit

        mov         eax, dword ptr sPlayer.y
        inc         eax 
        mov         [sPlayer.y], eax
        YINXexit:
        mov         esi,esp  
        push        57h  
        call        IsKeyDown
        add         esp,4  
        movzx       eax,al  
        test        eax,eax  
        je          YDECexit
        mov         eax, dword ptr sPlayer.y
        cmp         eax ,0h  
        jle         YDECexit

        mov         eax, dword ptr sPlayer.y
        dec         eax  
        mov         [sPlayer.y], eax
        YDECexit:
 ret
logic endp