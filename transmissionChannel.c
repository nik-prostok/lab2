#include <stdio.h>
#include <stdlib.h>
#include "transmissionChannel.h"

unsigned short zapros_ad = 0;
unsigned short zapros__giv = 0;

unsigned short szoad_1f = 0;
unsigned short szogiv_2f = 0;

unsigned short szoad_2f = 0;
unsigned short szogiv_1f = 0;

unsigned short  to_ad_dr[27] = {};
unsigned short  to_giv_dr[10] = {};

unsigned short  from_ad[18] = {};
unsigned short  from_giv[28] = {};

unsigned short DKS(unsigned short mas[], int size);
void copyMas(unsigned short target[], unsigned short value[], int size);

void send(int configd, int n_gr_bvu, str strMas[3], unsigned short to_ad[27],  unsigned short to_giv[10]){
    int i = 0;
    int n_ved = 0;



    if((configd & 0xf) == 9)
        n_ved = 1;
	else if((configd & 0xf0) == 0x90)
        n_ved = 2;
    else if((configd & 0xf00) == 0x900)
        n_ved = 3;
    else if((configd & 0xf000) == 0x9000)
        n_ved = 4;

    if(n_gr_bvu == n_ved){

		if(((zapros_ad & 0x1E00) >> 8) == 0x2){
		    printf("1 - OK!\n");
            copyMas(to_ad_dr, to_ad, 27);
            to_ad_dr[27] = DKS(to_ad, 27);

	    	strMas[i].KC = 0x7D9C;// 11111 (31 адрес) 0 (выдача) 1100 (12 подадрес) 11100 (28 слов) 11111 0 1100 11100
	    	strMas[i].ptr_mass = to_ad_dr;
	    	strMas[i].ptr_SZO = &szoad_1f;

	    	i++;
		}

		if((zapros__giv & 0x4000) == 0x4000){
            printf("2 - OK!\n");

            copyMas(to_giv_dr, to_giv, 10);
            to_giv_dr[10] = DKS(to_giv, 10);
	        
	        strMas[i].KC = 0x9B92;// 10011 (19 адрес) 0 (выдача) 11100 (28 подадрес) 10010 (18 слов)  10011 0 11100 10010
	    	strMas[i].ptr_mass = to_giv_dr;
	    	strMas[i].ptr_SZO = &szogiv_1f;
	    	
	    	i++;
		}

    	strMas[i].KC = 0;
    }
		
}

void receive(str strMas[3], unsigned short from_ad_dr[19],  unsigned short from_giv_dr[29]){
	

    unsigned short dks = 0;
    int i = 0;

	if(((zapros_ad & 0x1E00) >> 11) == 0x3){
        printf("3 - OK!\n");

	    strMas[i].KC = 0x7F33;// 11111 (31 адрес) 1 (прием) 1001 (9 подадрес) 10011 (19 слов)  11111 1 1001 10011
	    strMas[i].ptr_mass = from_ad_dr;
	    strMas[i].ptr_SZO = &szoad_2f;
	    i++;
	}

	if((zapros__giv & 0x8000) == 0x8000){
        printf("4 - OK!\n");

        strMas[i].KC = 0x9E7D;// 10011 (19 адрес) 1 (прием) 10011 (19 подадрес) 11101 (29 слов)  10011 1 10011 11101
	    strMas[i].ptr_mass = from_giv_dr;
	    strMas[i].ptr_SZO = &szogiv_2f;
	    	
	    i++;
	}

    strMas[i].KC = 0;
	
	i = 0;
    while(strMas[i].KC != 0){

		if(strMas[i].KC ==  0x7F33){
			copyMas(from_ad, strMas[i].ptr_mass, 18);
			dks = DKS(strMas[i].ptr_mass, 18);
			
			if(dks != strMas[i].ptr_mass[18]){
				*strMas[i].ptr_SZO  |= 0x40;
			}
		}

		if(strMas[i].KC ==  0x9E7D){
			copyMas(from_giv, strMas[i].ptr_mass, 28);
			dks = DKS(strMas[i].ptr_mass, 28);
			
			if(dks != strMas[i].ptr_mass[28]){
				*strMas[i].ptr_SZO  |= 0x40;
			}
		}

    i++;
    }

}

unsigned short DKS(unsigned short mas[], int size){

	unsigned short ks = 0;
	int i = 0;
	for (i=0; i<size; i++)
		ks += mas[i];
	return 0x5555 - ks;
}

void copyMas(unsigned short target[], unsigned short value[], int size){
	int i =0;
	for (i = 0; i<size; i++){
		target[i] = value[i];
	}

}
