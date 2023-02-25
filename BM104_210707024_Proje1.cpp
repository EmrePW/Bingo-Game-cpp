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

#include "BM104_210707024_Proje1.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
BM104_210707024_Proje1::BM104_210707024_Proje1(int d, int j, int k) {
    array_Size = d;
    lowerLimitofRand = j;
    upperLimitofRand = k;
    maxGuesses = 2*d;
    takenGueses = 0;
}

void BM104_210707024_Proje1::NumberAssigner(int a[], int b, int c, int d) {
    srand(time(0));
    for (int i = 0;i<b;i++){
        a[i] = rand()%d + c;
    }
    cout << endl;
}

void BM104_210707024_Proje1::Guesser(const int a[], int b, int c[]) {
    int guess;
    int counter = 0;
    cin >> guess;
    //have they entered the same number function goes here
    if(HaveTheyEnteredTheSameNumber(c,b,guess)==1){
        cout << "You have entered the same number twice." << endl;
    }
    else{
        BinarySearch(a,b,counter,guess);
        if (counter == 0){
        	cout << "Couldn't find " << guess << " in the array." << endl;
		}
        else {
		cout << "Found " << counter << " " << guess << "'s.";
        cout << endl;
        Manipulator(c,b,guess,counter);
		}
    }
    takenGueses++;
}
void BM104_210707024_Proje1::Manipulator(int c[], int b, int g, int co) {
    Slider(c,b,co);
    for(int i = b-1; i >= (b-co); i--){
        c[i] = g;
    }
}
void BM104_210707024_Proje1::Slider(int c[], int b,int co) {
    for(int j = 0;j<b;j++){
        Swap(c,j,(j-co));
    }
}
void BM104_210707024_Proje1::OyunOyna() {
    NumberAssigner(array,array_Size,lowerLimitofRand,upperLimitofRand);
    while(true) {
        for(int i = 0;i<array_Size;i++){
            if(array1[i] == 0) cout << "X ";
            else cout << array1[i]<< " ";
        }
        cout << endl;
        cout << "Take your guess : ";
        Guesser(array,array_Size,array1);
        cout << "Guess count :  "<< takenGueses << endl;
		if(DidTheyWin(array1,array_Size) == 1){
            cout << "Content of the array : " << endl;
			for(int k = 0;k<array_Size;k++){
            	cout << array1[k] << " ";
			}
			cout << endl << "YOU WIN!!" << endl; break;
        }
        if(takenGueses == maxGuesses){
            cout << "YOU LOST!";
            break;
        }
    }
}

void BM104_210707024_Proje1::BinarySearch(const int a[], int b, int& c, int g) {
    for(int i = 0;i<b;i++){
        if(a[i] == g){
            c++;
        }
    }
}

void BM104_210707024_Proje1::Swap(int a[],int i1,int i2) {
    if(i1 < 0){
    }
    else{
    a[i2] = a[i1];
    a[i1] = 0;
    }
}

bool BM104_210707024_Proje1::DidTheyWin(const int a[], int b) {
    for(int i = 0;i<b;i++){
        if(a[i] == 0) return false;
    }
    return true;
}

bool BM104_210707024_Proje1::HaveTheyEnteredTheSameNumber(const int a[], int b, int g) {
    for(int i = 0;i<b;i++){
        if(a[i] == g) return true;
    }
    return false;
}
