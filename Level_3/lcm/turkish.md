divisible por ambos enteros.
diferente de 0.
calcular de la siguiente manera:


Ödev Adı: lcm
Beklenen Dosyalar: lcm.c
İzin verilen fonksiyonlar: Yok
--------------------------------------------------------------------------------

İki işaretsiz tam sayı parametresi alan ve bunların en küçük ortak katını (EKOK) döndüren bir fonksiyon yazın.

EKOK, iki sıfır olmayan tam sayının her ikisine de tam bölünebilen en küçük pozitif tam sayıdır.

EKOK iki şekilde hesaplanabilir:
- Her iki sayının tüm katlarını bulup ortak olan ilk pozitif katı seçebilirsiniz.
- İki sayının EBOB'unu bulup şu şekilde hesaplayabilirsiniz:
	EKOK(x, y) = | x * y | / EBOB(x, y)

| x * y | ifadesi "x ile y'nin çarpımının mutlak değeri" anlamına gelir.

En az bir sayı sıfırsa, EKOK 0'dır.

Fonksiyonun prototipi:

  unsigned int    lcm(unsigned int a, unsigned int b);

