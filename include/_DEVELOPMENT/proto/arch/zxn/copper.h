include(__link__.m4)

#ifndef __COPPER_H__
#define __COPPER_H__

// copper instruction macros
// all 16-bit

#define CU_WAIT(ver,hor)  ((unsigned int)((((ver) & 0xff) << 8) + 0x80 + (((hor) & 0x3f) << 1) + (((ver) & 0x100) >> 8)))
#define CU_MOVE(reg,val)  ((unsigned int)((((val) & 0xff) << 8) + ((reg) & 0x7f)))
#define CU_NOP            ((unsigned int)0x0000)
#define CU_STOP           ((unsigned int)0xffff)

#endif
