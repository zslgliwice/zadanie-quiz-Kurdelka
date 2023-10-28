#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie;
string odp;

int main()
{
    HANDLE uchwyt = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(uchwyt, FOREGROUND_BLUE | FOREGROUND_RED);
    cout << "Podaj imie, jesli jestes kobieta, pamietaj aby sie konczylo na literke 'a': ";
    cin >> imie;
    int pkt = 0;
    system("cls");

    SetConsoleTextAttribute(uchwyt, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "! Witaj " << imie << " w tescie wiedzy o fabule FNAFa! POWODZENIA (OSTRZEZENIE: drastyczne tematy)";
    Sleep(5000);

    SetConsoleTextAttribute(uchwyt, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

    system("cls");
    cout << "No to zaczynamy!!!";
    Sleep(2000);
    system("cls");
    cout << "3";
    Sleep(500);
    system("cls");
    cout << "3..2";
    Sleep(500);
    system("cls");
    cout << "3..2..1..";
    Sleep(500);
    system("cls");

    SetConsoleTextAttribute(uchwyt, FOREGROUND_BLUE | FOREGROUND_RED| FOREGROUND_INTENSITY);

    //Pierwsze

    cout << "Kto byl sprawca The bite of 83?" << endl;
    cout << "a) Toy Chica" << endl;
    cout << "b) Fredbear" << endl;
    cout << "c) Mangle" << endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if (odp == "b")
    {
        SetConsoleTextAttribute(uchwyt, BACKGROUND_GREEN);
        system("cls");
        cout << "Poprawna odpowiedz!";
        pkt++;
        Sleep(3000);
    }
    else
    {
        SetConsoleTextAttribute(uchwyt, BACKGROUND_RED);
        system("cls");
        cout << "Zle.. ktos tu nie zna fabuly fnafa 4, Odpowiedz to Fredbear";
        Sleep(5000);
    }

    system("cls");

    SetConsoleTextAttribute(uchwyt, FOREGROUND_RED | FOREGROUND_INTENSITY);

    system("cls");
    cout << "Nastepne Pytanie! :D";
    Sleep(1500);

    SetConsoleTextAttribute(uchwyt, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

    system("cls");
    cout << "3";
    Sleep(500);
    system("cls");
    cout << "3..2";
    Sleep(500);
    system("cls");
    cout << "3..2..1..";
    Sleep(500);
    system("cls");

    SetConsoleTextAttribute(uchwyt, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);

    //drugie

    cout << "Jak ma na imie morderca dzieci?" << endl;
    cout << "a) Vincent" << endl;
    cout << "b) Henry" << endl;
    cout << "c) William" << endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if (odp == "c")
    {
        SetConsoleTextAttribute(uchwyt, BACKGROUND_GREEN);
        system("cls");
        cout << "Poprawna odpowiedz!";
        pkt++;
    }
    if (odp == "a")
    {
        SetConsoleTextAttribute(uchwyt, BACKGROUND_RED);
        system("cls");
        cout << "Zle, chyba nadal zyjesz starymi teoriami.";

    }
    if (odp =="b") {
        SetConsoleTextAttribute(uchwyt, BACKGROUND_RED);
        system("cls");
        cout << "Niestety zle :(";
    }

    Sleep(3000);
    system("cls");

    SetConsoleTextAttribute(uchwyt, FOREGROUND_RED | FOREGROUND_INTENSITY);

    system("cls");
    cout << "Nastepne Pytanie! :D";
    Sleep(2000);

    SetConsoleTextAttribute(uchwyt, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

    system("cls");
    cout << "3";
    Sleep(500);
    system("cls");
    cout << "3..2";
    Sleep(500);
    system("cls");
    cout << "3..2..1..";
    Sleep(500);
    system("cls");

    SetConsoleTextAttribute(uchwyt, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);

    //trzecie

    cout << "Kogo dusza znajduje sie w Marionetce?" << endl;
    cout << "a) Henry Emily - tworca animatronikow" << endl;
    cout << "b) Matka zmarlych dzieci" << endl;
    cout << "c) Charlie - corka Henrego" << endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if (odp == "c")
    {
        SetConsoleTextAttribute(uchwyt, BACKGROUND_GREEN);
        system("cls");
        cout << "Poprawna odpowiedz!";
        pkt++;
    }
    if (odp == "b")
    {
        SetConsoleTextAttribute(uchwyt, BACKGROUND_RED);
        system("cls");
        cout << "Zle... ty chyba zyjesz nadal teoriami sprzed FFPS odpowiedz to Charlie";
    }
    if (odp == "a"){
        SetConsoleTextAttribute(uchwyt, BACKGROUND_RED);
        system("cls");
        cout << "Zle... Skad Ci sie to wzielo? odpowiedz to Charlie";
    }


    Sleep(3000);
    system("cls");

    SetConsoleTextAttribute(uchwyt, FOREGROUND_RED | FOREGROUND_INTENSITY);

    system("cls");
    cout << "Nastepne Pytanie! :D";
    Sleep(2000);

    SetConsoleTextAttribute(uchwyt, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

    system("cls");
    cout << "3";
    Sleep(500);
    system("cls");
    cout << "3..2";
    Sleep(500);
    system("cls");
    cout << "3..2..1..";
    Sleep(500);
    system("cls");

    SetConsoleTextAttribute(uchwyt, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);

    //czwarte

    cout << "Jaki stroj zalozyl William afton gdy zabijal dzieci?" << endl;
    cout << "a) Ubral sie na czarno i zalozyl kominiarke" << endl;
    cout << "b) Spring Boonie" << endl;
    cout << "c) Byl w swoim roboczym stroju" << endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if (odp == "b")
    {
        SetConsoleTextAttribute(uchwyt, BACKGROUND_GREEN);
        system("cls");
        cout << "Poprawna odpowiedz!";
        pkt++;
    }
    else
    {
        SetConsoleTextAttribute(uchwyt, BACKGROUND_RED);
        system("cls");
        cout << "Zle, no jednak chlop zaszalal zalozyl stroj animatronika";

    }
    Sleep(3000);
    system("cls");

    SetConsoleTextAttribute(uchwyt, FOREGROUND_RED | FOREGROUND_INTENSITY);

    system("cls");
    cout << "Nastepne Pytanie! :D";
    Sleep(2000);

    SetConsoleTextAttribute(uchwyt, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

    system("cls");
    cout << "3";
    Sleep(500);
    system("cls");
    cout << "3..2";
    Sleep(500);
    system("cls");
    cout << "3..2..1..";
    Sleep(500);
    system("cls");

    SetConsoleTextAttribute(uchwyt, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);

    //piate

    cout << "Ile dzieci umarlo Williamowi Aftonowi?" << endl;
    cout << "a) Zadne" << endl;
    cout << "b) Wszystkie, Elizabeth, C.C i Michael" << endl;
    cout << "c) Tylko Elizabeth i C.C" << endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if (odp == "b")
    {
        SetConsoleTextAttribute(uchwyt, BACKGROUND_GREEN);
        system("cls");
        cout << "Poprawna odpowiedz! Elizabeth zostala wciagnieta przez Circus Baby, C.C ugryzl Fredbear a Michaelowi Scooper wyciagnal wszystkie organy.";
        pkt++;
    }
    else
    {
        SetConsoleTextAttribute(uchwyt, BACKGROUND_RED);
        system("cls");
        cout << "Zle :( Wszyscy nie zyja, Elizabeth zostala wciagnieta przez Circus Baby, C.C ugryzl Fredbear a Michaelowi Scooper wyciagnal wszystkie organy.";

    }
    Sleep(8000);
    system("cls");

    SetConsoleTextAttribute(uchwyt, FOREGROUND_RED | FOREGROUND_INTENSITY);

    system("cls");
    cout << "Podsumowanie !!! :D";
    Sleep(2000);

    SetConsoleTextAttribute(uchwyt, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

    system("cls");
    cout << "3";
    Sleep(500);
    system("cls");
    cout << "3..2";
    Sleep(500);
    system("cls");
    cout << "3..2..1..";
    Sleep(500);
    system("cls");

    if (pkt == 0) {
        SetConsoleTextAttribute(uchwyt, FOREGROUND_GREEN);
        cout << "Masz 0 punktow!!! :))";
        Sleep(2000);
        SetConsoleTextAttribute(uchwyt, BACKGROUND_RED);
        system("cls");
        if (!imie.empty() && imie.back() == 'a') {
            cout << imie << "... NO NIEZLE SIE ZAPOZNALAS Z FABULA >:(";
            Sleep(4000);
        }
        else {
            cout << imie << "... NO NIEZLE SIE ZAPOZNALES Z FABULA >:(";
            Sleep(4000);
        }
    }

    if (pkt == 1) {
        SetConsoleTextAttribute(uchwyt, FOREGROUND_GREEN);
        cout << "Masz 1 punkt!!! :))";
        Sleep(2000);
        SetConsoleTextAttribute(uchwyt, BACKGROUND_RED);
        system("cls");
        if (!imie.empty() && imie.back() == 'a') {
            cout << imie << ", pewnie strzelalas...";
            Sleep(4000);
        }
        else {
            cout << imie << ", pewnie strzelales...";
            Sleep(4000);
        }
    }

    if (pkt == 2) {
        SetConsoleTextAttribute(uchwyt, FOREGROUND_GREEN);
        cout << "Masz 2 punkty!!! :))";
        Sleep(2000);
        SetConsoleTextAttribute(uchwyt, BACKGROUND_RED);
        system("cls");
        if (!imie.empty() && imie.back() == 'a') {
            cout << imie << ", no nie postaralas sie :(";
            Sleep(4000);
        }
        else {
            cout << imie << ", no nie postarales sie :(";
            Sleep(4000);
        }
    }

    if (pkt == 3) {
        SetConsoleTextAttribute(uchwyt, FOREGROUND_GREEN);
        cout << "Masz 3 punkty!!! :))";
        Sleep(2000);
        SetConsoleTextAttribute(uchwyt, BACKGROUND_BLUE);
        system("cls");
        if (!imie.empty() && imie.back() == 'a') {
            cout << imie << ", gratulacje! Moglas bardziej sie postarac, ale i tak jestem dumna";
            Sleep(4000);
        }
        else {
            cout << imie << ", gratulacje! Mogles bardziej sie postarac, ale i tak jestem dumna";
            Sleep(4000);
        }
    }

    if (pkt == 4) {
        SetConsoleTextAttribute(uchwyt, FOREGROUND_GREEN);
        cout << "Masz 4 punkty!!! :))";
        Sleep(2000);
        SetConsoleTextAttribute(uchwyt, BACKGROUND_BLUE);
        system("cls");
        if (!imie.empty() && imie.back() == 'a') {
            cout << imie << ", gratulacje! Jestes bardzo madra! :D";
            Sleep(4000);
        }
        else {
            cout << imie << ", gratulacje! Jestes bardzo madry! :D";
            Sleep(4000);
        }
    }

    if (pkt == 5) {
        SetConsoleTextAttribute(uchwyt, FOREGROUND_GREEN);
        cout << "Masz 5 punktow!!! :))";
        Sleep(2000);
        SetConsoleTextAttribute(uchwyt, BACKGROUND_GREEN);
        system("cls");
        if (!imie.empty() && imie.back() == 'a') {
            cout << imie << ", gratulacje!!! Jestes niesamowita! :D";
            Sleep(4000);
        }
        else {
            cout << imie << ", gratulacje! Jestes niesamowity! :D";
            Sleep(4000);
        }
    }
    system("cls");
    SetConsoleTextAttribute(uchwyt, FOREGROUND_GREEN);
    cout << "Dziekuje za Gre =D";
    Sleep(2000);
    system("cls");



    return 0;
}
