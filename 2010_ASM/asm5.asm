; asm5.asm - ������ ����� ���� ����

segment  .text
    global  _asm_main

_asm_main:

    push    2
    push    1
    call    sum1    ; push ���ƿ� �ּ�
                    ; jmp sum1
;    add     esp, 8  ; ȣ����(caller) �ı�,


    ret

sum1:
    mov     eax, DWORD [esp+4]  ; 1
    add     eax, DWORD [esp+8]  ; 2
    ret     8     ; �������� ���ư� �ּҰ� �ִ�.



















;
