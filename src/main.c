// VSCode設定
//   https://creating-homepage.com/archives/8653
//     Editor: Insert Spaces
//     Editor: Tab Size
//   https://atmarkit.itmedia.co.jp/ait/articles/1809/14/news025.html
//     files:eol
//   https://www.javadrive.jp/vscode/setting/index4.html
//     files:Encoding
//
// https://www.javadrive.jp/cstart/install/index6.html
//    MinGW-W64-builds  https://www.mingw-w64.org/downloads/#mingw-w64-builds
//        https://github.com/niXman/mingw-builds-binaries/releases
//            x86_64-14.2.0-release-posix-seh-ucrt-rt_v12-rev0.7z
//            mv mingw64 C:\mingw64
//            setx PATH "%PATH%;C:\mingw64\bin"
//
// https://qiita.com/OcoToOo/items/f1d0a125327f5659ad52
//    c_cpp_properties.json

#include <stdio.h>
#include "../private/main.h"

/** メイン関数 **/
VD main_function(VD)
{
	U8 u8_val = 0x123456789ABCDEF0UL;
	S8 s8_val = 0xFEDCBA9876543210L;
	U4 u4_val = 0x1A2B3C4DU;
	S4 s4_val = 0x87654321;
	U2 u2_val = 0x1A2BU;
	S2 s2_val = 0xDCBA;
	U1 u1_val = 0x1AU;
	C1 c1_val = 0xBA;
	VD *pvd_val = &u1_val;
	U8 *pu8_val = &u8_val;
	U4 *pu4_val = &u4_val;

	printf("U8: 0x%llX\n", u8_val);
	printf("S8: 0x%llX\n", s8_val);
	printf("U4: 0x%lX\n", u4_val);
	printf("S4: 0x%lX\n", s4_val);
	printf("U2: 0x%X\n", u2_val);
	printf("S2: 0x%X\n", s2_val);
	printf("U1: 0x%X\n", u1_val);
	printf("C1: 0x%X\n", c1_val);
	printf("Pointer VD: 0x%p\n", pvd_val);
	printf("Pointer U4: 0x%p\n", pu4_val);
	printf("Pointer U8: 0x%p\n", pu8_val);
}

int main(void) {
	main_function();
	return 0;
}