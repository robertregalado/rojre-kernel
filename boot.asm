BITS 16
ORG 0x7C00

mov ah, 0x0E
mov al, 'H'
int 0x10
mov al, 'i'
int 0x10

jmp $

TIMES 510 - ($-$$) db 0
DW 0xAA55
