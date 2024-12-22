#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    srand(time(0));
    int rastgeleSayi = rand() % 250 + 1;
    int tahmin = 0;
    int denemeler = 0;

    cout << "** TAHMİN OYUNUNA HOŞ GELDİN! **\n";
    cout << "1 ile 250 arasında bir sayı tuttum. Doğru tahmin etmeyi dene!\n";

    while (tahmin != rastgeleSayi)
    {
        cout << "Tahmininizi Girin: "; cin >> tahmin;
        denemeler++;

        if (tahmin < rastgeleSayi)
        {
            cout << "Daha Büyük Bir Sayı Tahmin Edin!\n";
        }
        else if (tahmin > rastgeleSayi)
        {
            cout << "Daha Küçük Bir Sayı Tahmin Edin!\n";
        }
        else
        {
            cout << "TEBRİKLER! " << denemeler << " denemede doğru tahmin ettin.\n";
        }
    }
    return 0;
}
