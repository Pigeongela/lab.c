#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include "bmp.h"
#define WIN32_MEAN_AND_LEAN

int main() {
	read("file_1.bmp", "file_2.bmp", "file_out.bmp");
	return 0;
}