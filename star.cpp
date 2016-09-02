#include <stdio.h>

char star[] = "*";
char blank[] = " ";
char nl[] = "\n";
char com[] = "≥Ù¿Ã : ";
char format[] = "%d";

int main()
{
	int n;

	__asm
	{
		mov eax, offset com
		push eax
		call printf
		add esp, 4

		lea eax, n
		push eax
		mov eax, offset format
		push eax
		call scanf
		add esp, 8

		sub esp, 24
		mov DWORD PTR [esp+24], 0 //buf2
		mov DWORD PTR [esp+20], 0 //buf
		mov eax, DWORD PTR[n]
		mov DWORD PTR [esp+16], eax //n
		mov DWORD PTR [esp+12], 0 //i
		mov DWORD PTR [esp+8], 0  //j
		mov DWORD PTR [esp+4], 0  //k

loop1:
		mov eax, DWORD PTR[esp+16]
		cmp DWORD PTR[esp+12], eax
		jge end_loop1

		mov DWORD PTR[esp+8], 0
		mov eax, DWORD PTR[esp+16]
		imul eax, 2
		sub eax, DWORD PTR[esp+12]
		mov DWORD PTR[esp+20], eax
loop2:
		mov eax, DWORD PTR[esp+20]
		cmp DWORD PTR[esp+8], eax
		jge end_loop2
		mov eax, offset blank
		push eax
		call printf
		add esp, 4
		add DWORD PTR[esp+8], 1
		jmp loop2
end_loop2:
		mov DWORD PTR[esp+4], 1
		mov eax, DWORD PTR[esp+12]
		imul eax, 2
		add eax, 1
		mov DWORD PTR[esp+20], eax
loop3:
		mov eax, DWORD PTR[esp+20]
		cmp DWORD PTR[esp+4], eax
		jg end_loop3
		mov eax, offset star
		push eax
		call printf
		add esp, 4
		add DWORD PTR[esp+4], 1
		jmp loop3
end_loop3:
		mov eax, offset nl
		push eax
		call printf
		add esp, 4
		add DWORD PTR[esp+12], 1
		jmp loop1
end_loop1:

		mov DWORD PTR[esp+12], 0
		mov eax, DWORD PTR[esp+16]
		mov ebx, 2
		sub edx, edx
		idiv ebx
		mov DWORD PTR[esp+20], eax
		add DWORD PTR[esp+20], 1
loop1_2:
		mov eax, DWORD PTR[esp+20]
		cmp DWORD PTR[esp+12], eax
		jge end_loop1_2
		mov DWORD PTR[esp+8], 0
loop2_2:
		mov eax, DWORD PTR[esp+12]
		cmp DWORD PTR[esp+8], eax
		jge end_loop2_2
		mov eax, offset blank
		push eax
		call printf
		add esp, 4
		add DWORD PTR[esp+8], 1
		jmp loop2_2
end_loop2_2:
		mov DWORD PTR[esp+4], 0
		mov eax, DWORD PTR[esp+16]
		imul eax, 4
		mov DWORD PTR[esp+24], eax
		mov eax, DWORD PTR[esp+12]
		imul eax, 2
		sub DWORD PTR[esp+24], eax
loop3_2:
		mov eax, DWORD PTR[esp+24]
		cmp DWORD PTR[esp+4], eax
		jg end_loop3_2
		mov eax, offset star
		push eax
		call printf
		add esp, 4
		add DWORD PTR[esp+4], 1
		jmp loop3_2
end_loop3_2:
		mov eax, offset nl
		push eax
		call printf
		add esp, 4
		add DWORD PTR[esp+12], 1
		jmp loop1_2
end_loop1_2:

		mov eax, DWORD PTR[esp+16]
		mov ebx, 2
		sub edx, edx
		idiv ebx
		mov DWORD PTR[esp+12], eax
		add DWORD PTR[esp+12], 1
loop1_3:
		cmp DWORD PTR[esp+12], 0
		jl end_loop1_3
		mov DWORD PTR[esp+8], 0
loop2_3:
		mov eax, DWORD PTR[esp+12]
		cmp DWORD PTR[esp+8], eax
		jge end_loop2_3
		mov eax, offset blank
		push eax
		call printf
		add esp, 4
		add DWORD PTR[esp+8], 1
		jmp loop2_3
end_loop2_3:
		mov DWORD PTR[esp+4], 0
		mov eax, DWORD PTR[esp+16]
		imul eax, 4
		mov ebx, DWORD PTR[esp+12]
		imul ebx, 2
		sub eax, ebx
		mov DWORD PTR[esp+20], eax
loop3_3:
		mov eax, DWORD PTR[esp+20]
		cmp DWORD PTR[esp+4], eax
		jg end_loop3_3
		mov eax, offset star
		push eax
		call printf
		add esp, 4
		add DWORD PTR[esp+4], 1
		jmp loop3_3
end_loop3_3:
		mov eax, offset nl
		push eax
		call printf
		add esp, 4
		sub DWORD PTR[esp+12], 1
		jmp loop1_3
end_loop1_3:
		
		mov eax, DWORD PTR[esp+16]
		sub eax, 1
		mov DWORD PTR[esp+12], eax
loop1_4:
		cmp DWORD PTR[esp+12], 0
		jl end_loop1_4
		mov DWORD PTR[esp+8], 0
		mov eax, DWORD PTR[esp+16]
		imul eax, 2
		sub eax, DWORD PTR[esp+12]
		mov DWORD PTR[esp+20], eax
loop2_4:
		mov eax, DWORD PTR[esp+20]
		cmp DWORD PTR[esp+8], eax
		jge end_loop2_4
		mov eax, offset blank
		push eax
		call printf
		add esp, 4
		add DWORD PTR[esp+8], 1
		jmp loop2_4
end_loop2_4:
		mov DWORD PTR[esp+4], 1
		mov eax, DWORD PTR[esp+12]
		imul eax, 2
		add eax, 1
		mov DWORD PTR[esp+20], eax
loop3_4:
		mov eax, DWORD PTR[esp+20]
		cmp DWORD PTR[esp+4], eax
		jg end_loop3_4
		mov eax, offset star
		push eax
		call printf
		add esp, 4
		add DWORD PTR[esp+4], 1
		jmp loop3_4
end_loop3_4:
		mov eax, offset nl
		push eax
		call printf
		add esp, 4
		sub DWORD PTR[esp+12], 1
		jmp loop1_4
end_loop1_4:

		add esp, 24
	}

	getchar();
	getchar();

	return 0;
}