#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;




    struct listaWskaznikow
    {
        double x;
        double y;
        double z;

        listaWskaznikow *nastepny; // Wskazanie nastêpnego elementu z listu
        listaWskaznikow(); //Wywo³anie nastêpnego elementu

    };
    listaWskaznikow::listaWskaznikow()
    {
        nastepny = 0;

    }

    struct listaPierwszegoElementu
    {
        double x;
        double y;
        double z;

        listaWskaznikow *pierwszyElement;

        void dodajWskaznik(double x, double y, double z);
        void usunWskaznik(int nr);
        void wyswietlWskazniki();

        listaPierwszegoElementu();
    };
    listaPierwszegoElementu::listaPierwszegoElementu()
    {

        pierwszyElement = 0;
    }
    void listaPierwszegoElementu::dodajWskaznik(double x, double y, double z)
    {
        listaWskaznikow *nowyWskaznik = new listaWskaznikow; // tworzenie nowego wzkaznika w liœcie
        nowyWskaznik ->x = x;
        nowyWskaznik ->y = y;
        nowyWskaznik ->z = z;
        if(pierwszyElement == 0)
            //jeœli jest pierwszym elementem to zacznij tu
            pierwszyElement = nowyWskaznik;
        else
        {

            listaWskaznikow *temp = pierwszyElement; // znajdz wskaznik na ostatni element

            while(temp-> nastepny)
            {
                temp->nastepny = nowyWskaznik; // pstatni element jest naszym nowym elementem
                nowyWskaznik->nastepny = 0; //ostatni jest pusty
            }
        }
    }
        void listaPierwszegoElementu::wyswietlWskazniki()
        {
            listaWskaznikow *temp = pierwszyElement;

            while(temp)
            {
                cout<<"x: "<<x<<"y: "<<y<<"z: "<< z<<endl;
                temp= temp->nastepny;
            }

        }
        void listaPierwszegoElementu::usunWskaznik(int nr)
        {
            if(nr == 1)
            {
                listaWskaznikow *temp = pierwszyElement;
                pierwszyElement = temp->nastepny;
            }
            if(nr >= 2)
            {
                int j = 1;
                // do usuniecia srodkowego elemetnu potrzebujemy wskaznika na osobe n-1
        // wskaznik *temp bedzie wskaznikiem na osobe poprzedzajaca osobe usuwana

                listaWskaznikow *temp = pierwszyElement;

                while(temp)
                {
                    // sprawdzamy czy wskaznik jest na osobie n-1 niz usuwana
                    if ((j+1)==nr) break;

                    // jezeli nie to przewijamy petle do przodu
                    temp =temp->nastepny;
                    j++;

                }

                // wskaznik *temp wskazuje teraz na osobe n-1
                // nadpisujemy wkaznik osoby n na osobe n+1
                // bezpowrotnie tracimy osobe n-ta

            //Jeśli ostatni wynosi zero to nie umieraj
                if (temp->nastepny->nastepny==0)
                    temp->nastepny = 0;

            // jezeli nie byl to ostatni element
                else
                    temp->nastepny = temp->nastepny->nastepny;

            }
        };






int main()
{
    listaWskaznikow wskazniki;
    listaPierwszegoElementu lista;
    int i = 0;
    while( i <1000)
    {

        lista.dodajWskaznik(i*4,i*3,i*5);
        if(i >990)
        {
            lista.usunWskaznik(i/2);
            i = 1;

        }
        else
            continue;
    }
    cout << "Hello world!" << endl;
    return 0;
}
