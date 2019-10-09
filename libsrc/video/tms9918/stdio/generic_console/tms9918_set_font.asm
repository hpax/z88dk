
        SECTION code_clib
        PUBLIC  __tms9918_set_font

        EXTERN  generic_console_font32
        EXTERN  generic_console_udg32
        EXTERN  LDIRVM

__tms9918_set_font:
        ; TODO: First 32 characters aren't set
        push    ix
        ld      hl,(generic_console_font32)
        ld      de, $2000 + 256
        ld      bc, 768                        ;96 characters
        ld      a,h
        or      l
        call    nz,LDIRVM
        ld      hl,(generic_console_udg32)
        ld      de, $2000 + 1024
        ld      bc, 1024                ;128 characters
        ld      a,h
        or      l
        call    nz,LDIRVM
        pop     ix
        ret
