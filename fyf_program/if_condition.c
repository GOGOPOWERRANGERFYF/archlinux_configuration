#include <stdio.h>
int main(void) {
	int i = 0, j = 0;
	// ALU(arithmetic logic unit) ==> flag
	// 状态寄存器(status register)
	// zero flag
	// carry flag
	// negative fag
	// overflow flag
	// sign flag
	//
	// immediate 立即
	//
	// 跳转指令
	// jmp (jump) 先跳转到cmpl机器码地址
	//
	// branch less than
	// 关系运算,通过flag标志的值来判断
	// cmpl (compare less than),通过做减法来对比
	// negative(位)标志
	//
	// 零标志,ZF(zero flag)
	// 例如: 1-1=0,ZF=0
	//
	// jle (jump if less that equal),如果ZF=0,跳转到循环体内的机器码地址
	while (i < 5) {
		i++;	
	}
	return 0;
}
//0000000000000000 <main>:
//   0:	55                   	push   %rbp
//   1:	48 89 e5             	mov    %rsp,%rbp
//   4:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%rbp)
//   b:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
//  12:	eb 04                	jmp    18 <main+0x18>
//  14:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
//  18:	83 7d f8 05          	cmpl   $0x5,-0x8(%rbp)
//  1c:	7e f6                	jle    14 <main+0x14>
//  1e:	b8 00 00 00 00       	mov    $0x0,%eax
//  23:	5d                   	pop    %rbp
//  24:	c3                   	ret    
// 通过上面的汇编指令分析:
// push 压栈 指令地址寄存器(程序计数器)的指令地址(跳转完成后要返回的指令地址)保存(是不是保存在栈中有待确认)
// 栈顶指向栈底	小端CPU,低字节存储在低地址	栈由高地址向低地址扩展
// 由addl(l表示32位)指令得知(循环体代码的指令),-0x8地址入栈的是变量i
// cmpl 通过负数标记(negative flag属于状态寄存器,与ALU相连),两个操作数通过加法器进行减法运算,判断结果是否为负数
//
