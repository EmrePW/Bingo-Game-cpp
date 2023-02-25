/*
LÜTFEN  .DEV DOSYASINI KULLANARAK AÇINIZ
EÐER AKSÝ  YAPILIRSA PROGRAM ÇALIÞMAYACAK VE DERLENMEYECEKTÝR !
*/

/* 			UYGULAMA ILE ILGILI GENEL ACIKLAMALAR
	AD : EMRE 
	SOYAD : YAHYAOÐLU 
	OGRENCI NUMARASI : 210707024 
	BOLUM : BILGISAYAR MUHENDISLIGI ORGUN OGRETIM 
	DERSIN ADI VE KODU : NESNEYE YONELIK PROGRAMLAMA, BM104 
	DERSIN VERILDIGI AKADEMIK DONEM : BAHAR 2022 
	PROJE NUMARASI : PROJE1 
	DERSI VEREN OGRETIM UYESIENIN ADI : GULSAH TUMUKLU OZYER
*/

#ifndef BM104_210707024_PROJE1_BM104_210707024_PROJE1_H
#define BM104_210707024_PROJE1_BM104_210707024_PROJE1_H


class BM104_210707024_Proje1 {
public:
    BM104_210707024_Proje1(int,int,int); // Constructor.
    void OyunOyna(); //main game loop
private:
    int array_Size;
    int maxGuesses;
    int takenGueses;
    int lowerLimitofRand;
    int upperLimitofRand;
    int array[20] = {0}; //Randomized array
    int array1[20] = {0}; // X's
    
	void NumberAssigner(int[],int,int,int);
    void Guesser(const int[],int,int[]);
    void BinarySearch(const int[],int,int&,int);
    void Manipulator(int[],int,int,int);
    void Slider(int[],int,int);
    void Swap(int[],int,int);
    bool DidTheyWin(const int[],int);
    bool HaveTheyEnteredTheSameNumber(const int[],int,int); //array,size,guess


};


#endif //BM104_210707024_PROJE1_BM104_210707024_PROJE1_H

