.386
.model flat,stdcall
.stack 4096
ExitProcess proto,dwExitCode:dword

include logic.inc
include draw.inc
include setup.inc

.data
.code
main proc
    call setup
    whilestart:
    call WindowShouldClose 
    movzx eax,al  
    test eax,eax  
    jne whileexit
        call logic
        call draw
    jmp whilestart
    whileexit:

    call CloseWindow
    invoke ExitProcess,0

main endp
end main