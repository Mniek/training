/** @file */

/*
 FUNDAMENTALS OF COMPUTER PROGRAMMING
 
 Lecture 6: pointers
 
 */

#define debug(x)  std::cerr << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl

#include <iostream>    
using namespace std;
//NOTATKI
    // LEKCJA 1

        // 1. Zm. referencyjna musi być id razu zainicjalizowany
        // 2. Zm. referencyjna może zmieniać skojarzeń
        // 3. Zm. referencyjna od razu stały
        // 4. Zm. referencyjna musi być takiego samego typu co zmienna jej przypisywana
    //LEKCJA 2
        //
void swap( int &x, int &y)
{
    int t = x;
    x = y;
    y = t;
}
int &swapPointed(int &x, int &y)
{
    int t = x;
    x = y;
    y = t;

    return x;
}
    //LEKCJA 5
    
     void przemnoz(int &a, int ile) // dla zmiennej referencyjnej
     {
         a *= ile;
         cout<<a<<endl;
     }
     
      void przemnozWskaznik(int *a, int ile) // Dla wskaźnika
     {
         *a *= ile;
         cout<<*a<<endl;
     }
    int *przemnozDoKontroli(int *a, int ile)
    {
        *a *= ile;
        cout<<*a<<endl;
        return a;
    }
    
    void przemnozTablice(int *p, int rozmiar,int ile)
    {
        while(rozmiar--)
        {
            p[rozmiar]*= ile;
        
            cout<<p[rozmiar]<<endl;
            
        }
    }
//***********************************LEKCJA 6************************
int * funkcjaDoWskaznika(int a, int *b)
  {
     cout<< "Moje a wynosi "<< a<<endl;
     return b;
  }
  int funkcjaDoFunkcji( int * (wskaznikNaFunkcje)(int, int*))
  {
     
      int a6 = 8; 
      int *wsk = &a6;
      *wskaznikNaFunkcje(a6, wsk );
      return 0;
  }
   
  
  
  
  
int main ()
{
    
    //************************>LEKCJA 1<*********************************** Ogólnie wprowadzenie do wskaźników
    {cout<<endl<<endl<<"LEKCJA 1"<<endl<<endl;
        int glownaZmienna = 10;
        int & pGlownaZmienna = glownaZmienna;
        //int * ppGlownaZmienna;
        //ppGlownaZmienna = glownaZmienna;
        cout << &pGlownaZmienna<<endl;
        
        //return 0;
    }
        
    //***********************>LEKCJA 2<****************************************** Funkcja a zmienne referencyjne
    cout<<endl<<endl<<"LEKCJA 2"<<endl<<endl;
    {
        //swapWitchoutThirdVar
            int a = 10;
            int b = 20;
        //swapWitchThirdVar
            int aa = 30;
            int bb = 40;
            
           
            int &changerViaPointing =  swapPointed(aa,bb);
        
        
        changerViaPointing = 589347;
        
        swap(a, b);
        cout << a<< " {swap}"<<b << endl;
        
        cout << aa<< "<<{thirdVarChanged}>>"<<bb << endl;
        
        //return 0;
    }
        
    //********************>LEKCJA 3<************************************************* Wskaźniki
        {
            cout<<endl<<endl<<"LEKCJA 3"<<endl<<endl;
        // NOTATKI
            // Wskaźnik to zwykła zmienna.
            // Może przyjmować wartości adresu
            // Muszą się zgadzać typy wskaźniki i zmiennej wskazywanej
            // Może istnieć wskaźnik na wskaźnik ( int ** wskWskaźnika = &wsk)
         int zm = 10;
         int a3 = 890;
         cout<<*& zm<<endl;
         
         int *wsk; // Zmienna wskaźnikowa, może wskazywać adres danego inta;
         
         const int *conWsk = &a3;
         //conWsk = a3 <-- Nie możemy, bo trzeba zadeklarować na początku CO wskazuje, nie ile. Wartość może być zmieniana
         
         const int *conWskConWart; // <-- Teraz nie będziemy mogli ustawić wartości po pierwszym zadeklarowaniu (Tylko raz można!)
         
         
         wsk = &zm; // wsk, który jest zmienną wskaźnikową, przechowuje aktualnie adres zmiennej zm
         
         cout<< *wsk<<endl; // Aby odczytać wartość wskaźnika, należy podać *
         
         zm = 5;
         cout<<*wsk<<endl<<zm<<endl; //zmieniliśmy dane pod adresem wsk, więc zmieniliśmy również zm
         
         wsk = &a3;
         cout<< *wsk<<" Wskaźnik "<<endl<<a3<<" Zmienna a3 "<<endl<<zm<<" zmienna zm "<<endl;
         
        
   
   // return 0;
        }
         
         //*******************************LEKCJA 4********************************** Zabawa w tablicy i wywoływanie ich wart
         {
             cout<<endl<<endl<<"LEKCJA 4"<<endl<<endl;
          int arr [3];
          arr[1] = 44;
          int zm4; 
          int *pointerToFunArray = arr;
          
          int * const wsk = &arr[0]; // stały wskaźnik na pierwszą komórkę tabeli arr
          cout << wsk << endl<<&arr<<endl<<&arr[0]<<endl; // równoznaczne 
          cout << *(arr +1)<<"   "<<arr[1]<<endl; // Równoznaczne z a[1]
          cout << arr +1<< "   "<< &arr[1]<<endl; // równoznaczne
         
        cout<< *pointerToFunArray<<endl; // Wyjdzie 0
         cout<< ++*pointerToFunArray<<endl; //Wyjdzie 1
       cout<< *++pointerToFunArray<<endl; //Zwiększa więc wyrzuci wartość *a[1]
        cout<<*pointerToFunArray++<<endl; // Wywołaj pointer po czym zwiększ
        cout<< *pointerToFunArray<<endl; // Aktualnie jakiś garbage bo poprzedni zwiększył

        //return 0;
             
        }
         
         //*****************************LEKCJA 5***********************************
         {
             cout<< "*************************LEKCJA 5***********************"<<endl; 
             int a5 = 10;
             przemnoz(a5,6); //Wyjdzie 60;
             przemnozWskaznik(&a5,6);// Wyjdzie 360
             
             int *b = przemnozDoKontroli(&a5,6); //wyjdzie 2160
             *b = 88;
             przemnozDoKontroli(&a5,6); //Wyjdzie 528
             
             
             int tablica[10];
             for(int i = 0; i<sizeof(tablica)/sizeof(int); i++)
             {
                 tablica[i] = i;
             cout<<"tab["<<i<<"] jest równy: "<<i<<endl;
             }
             przemnozTablice (tablica, sizeof(tablica)/sizeof(int), 5);
             
             
         }
             
        //****************************LEKCJA 6*************************************
            {
                    cout<<"***********LEKCJA 6*********************"<<endl;
                    int znak;
                    int * (*wskaznikNaFunkcje)(int, int *);
                    wskaznikNaFunkcje = &funkcjaDoWskaznika;
                    funkcjaDoFunkcji(wskaznikNaFunkcje);
                    
            }
           
         return 0;
} 


















