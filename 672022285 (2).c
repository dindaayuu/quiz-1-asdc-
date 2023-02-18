#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#define MAX 255
#define PI 3.14

int next;

void menuporolan(void);

void trigonometryMenu(void);

void circumferenceMenu(void);

void areaFlatShapeMenu(void);

void volumeMenu(void);

void menukelilingbangundtr(void);

void loading(void);



int main();


void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void loading(){
    int y;

    system("color 7C");
    gotoxy(32,13);

    char clr[]="L O A D I N G G G G . . .  . . . . . .";
        for(y=0; clr[y]!=NULL; y++){
            printf("%c",clr[y]);
            Sleep(45);
        }
        system("cls");
}

void penjumlahan() {
    int a, b, hasil;
    while(1){
        printf("\n1. Penjumlahan :\n");
        printf("Masukan bilangan pertama : ");
        scanf("%d", &a);
        printf("Masukan bilangan kedua   : ");
        scanf("%d", &b);
        hasil = a + b;
        printf("Hasil:\t\t\t   %d\n", hasil);

        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            menuporolan();
            break;
        }
    }
}

void pengurangan() {
    int a, b, hasil;
    while(1){
        printf("\n1. Pengurangan :\n");
        printf("Masukan bilangan pertama : ");
        scanf("%d", &a);
        printf("Masukan bilangan kedua   : ");
        scanf("%d", &b);
        hasil = a - b;
        printf("Hasil:\t\t\t   %d\n", hasil);

        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            menuporolan();
            break;
        }
    }
}

void perkalian() {
    int a, b, hasil;
    while(1){
        printf("\n1. Perkalian :\n");
        printf("Masukan bilangan pertama : ");
        scanf("%d", &a);
        printf("Masukan bilangan kedua   : ");
        scanf("%d", &b);
        hasil = a * b;
        printf("Hasil:\t\t\t   %d\n", hasil);

        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            menuporolan();
            break;
        }
    }
}

void pembagian() {
    float c, d, hasilbagi;
    while(1){
        printf("\n1. Pembagian :\n");
        printf("Masukan bilangan pertama : ");
        scanf("%f", &c);
        printf("Masukan bilangan kedua   : ");
        scanf("%f", &d);
        hasilbagi = c / d;
        printf("Hasil:\t\t\t   %.2f\n", hasilbagi);

        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            menuporolan();
            break;
        }
    }
}

void Sinus() {
    double inputan, result;
    while(1){
        printf("Masukkan derajat sinus : ");
        scanf("%lf", &inputan);
        // Converting to radian
        inputan = (inputan * PI) / 180;
        result = sin(inputan);

        printf("Hasil sinus adalah = %.2lf\n", result);

        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            trigonometryMenu();
            break;
        }
    }
}

void cosinus() {
    double arg, result;
    while(1){
        printf("Masukkan derajat cosinus : ");
        scanf("%lf", &arg);
        // Converting to radian
        arg = (arg * PI) / 180;
        result = cos(arg);

        printf("Hasil cosinus adalah = %.2lf\n", result);

        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            trigonometryMenu();
            break;
        }
    }
}

void Tangen() {
    double arg, result;
    while(1){
        printf("Masukkan derajat sinus : ");
        scanf("%lf", &arg);
        // Converting to radian
        arg = (arg * PI) / 180;
        result = tan(arg);

        printf("Hasil sinus adalah = %.2lf\n", result);
        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            trigonometryMenu();
            break;
        }
    }
}

void calculateRectangleCircumference() {
    float a, b, hasil;
    while (1) {
        printf("\n1. Keliling Persegi :\n");
        printf("Masukan Panjang Persegi : ");
        scanf("%f", &a);
        printf("Masukan Lebar Persegi   : ");
        scanf("%f", &b);
        hasil = 2 * (a + b);
        printf("Keliling Persegi Adalah = %.2f\n", hasil);

        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            circumferenceMenu();
            break;
        }
    }
}

void calculateTrapezoidCircumference() {
    float a, b, c, hasil, tinggi = 0.5, tampung;
    while (1) {
        printf("\n1. Keliling Trapesium :\n");
        printf("Masukkan Sisi Atas Trapesium Sama Kaki : ");
        scanf("%f", &a);
        printf("Masukkan Sisi Bawah Trapesium Sama Kaki   : ");
        scanf("%f", &b);
        printf("Masukkan Sisi Miring Trapesium Sama Kaki   : ");
        scanf("%f", &c);
        hasil = tinggi * (a + b);
        tampung = hasil;
        //tinggi=1/2*(a+b);
        //printf("\n%.2f", tinggi);
        printf("Keliling Trapesium Sama Kaki adalah = %.2f\n", tampung + a + b + c);

        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            circumferenceMenu();
            break;
        }
    }
}

void calculateKiteCircumference() {
    float a, b, hasil;
    while(1){
        printf("\n1. Keliling Layang-Layang :\n");
        printf("Masukkan Panjang Sisi Atas : ");
        scanf("%f", &a);
        printf("Masukkan Panjang Sisi Bawah   : ");
        scanf("%f", &b);
        hasil = 2 * (a + b);
        printf("Keliling Layang-Layang adalah = %.2f\n", hasil);

        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            circumferenceMenu();
            break;
        }
    }
}

void calculateCircleCircumference() {
    float c, d, tampung1, tampung2;
    float phi = 3.14;
    while(1){
        printf("\n1. Lingkaran :\n");
        printf("Masukkan Panjang Diameter : : ");
        scanf("%f", &c);
        printf("Masukkan Panjang Jari-jari   : ");
        scanf("%f", &d);
        tampung1 = phi * c;
        tampung2 = 2 * (phi * d);
        printf("Keliling Lingkaran berdasar Diameter = %.2f\n", tampung1);
        printf("Keliling Lingkaran berdasar Jari-Jari = %.2f\n", tampung2);

        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            circumferenceMenu();
            break;
        }
    }
}

void calculateRectangleArea() {
    float a, b, hasil;
    while(1){
        printf("\n1. Luas :\n");
        printf("Masukan Panjang Persegi : ");
        scanf("%f", &a);
        printf("Masukan Lebar Persegi   : ");
        scanf("%f", &b);
        hasil = a * b;
        printf("Luas Persegi Adalah = %.2f\n", hasil);

        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            areaFlatShapeMenu();
            break;
        }
    }
}

void calculateTrapezoidArea() {
    float a, b, c, hasil, tinggi = 0.5, tampung;
    while (1) {
        printf("\n1. Luas Trapesium :\n");
        printf("Masukkan Sisi Atas Trapesium Sama Kaki : ");
        scanf("%f", &a);
        printf("Masukkan Sisi Bawah Trapesium Sama Kaki   : ");
        scanf("%f", &b);
        printf("Masukkan Sisi Miring Trapesium Sama Kaki   : ");
        scanf("%f", &c);
        hasil = tinggi * (a + b);
        tampung = hasil;
        printf("Luas Trapesium Sama Kaki adalah = %.2f\n", 0.5 * (a + b) * tampung);

        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            areaFlatShapeMenu();
            break;
        }
    }
}

void calculateAreaOfKite() {
    float a, b, hasil;
    while (1) {
        printf("\n1. Luas Layang-Layang :\n");
        printf("Masukkan Panjang Sisi Atas : ");
        scanf("%f", &a);
        printf("Masukkan Panjang Sisi Bawah   : ");
        scanf("%f", &b);
        hasil = 0.5 * (a * b);
        printf("Luas Layang-Layang adalah = %.2f\n", hasil);

        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            areaFlatShapeMenu();
            break;
        }
    }
}

void calculateAreaOfCircle() {
    float c, d, tampung1, tampung2;
    float phi = 3.14;

    while (1) {
        printf("\n1. Luas Lingkaran :\n");
        printf("Masukkan Panjang Diameter : : ");
        scanf("%f", &c);
        printf("Masukkan Panjang Jari-jari   : ");
        scanf("%f", &d);
        tampung1 = 0.25 * phi * (c * c);
        tampung2 = phi * (d * d);
        printf("Keliling Lingkaran berdasar Diameter = %.2f\n", tampung1);
        printf("Keliling Lingkaran berdasar Jari-Jari = %.2f\n", tampung2);

        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            areaFlatShapeMenu();
            break;
        }
    }
}

void calculateCubeVolume() {
    float a;
    while(1){
        printf("\n1. Volume Kubus :\n");
        printf("Masukkan Panjang Sisi Kubus : ");
        scanf("%f", &a);
        printf("Volume Kubus adalah = %.2f\n", a * a * a);

        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            volumeMenu();
            break;
        }
    }
}

void calculatePrismVolume() {
    float a, b, c, d, e, f, hasil, tinggi = 0.5, tampung, phi = 3.14;
    while(1){
        printf("\n1. Volum Prisma :\n");
        printf("Masukkan Sisi Persegi : ");
        scanf("%f", &a);
        //kelompok segitiga
        printf("Masukkan Lebar Alas Segitiga : ");
        scanf("%f", &b);
        printf("Masukkan Tinggi Segitiga : ");
        scanf("%f", &c);
        //kelompok lingkaran
        printf("Masukkan Jari-Jari Lingkaran :");
        scanf("%f", &d);
        printf("Masukkan Diameter Lingkaran :");
        scanf("%f", &e);
        printf("Masukkan Tinggi Prisma :");
        scanf("%f", &f);
        printf("Volume Prisma Persegi adalah = %.2f\n", a * a * a);
        printf("Volume Prisma Segitiga adalah = %.2f\n", ((b * c) / 2) * f);
        printf("Volume Silinder berdasar Jari-Jari adalah = %.2f\n", phi * (d * d * f));
        printf("Volume Silinder berdasar Diameter adalah = %.2f\n", 0.25 * phi * (e * e) * f);

        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            volumeMenu();
            break;
        }
    }
}

void calculatePyramidVolume() {
    float a, b, c, d, e, f, hasil, tinggi = 0.5, tampung, phi = 3.14, luas_alas, rdiameter;
    while(1){
        printf("\n1. Volum Prisma :\n");
        printf("Masukkan Sisi Persegi : ");
        scanf("%f", &a);
        //kelompok segitiga
        printf("Masukkan Lebar Alas Segitiga : ");
        scanf("%f", &b);
        printf("Masukkan Tinggi Segitiga : ");
        scanf("%f", &c);
        //kelompok lingkaran
        printf("Masukkan Jari-Jari Lingkaran :");
        scanf("%f", &d);
        printf("Masukkan Diameter Lingkaran :");
        scanf("%f", &e);
        printf("Masukkan Tinggi Limas :");
        scanf("%f", &f);
        luas_alas = 0.5 * b * f;
        rdiameter = e / 2;
        printf("Volume Limas Persegi adalah = %.2f\n", 0.33 * a * a * f);
        printf("Volume Limas Segitiga adalah = %.2f\n", 0.33 * luas_alas * f);
        printf("Volume Limas Silinder berdasar Jari-Jari adalah = %.2f\n", phi * d * d * f);
        printf("Volume Limas Silinder berdasar Diameter adalah = %.2f\n", phi * rdiameter * rdiameter * f);

        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            volumeMenu();
            break;
        }
    }
}

void calculateCircleVolume() {
    float c, d, rdiameter, tampung2;
    float phi = 3.14;
    while(1){
        printf("\n1. Volume Bola :\n");
        printf("Masukkan Jari-Jari Lingkaran : ");
        scanf("%f", &c);
        printf("Masukkan Diameter Lingkaran : ");
        scanf("%f", &d);
        rdiameter = d / 2;
        printf("Keliling Lingkaran berdasar Jari-Jari = %.2f\n", 1.33 * phi * c * c * c);
        printf("Keliling Lingkaran berdasar Diameter = %.2f\n", 1.33 * phi * rdiameter * rdiameter * rdiameter);

        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            volumeMenu();
            break;
        }
    }
}

void root() {
    float inputan;
    double tampung;
    while(1){
        printf("Masukkan bilangan yang akan diakar = ");
        scanf(" %f", &inputan);
        // sqrt(squareroot
        tampung = sqrt(inputan);
        printf(" \nHasil root dari %.2f adalah %.2f\n", inputan, tampung);

        printf("Mau repeat ga? (y/t): ");
        getchar();
        next = getchar();
        if (next == 'y' || next == 'Y') {
            system("cls");
        } else if (next == 't' || next == 'T') {
            system("cls");
            main();
            break;
        }
    }
}

void menuporolan() {
    //Menu penjumlahan

    int input, inMenu, y = 1, addMenu;
    char arrowKey;

    system("mode con: cols=120 lines=30");
    system("color F5");
    system("cls");
    do {
        if (y == 0) {
            y++;
            continue;
        }
        if (y == 6) {
            y--;
            continue;
        }
        gotoxy(0, 2);
        printf("   ");
        for (int a = 0; a < 41; a++) { printf("-"); }
        printf("\n   | >>         Tugas Kalkulator        << |\n   ");
        for (int a = 0; a < 41; a++) { printf("-"); }
        printf("\n                                            \n");
        printf("             1. Perkalian                   \n");
        printf("             2. Pembagian                   \n");
        printf("             3. Penjumlahan                 \n");
        printf("             4. Pengurangan                 \n");
        printf("             5. Return Menu utama           \n");
        printf("                                            \n   ");
        for (int a = 0; a < 41; a++) { printf("-"); }
        gotoxy(8, 5 + y);
        printf(">>"); //printf("masuk poro");
        arrowKey = getch();
        switch (arrowKey) {
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
        }
    } while ((int) arrowKey != 13);
    inMenu = y;
    system("cls");
    switch (inMenu) {
        case 1:
            perkalian();
            break;
        case 2:
            pembagian();
            break;
        case 3:
            penjumlahan();
            break;
        case 4:
            pengurangan();
            break;
        case 5:
            system("cls");
            main();
            break;
    }
}

void trigonometryMenu() {

    //Menu SinCostan

    int input, inMenu, y = 1, addMenu;
    char arrowKey;

    system("mode con: cols=120 lines=30");
    system("color F5");
    system("cls");
    do {
        if (y == 0) {
            y++;
            continue;
        }
        if (y == 5) {
            y--;
            continue;
        }
        gotoxy(0, 2);
        printf("   ");
        for (int a = 0; a < 41; a++) { printf("-"); }
        printf("\n   | >>            Sincostan            << |\n   ");
        for (int a = 0; a < 41; a++) { printf("-"); }
        printf("\n                                            \n");
        printf("             1. Sinus                       \n");
        printf("             2. Cosinus                     \n");
        printf("             3. Tangen                      \n");
        printf("             4. Return Menu utama           \n");
        printf("                                            \n   ");
        for (int a = 0; a < 41; a++) { printf("-"); }
        gotoxy(8, 5 + y);
        printf(">>"); //printf("masuk poro");
        arrowKey = getch();
        switch (arrowKey) {
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
        }
    } while ((int) arrowKey != 13);
    inMenu = y;
    system("cls");
    switch (inMenu) {
        case 1:
            Sinus();
            break;
        case 2:
            cosinus();
            break;
        case 3:
            Tangen();
            break;
        case 4:
            system("cls");
            main();


    }

}

void circumferenceMenu() {


    //Menu Keliling Luas Volume

    int input, inMenu, y = 1, addMenu;
    char arrowKey;

    system("mode con: cols=120 lines=30");
    system("color F5");
    system("cls");
    do {
        if (y == 0) {
            y++;
            continue;
        }
        if (y == 5) {
            y--;
            continue;
        }
        gotoxy(0, 2);
        printf("   ");
        for (int a = 0; a < 51; a++) { printf("-"); }
        printf("\n   | >>            Keliling Luas Volume           << |\n   ");
        for (int a = 0; a < 51; a++) { printf("-"); }
        printf("\n   |                                                  \n");
        printf("             1. Hitung Keliling Bangun Datar          \n");
        printf("             2. Hitung Luas Bangun Datar              \n");
        printf("             3. Hitung Volume Bangun Ruang            \n");
        printf("             4. Return Menu utama                     \n");
        printf("                                                      \n   ");
        for (int a = 0; a < 51; a++) { printf("-"); }
        gotoxy(8, 5 + y);
        printf(">>"); //printf("masuk poro");
        arrowKey = getch();
        switch (arrowKey) {
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
        }
    } while ((int) arrowKey != 13);
    inMenu = y;
    system("cls");
    switch (inMenu) {
        case 1:
            menukelilingbangundtr();
            break;
        case 2:
            areaFlatShapeMenu();
            break;
        case 3:
            volumeMenu();
            break;
        case 4:
            system("cls");
            main();


    }
}

void menukelilingbangundtr() {

    //Menu Keliling Bangun Datar

    int input, inMenu, y = 1, addMenu;
    char arrowKey;

    system("mode con: cols=120 lines=30");
    system("color F5");
    system("cls");
    do {
        if (y == 0) {
            y++;
            continue;
        }
        if (y == 6) {
            y--;
            continue;
        }
        gotoxy(0, 2);
        printf("   ");
        for (int a = 0; a < 50; a++) { printf("-"); }
        printf("\n   | >>            Keliling Bangun Datar         << |\n   ");
        for (int a = 0; a < 50; a++) { printf("-"); }
        printf("\n                                                     \n");
        printf("             1. Keliling Persegi                     \n");
        printf("             2. Keliling Trapesium                   \n");
        printf("             3. Keliling Layang-Layang               \n");
        printf("             4. Keliling Lingkaran                   \n");
        printf("             5. Kembali ke Menu Sebelumnya           \n");
        printf("                                                     \n   ");
        for (int a = 0; a < 50; a++) { printf("-"); }
        gotoxy(8, 5 + y);
        printf(">>"); //printf("masuk poro");
        arrowKey = getch();
        switch (arrowKey) {
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
        }
    } while ((int) arrowKey != 13);
    inMenu = y;
    system("cls");
    switch (inMenu) {
        case 1:
            calculateRectangleCircumference();
            break;
        case 2 :
            calculateTrapezoidCircumference();
            break;
        case 3 :
            calculateKiteCircumference();
            break;
        case 4 :
            calculateCircleCircumference();
            break;
        case 5 :
            system("cls");
            circumferenceMenu();


    }
}

void areaFlatShapeMenu() {

    //Menu Luas Bangun Datar

    int input, inMenu, y = 1, addMenu;
    char arrowKey;

    system("mode con: cols=120 lines=30");
    system("color F5");
    system("cls");
    do {
        if (y == 0) {
            y++;
            continue;
        }
        if (y == 6) {
            y--;
            continue;
        }
        gotoxy(0, 2);
        printf("   ");
        for (int a = 0; a < 50; a++) { printf("-"); }
        printf("\n   | >>             Luas Bangun Datar            << |\n   ");
        for (int a = 0; a < 50; a++) { printf("-"); }
        printf("\n                                                     \n");
        printf("             1. Luas Persegi                         \n");
        printf("             2. Luas Trapesium                       \n");
        printf("             3. Luas Layang-Layang                   \n");
        printf("             4. Luas Lingkaran                       \n");
        printf("             5. Kembali ke Menu Sebelumnya           \n");
        printf("                                                     \n   ");
        for (int a = 0; a < 50; a++) { printf("-"); }
        gotoxy(8, 5 + y);
        printf(">>"); //printf("masuk poro");
        arrowKey = getch();
        switch (arrowKey) {
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
        }
    } while ((int) arrowKey != 13);
    inMenu = y;
    system("cls");
    switch (inMenu) {
        case 1:
            calculateRectangleArea();
            break;
        case 2 :
            calculateTrapezoidArea();
            break;
        case 3 :
            calculateAreaOfKite();
            break;
        case 4 :
            calculateAreaOfCircle();
            break;
        case 5 :
            system("cls");
            circumferenceMenu();


    }

}

void volumeMenu() {
    //Menu Volum Bangun Ruang

    int input, inMenu, y = 1, addMenu;
    char arrowKey;

    system("mode con: cols=120 lines=30");
    system("color F5");
    system("cls");
    do {
        if (y == 0) {
            y++;
            continue;
        }
        if (y == 6) {
            y--;
            continue;
        }
        gotoxy(0, 2);
        printf("   ");
        for (int a = 0; a < 50; a++) { printf("-"); }
        printf("\n   | >>             Volume Bangun Ruang          << |\n   ");
        for (int a = 0; a < 50; a++) { printf("-"); }
        printf("\n                                                     \n");
        printf("             1. Volume Kubus                         \n");
        printf("             2. Volume Prisma                        \n");
        printf("             3. Volume Limas                         \n");
        printf("             4. Volume Bola                          \n");
        printf("             5. Kembali ke Menu Sebelumnya           \n");
        printf("                                                     \n   ");
        for (int a = 0; a < 50; a++) { printf("-"); }
        gotoxy(8, 5 + y);
        printf(">>"); //printf("masuk poro");
        arrowKey = getch();
        switch (arrowKey) {
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
        }
    } while ((int) arrowKey != 13);
    inMenu = y;
    system("cls");
    switch (inMenu) {
        case 1:
            calculateCubeVolume();
            break;
        case 2 :
            calculatePrismVolume();
            break;
        case 3 :
            calculatePyramidVolume();
            break;
        case 4 :
            calculateCircleVolume();
            break;
        case 5 :
            system("cls");
            circumferenceMenu();
    }

}

void menu_utama() {
    int input, inMenu, y = 1;
    int addMenu;
    char arrowKey;

    system("mode con: cols=120 lines=30");
    system("color F5");
    system("cls");
    do {
        if (y == 0) {
            y++;
        }
        if (y == 6) {
            y--;
        }
        gotoxy(0, 2);
        printf("   ");
        for (int a = 0; a < 41; a++) { printf("-"); }
        printf("\n   |         Tugas Kalkulator              |\n   ");
        for (int a = 0; a < 41; a++) { printf("-"); }
        printf("\n                                        \n");
        printf("            1. PingPoroLanSudo            \n");
        printf("            2. SinCosTan                  \n");
        printf("            3. Hitung Keliling dan Luas   \n");
        printf("            4. Hitung Akar Kuadrat        \n");
        printf("            5. Exit                       \n");
        printf("                                          \n   ");
        for (int a = 0; a < 41; a++) { printf("-"); }
        gotoxy(8, 5 + y);
        printf(">>");
        arrowKey = getch();
        switch (arrowKey) {
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
        }
    } while ((int) arrowKey != 13);
    inMenu = y;
    system("cls");

    switch (inMenu) {
        case 1: {
            loading();
            menuporolan();
            break;
        }
        case 2: {
            loading();
            trigonometryMenu();
            break;
        }
        case 3: {
            loading();
            circumferenceMenu();
            break;
        }
        case 4: {
            loading();
            root();
            break;
        }
        default :
            printf("\t\t\t\t\t\tAnda Telah Keluar\n");
            exit(0);
    }
}
main(){

    char username[MAX], password [MAX];
    user:
        system("cls");
    printf("Masukkan Username : ");
    scanf(" %[^\n]s", &username);
    printf("Masukkan Password : ");
    scanf(" %[^\n]s", &password);
    if(strcmp(username,"dindaayu")==0 && strcmp(password,"ramadhani")==0){
        printf("Selamat anda berhasil Login\n");
        system("pause");
        menu_utama();
    }
    else {
        printf("maaf username dan password anda salah\n");
        system("pause");
        goto user;
        }
}


