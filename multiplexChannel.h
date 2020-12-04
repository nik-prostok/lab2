#ifndef transmissionChannel_h
#define transmissionChannel_h

typedef struct
{
unsigned short KC;
unsigned short *ptr_mass;
unsigned short *ptr_SZO;
} str;

//Запрос ФПО
extern unsigned short zapros_ad;
extern unsigned short zapros__giv;

//СЗО
extern unsigned short szoad_1f;
extern unsigned short szogiv_2f;

extern unsigned short szoad_2f;
extern unsigned short szogiv_1f;

extern unsigned short  from_ad[18];
extern unsigned short  from_giv[28];


void send(int configd, int n_gr_bvu, str strMas[3], unsigned short to_ad[27],  unsigned short to_giv[10]);
void receive(str strMas[3], unsigned short from_ad_dr[19],  unsigned short from_giv_dr[29]);
unsigned short DKS(unsigned short mas[], int size);

#endif// transmissionChannel_h