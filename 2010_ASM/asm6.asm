; asm6.asm - Stack Frame

segment  .text
    global  _asm_main

_asm_main:

    push    2
    push    1
    call    sum1
    add     esp, 8
    ret

sum1:
    push    ebp
    mov     ebp, esp
    ;push    100
    mov     eax, DWORD [ebp+8]  ; 1
    add     eax, DWORD [ebp+12]  ; 2

    pop     ebp
    ret     0

; [ebp+8]  : �Լ��� 1��° ����
; [ebp+12] : �Լ��� 2��° ����




















;
