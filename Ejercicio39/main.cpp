#include <iostream>

using namespace std;

void sumarHoras(unsigned int hora, unsigned int tiempo) {

    int hh, mm, ss;
    int carry_mm = 0, carry_hh = 0, carry_ss = 0, dias_extras;
    int sumahoraria = hora + tiempo;
    hh = sumahoraria / 10000;
    mm = (sumahoraria - (hh * 10000)) / 100;
    ss = sumahoraria - ((sumahoraria / 100) * 100);

    while ((ss % 60) != ss){
        carry_ss = ss / 60;
        ss = ss % 60;

    }

    mm += carry_ss;

    while ((mm % 60) != mm){
        carry_mm = mm / 60;
        mm = mm % 60;

    }

    hh += carry_mm;

    while ((hh % 24) != hh){
        carry_hh = hh / 24;
        hh = hh % 24;
    }

    dias_extras = carry_hh;

    printf("%02d:%02d:%02d hs", hh, mm,ss);
    cout << endl << "+" << dias_extras << " dias." << endl;
}

int main() {
    unsigned int hora, tiempo;
    cout << "Ingrese hora" << endl;
    cin >> hora;
    cout << endl << "Ingrese tiempo" << endl;
    cin >> tiempo;

    sumarHoras(hora, tiempo);
    return 0;
}
