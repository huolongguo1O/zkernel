#ifndef time_H
#define time_H
typedef long time_t;
int time(){
    asm("rdtsc");
    asm("shl rdx,32");
    asm("or rax,rdx");
    asm("eax,rdx");
} 
#endif
// 不具有普遍性，只适用于x86架构，只能用于32位系统，只能使用msvc编译
