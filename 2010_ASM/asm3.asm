;asm3.asm

segment .text
    global _asm_main
_asm_main:

    ; �ٸ� �Լ� foo ȣ��
    ; mov     ebx, AAA
    ; push    AAA     ; ���ÿ� ���ƿ� �ּҸ� �ִ´�.
    ; jmp     foo
;AAA:
    call    foo
    ret

foo:
    mov     eax, 300
    ;pop     ebx    ; ���ÿ��� ������ ebx�� �ֱ�
    ;jmp     ebx

    ret











;
