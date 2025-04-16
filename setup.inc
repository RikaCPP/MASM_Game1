.386

include Globals.inc
.code

setup proc
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
	ret
setup endp