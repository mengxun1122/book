assume cs:codesg,ds:datasg

datasg segment
    db 'ibm             '
    db 'dec             '
    db 'dos             '
    db 'vax             '
datasg ends

codesg segment
    start: mov ax,datasg
           mov ds,ax
	   mov cx,4
	   mov si,3
	   mov bx,0

       s:  mov cx,3
           mov si,0
       s0: mov al,[bx+si]
	   and al,11011111b
	   mov [bx+si],al
	   inc si
           loop s0
	   add bx,16
	   loop s

	   mov ax,4c00h
	   int 21h
           
codesg ends

end start
