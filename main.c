#include <stdio.h>
#include <math.h>

int main() {
    int category, pilihan, pilih;
    float sisi, panjang, lebar, tinggi, alas, tinggi_limas, r, diagonal1, diagonal2;
    float luas, volume, keliling;

    printf("\nApa yang ingin anda hitung: ");
    printf("\n____________________________\n");
    printf("1. Bangun Datar\n");
    printf("2. Bangun Ruang\n");
    printf("Pilih kategori:\n");
    scanf("%d", &category);

    if (category == 1) {
        printf("############################\n");
        printf("Menghitung Bangun Datar");
        printf("\n############################\n");
        printf("1. Persegi\n");
        printf("2. Persegi Panjang\n");
        printf("3. Segitiga\n");
        printf("4. Jajar Genjang\n");
        printf("5. Trapesium\n");
        printf("6. Belah Ketupat\n");
        printf("7. Lingkaran\n");
        printf("8. Layang-layang\n");
        printf("Pilih bangun datar:\n");
        scanf("%d", &pilihan);

        printf("Pilih yang ingin dihitung:");
        printf("\n____________________________\n");
        printf("1. Luas\n");
        printf("2. Keliling\n");
        scanf("%d", &pilih);

        if (pilih == 1) {
            if (pilihan == 1) {
                printf("Masukkan panjang sisi: ");
                scanf("%f", &sisi);
                luas = sisi * sisi;
                printf("Luas persegi: %f\n", luas);
            } else if (pilihan == 2) {
                printf("Masukkan panjang: ");
                scanf("%f", &panjang);
                printf("Masukkan lebar: ");
                scanf("%f", &lebar);
                luas = panjang * lebar;
                printf("Luas persegi panjang: %f\n", luas);
            } else if (pilihan == 3) {
                printf("Masukkan alas: ");
                scanf("%f", &alas);
                printf("Masukkan tinggi: ");
                scanf("%f", &tinggi);
                luas = 0.5 * alas * tinggi;
                printf("Luas segitiga: %f\n", luas);
            } else if (pilihan == 4) {
                printf("Masukkan alas: ");
                scanf("%f", &alas);
                printf("Masukkan tinggi: ");
                scanf("%f", &tinggi);
                luas = alas * tinggi;
                printf("Luas jajar genjang: %f\n", luas);
            } else if (pilihan == 5) {
                printf("Masukkan panjang sisi atas: ");
                scanf("%f", &alas);
                printf("Masukkan panjang sisi bawah: ");
                scanf("%f", &lebar);
                printf("Masukkan tinggi: ");
                scanf("%f", &tinggi);
                luas = 0.5 * (alas + lebar) * tinggi;
                printf("Luas trapesium: %f\n", luas);
            } else if (pilihan == 6) {
                printf("Masukkan panjang diagonal 1: ");
                scanf("%f", &diagonal1);
                printf("Masukkan panjang diagonal 2: ");
                scanf("%f", &diagonal2);
                luas = 0.5 * diagonal1 * diagonal2;
                printf("Luas belah ketupat: %f\n", luas);
            } else if (pilihan == 7) {
                printf("Masukkan jari-jari: ");
                scanf("%f", &r);
                luas = M_PI * r * r;
                printf("Luas lingkaran: %f\n", luas);
            } else if (pilihan == 8) {
                printf("Masukkan panjang diagonal 1: ");
                scanf("%f", &diagonal1);
                printf("Masukkan panjang diagonal 2: ");
                scanf("%f", &diagonal2);
                luas = 0.5 * diagonal1 * diagonal2;
                printf("Luas layang-layang: %f\n", luas);
            } else {
                printf("Pilihan tidak valid.\n");
            }
        } else if (pilih == 2) {
            if (pilihan == 1) {
                printf("Masukkan sisi persegi: ");
                scanf("%f", &sisi);
                keliling = 4 * sisi;
                printf("Keliling persegi: %f\n", keliling);
            } else if (pilihan == 2) {
                printf("Masukkan panjang: ");
                scanf("%f", &panjang);
                printf("Masukkan lebar: ");
                scanf("%f", &lebar);
                keliling = 2 * (panjang + lebar);
                printf("Keliling persegi panjang: %f\n", keliling);
            } else if (pilihan == 3) {
                printf("Masukkan panjang sisi 1: ");
                scanf("%f", &sisi);
                printf("Masukkan panjang sisi 2: ");
                scanf("%f", &panjang);
                printf("Masukkan panjang sisi 3: ");
                scanf("%f", &tinggi);
                keliling = sisi + panjang + tinggi;
                printf("Keliling segitiga: %f\n", keliling);
            } else if (pilihan == 4) {
                printf("Masukkan panjang alas: ");
                scanf("%f", &alas);
                printf("Masukkan panjang sisi miring: ");
                scanf("%f", &sisi);
                keliling = 2 * (alas + sisi);
                printf("Keliling jajar genjang: %f\n", keliling);
            } else if (pilihan == 5) {
                printf("Masukkan panjang sisi 1: ");
                scanf("%f", &sisi);
                printf("Masukkan panjang sisi 2: ");
                scanf("%f", &panjang);
                printf("Masukkan panjang sisi 3: ");
                scanf("%f", &lebar);
                printf("Masukkan panjang sisi 4: ");
                scanf("%f", &tinggi);
                keliling = sisi + panjang + lebar + tinggi;
                printf("Keliling trapesium: %f\n", keliling);
            } else if (pilihan == 6) {
                printf("Masukkan panjang sisi: ");
                scanf("%f", &sisi);
                keliling = 4 * sisi;
                printf("Keliling belah ketupat: %f\n", keliling);
            } else if (pilihan == 7) {
                printf("Masukkan jari-jari: ");
                scanf("%f", &r);
                keliling = 2 * M_PI * r;
                printf("Keliling lingkaran: %f\n", keliling);
            } else if (pilihan == 8) {
                printf("Masukkan panjang sisi 1: ");
                scanf("%f", &sisi);
                printf("Masukkan panjang sisi 2: ");
                scanf("%f", &panjang);
                keliling = 2 * (sisi + panjang);
                printf("Keliling layang-layang: %f\n", keliling);
            } else {
                printf("Pilihan tidak valid.\n");
            }
        } else {
            printf("Pilihan tidak valid.\n");
        }
    } else if (category == 2) {
        printf("############################\n");
        printf("Menghitung Bangun Ruang");
        printf("\n############################\n");
        printf("1. Kubus\n");
        printf("2. Balok\n");
        printf("3. Limas Segi Empat\n");
        printf("4. Bola\n");
        printf("5. Prisma Segitiga\n");
        printf("6. Tabung\n");
        printf("7. Kerucut\n");
        printf("Pilih bangun ruang:\n");
        scanf("%d", &pilihan);

        printf("Pilih yang ingin dihitung:");
        printf("\n____________________________\n");
        printf("1. Luas\n");
        printf("2. Volume\n");
        scanf("%d", &pilih);

        if (pilih == 1) {
            if (pilihan == 1) {
                printf("Masukkan panjang sisi: ");
                scanf("%f", &sisi);
                luas = 6 * pow(sisi, 2);
                printf("Luas kubus: %f\n", luas);
            } else if (pilihan == 2) {
                printf("Masukkan panjang: ");
                scanf("%f", &panjang);
                printf("Masukkan lebar: ");
                scanf("%f", &lebar);
                printf("Masukkan tinggi: ");
                scanf("%f", &tinggi);
                luas = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
                printf("Luas balok: %f\n", luas);
            } else if (pilihan == 3) {
                printf("Masukkan panjang alas: ");
                scanf("%f", &alas);
                printf("Masukkan tinggi limas: ");
                scanf("%f", &tinggi_limas);
                luas = 2 * (alas * alas) + 4 * (0.5 * alas * tinggi_limas);
                printf("Luas limas segi empat: %f\n", luas);
            } else if (pilihan == 4) {
                printf("Masukkan jari-jari: ");
                scanf("%f", &r);
                luas = 4 * M_PI * pow(r, 2);
                printf("Luas bola: %f\n", luas);
            } else if (pilihan == 5) {
                printf("Masukkan panjang alas segitiga: ");
                scanf("%f", &alas);
                printf("Masukkan tinggi prisma: ");
                scanf("%f", &tinggi);
                luas = alas * tinggi + 2 * (alas * sqrt(pow((tinggi),2) - pow((alas/2),2)));
                printf("Luas prisma segitiga: %f\n", luas);
            } else if (pilihan == 6) {
                printf("Masukkan jari-jari: ");
                scanf("%f", &r);
                printf("Masukkan tinggi tabung: ");
                scanf("%f", &tinggi);
                luas = 2 * M_PI * r * (r + tinggi);
                printf("Luas tabung: %f\n", luas);
            } else if (pilihan == 7) {
                printf("Masukkan jari-jari: ");
                scanf("%f", &r);
                printf("Masukkan tinggi kerucut: ");
                scanf("%f", &tinggi);
                luas = M_PI * r * (r + sqrt(pow((tinggi),2) + pow((r),2)));
                printf("Luas kerucut: %f\n", luas);
            } else {
                printf("Pilihan tidak valid.\n");
            }
        } else if (pilih == 2) {
            if (pilihan == 1) {
                printf("Masukkan panjang sisi: ");
                scanf("%f", &sisi);
                volume = pow(sisi, 3);
                printf("Volume kubus: %f\n", volume);
            } else if (pilihan == 2) {
                printf("Masukkan panjang: ");
                scanf("%f", &panjang);
                printf("Masukkan lebar: ");
                scanf("%f", &lebar);
                printf("Masukkan tinggi: ");
                scanf("%f", &tinggi);
                volume = panjang * lebar * tinggi;
                printf("Volume balok: %f\n", volume);
            } else if (pilihan == 3) {
                printf("Masukkan panjang alas: ");
                scanf("%f", &alas);
                printf("Masukkan tinggi limas: ");
                scanf("%f", &tinggi_limas);
                volume = (1.0/3) * pow(alas, 2) * tinggi_limas;
                printf("Volume limas segi empat: %f\n", volume);
            } else if (pilihan == 4) {
                printf("Masukkan jari-jari: ");
                scanf("%f", &r);
                volume = (4.0/3) * M_PI * pow(r, 3);
                printf("Volume bola: %f\n", volume);
            } else if (pilihan == 5) {
                printf("Masukkan panjang alas segitiga: ");
                scanf("%f", &alas);
                printf("Masukkan tinggi prisma: ");
                scanf("%f", &tinggi);
                volume = (1.0/3) * pow(alas, 2) * tinggi;
                printf("Volume prisma segitiga: %f\n", volume);
            } else if (pilihan == 6) {
                printf("Masukkan jari-jari: ");
                scanf("%f", &r);
                printf("Masukkan tinggi tabung: ");
                scanf("%f", &tinggi);
                volume = M_PI * pow(r, 2) * tinggi;
                printf("Volume tabung: %f\n", volume);
            } else if (pilihan == 7) {
                printf("Masukkan jari-jari: ");
                scanf("%f", &r);
                printf("Masukkan tinggi kerucut: ");
                scanf("%f", &tinggi);
                volume = (1.0/3) * M_PI * pow(r, 2) * tinggi;
                printf("Volume kerucut: %f\n", volume);
            } else {
                printf("Pilihan tidak valid.\n");
            }
        } else {
            printf("Pilihan tidak valid.\n");
        }
    } else {
        printf("Pilihan tidak valid.\n");
    }

    return 0;
}
