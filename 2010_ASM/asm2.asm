; asm2.asm

segment .data
; �������� ����� ��
L1   DD  100        ; int L1 = 100

segment .text

    global _asm_main

_asm_main:
    mov  DWORD [L1], 200  ; WORD, BYTE
    mov  eax, DWORD [L1] ; return 100
                   ; L1 �ּ�, [L1] : ��.  *L1
    ret
