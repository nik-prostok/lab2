#include <stdio.h>
#include <stdlib.h>
#include "transmissionChannel.h"

void test1();
void test2();
void test3();
void test4();
void test5();
void test6();
void printStruct(str structV, int size);
void printMas( unsigned short mas[], int size);

int main()
{
    // test1();
    //test2();
    // test3();
    // test4();
    // test5();
    test6();
    return 0;
}


void test1(){

    int configd = 9;
    int n_gr_bvu = 1;
    str structV[3] = {};
    zapros_ad = 0x200;
    zapros__giv = 0x4000;
    unsigned short to_ad[27] = {0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27};
    unsigned short to_giv[10] = {0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0x10};
    szoad_1f = 0x3;
    szogiv_1f = 0x4;

    printf("test1 started: configd = %d; n_gr_bvu = %d; zapros_ad = %x; zapros__giv = %x\n", configd, n_gr_bvu, zapros_ad, zapros__giv);
    printf("szoad_1f = %x; szogiv_1f = %x;\n", szoad_1f, szogiv_1f);

    printf("send started\n");
    printf("to_ad:\n");
    printMas(to_ad, 27);
    printf("to_giv:\n");
    printMas(to_giv, 10);
    send(configd,  n_gr_bvu, structV, to_ad, to_giv);
   
    printf("struct[0]\n");
	printStruct(structV[0], 27);
	printf("struct[1]\n");
	printStruct(structV[1], 10);
	printf("struct[2]\n");
	printStruct(structV[2], 10);
    printf("test1 finished\n");

}

void test2(){

    int configd = 9;
    int n_gr_bvu = 1;
    str structV[3] = {};
    zapros_ad = 0x656;
    zapros__giv = 0x764;
    unsigned short to_ad[27] = {0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27};
    unsigned short to_giv[10] = {0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0x10};
    szoad_1f = 0x3;
    szogiv_1f = 0x4;

    printf("test2 started: configd = %d; n_gr_bvu = %d; zapros_ad = %x; zapros__giv = %x\n", configd, n_gr_bvu, zapros_ad, zapros__giv);
    printf("szoad_1f = %x; szogiv_1f = %x;\n", szoad_1f, szogiv_1f);

    printf("send started\n");
    printf("to_ad:\n");
    printMas(to_ad, 27);
    printf("to_giv:\n");
    printMas(to_giv, 10);
    send(configd,  n_gr_bvu, structV, to_ad, to_giv);

    printf("struct[0]\n");
    printStruct(structV[0], 27);
    printf("struct[1]\n");
    printStruct(structV[1], 10);
    printf("struct[2]\n");
    printStruct(structV[2], 10);
    printf("test2 finished\n");

}


void test3(){

    int configd = 9;
    int n_gr_bvu = 2;
    str structV[3] = {};
    zapros_ad = 0x200;
    zapros__giv = 0x4000;
    unsigned short to_ad[27] = {0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27};
    unsigned short to_giv[10] = {0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0x10};
    szoad_1f = 0x3;
    szogiv_1f = 0x4;

    printf("test3 started: configd = %d; n_gr_bvu = %d; zapros_ad = %x; zapros__giv = %x\n", configd, n_gr_bvu, zapros_ad, zapros__giv);
    printf("szoad_1f = %x; szogiv_1f = %x;\n", szoad_1f, szogiv_1f);

    printf("send started\n");
    printf("to_ad:\n");
    printMas(to_ad, 27);
    printf("to_giv:\n");
    printMas(to_giv, 10);
    send(configd,  n_gr_bvu, structV, to_ad, to_giv);

    printf("struct[0]\n");
    printStruct(structV[0], 27);
    printf("struct[1]\n");
    printStruct(structV[1], 10);
    printf("struct[2]\n");
    printStruct(structV[2], 10);
    printf("test3 finished\n");

}


void test4(){

    zapros_ad = 0x1E00;
    zapros__giv = 0x8000;

    unsigned short from_ad_dr[18] = {0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18};
    unsigned short from_giv_dr[28] = {0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28};
    str structV[3] = {};
    szogiv_2f = 0x0;
    szoad_2f = 0x0;

    from_ad_dr[18] = DKS(from_ad_dr, 18);
    from_giv_dr[28] = DKS(from_giv_dr, 28);

    printf("test4 started: zapros_ad = %x; zapros__giv = %x\n", zapros_ad, zapros__giv);
    printf("szogiv_2f = %x; szoad_2f = %x;\n", szogiv_2f, szoad_2f);
    printf("from_ad_dr:\n");
    printMas(from_ad_dr, 18);
    printf("from_giv_dr:\n");
    printMas(from_giv_dr, 28);

    printf("receive started\n");
    printf("from_ad_dr:\n");
    printMas(from_ad_dr, 19);
    printf("from_giv_dr:\n");
    printMas(from_giv_dr, 29);
    receive(structV,  from_ad_dr, from_giv_dr);

   
    printf("struct[0]\n");
	printStruct(structV[0], 19);
	printf("struct[1]\n");
	printStruct(structV[1], 29);
	printf("struct[2]\n");
	printStruct(structV[2], 30);


	printf("from_ad_dr:\n");
    printMas(from_ad_dr, 18);
    printf("from_sti:\n");
    printMas(from_giv_dr, 28);
    printf("test4 finished\n");

}


void test5(){

    zapros_ad = 0x1E00;
    zapros__giv = 0x8000;

    unsigned short from_ad_dr[18] = {0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18};
    unsigned short from_giv_dr[28] = {0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28};
    str structV[3] = {};
    szogiv_2f = 0x0;
    szoad_2f = 0x0;

    from_ad_dr[18] = 6;
    from_giv_dr[28] = 5;

    printf("test5 started: zapros_ad = %x; zapros__giv = %x\n", zapros_ad, zapros__giv);
    printf("szogiv_2f = %x; szoad_2f = %x;\n", szogiv_2f, szoad_2f);
    printf("from_ad_dr:\n");
    printMas(from_ad_dr, 18);
    printf("from_giv_dr:\n");
    printMas(from_giv_dr, 28);

    printf("receive started\n");
    printf("from_ad_dr:\n");
    printMas(from_ad_dr, 19);
    printf("from_giv_dr:\n");
    printMas(from_giv_dr, 29);
    receive(structV,  from_ad_dr, from_giv_dr);


    printf("struct[0]\n");
    printStruct(structV[0], 19);
    printf("struct[1]\n");
    printStruct(structV[1], 29);
    printf("struct[2]\n");
    printStruct(structV[2], 30);


    printf("from_ad_dr:\n");
    printMas(from_ad_dr, 18);
    printf("from_sti:\n");
    printMas(from_giv_dr, 28);
    printf("test5 finished\n");

}

void test6(){

    zapros_ad = 0x5454;
    zapros__giv = 0x3232;

    unsigned short from_ad_dr[18] = {0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18};
    unsigned short from_giv_dr[28] = {0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28};
    str structV[3] = {};
    szogiv_2f = 0x0;
    szoad_2f = 0x0;

    from_ad_dr[18] = DKS(from_ad_dr, 18);
    from_giv_dr[28] = DKS(from_giv_dr, 28);

    printf("test6 started: zapros_ad = %x; zapros__giv = %x\n", zapros_ad, zapros__giv);
    printf("szogiv_2f = %x; szoad_2f = %x;\n", szogiv_2f, szoad_2f);
    printf("from_ad_dr:\n");
    printMas(from_ad_dr, 18);
    printf("from_giv_dr:\n");
    printMas(from_giv_dr, 28);

    printf("receive started\n");
    printf("from_ad_dr:\n");
    printMas(from_ad_dr, 19);
    printf("from_giv_dr:\n");
    printMas(from_giv_dr, 29);
    receive(structV,  from_ad_dr, from_giv_dr);


    printf("struct[0]\n");
    printStruct(structV[0], 19);
    printf("struct[1]\n");
    printStruct(structV[1], 29);
    printf("struct[2]\n");
    printStruct(structV[2], 30);


    printf("from_ad_dr:\n");
    printMas(from_ad_dr, 18);
    printf("from_sti:\n");
    printMas(from_giv_dr, 28);
    printf("test6 finished\n");

}

void printMas( unsigned short mas[], int size){
	int i = 0;

	for(i = 0; i<size; i++){
		printf("[%d] = %x", i, mas[i]);
	}
	printf("\n");
}


void printStruct(str structV, int size){
	int i = 0;

	printf("KC = %x\n", structV.KC);
	if(structV.KC != 0 ){
		printf("ptr_mass");
		for(i = 0; i<size; i++){
			printf(" [%d] = %x", i,  structV.ptr_mass[i]);
		}
		printf("\n ptr_SZO = %x\n", *structV.ptr_SZO);
	}

}
