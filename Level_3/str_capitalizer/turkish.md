ponga el resto en minúsculas, y muestre el resultado en la salida estándar,
seguido de un \n.
por el inicio/fin de la cadena. Si una palabra tiene solo una letra, debe ser
capitalizada.

## Konu

```c
Ödev Adı: str_capitalizer
Beklenen Dosyalar: str_capitalizer.c
İzin verilen fonksiyonlar: write
--------------------------------------------------------------------------------

Bir veya daha fazla dize alan ve her argüman için, her kelimenin ilk harfini büyük, diğerlerini küçük harf yapan ve sonucu \n ile ekrana yazan bir program yazın.

Kelime, boşluk/tab ile veya dizenin başı/sonu ile ayrılmış bir bölümdür. Bir kelime tek harfse, o harf büyük olmalı.

Parametre yoksa, \n yazdırın.

Örnek:

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
     Okay, This Is The Last 1239809147801 But Not    The Least    T$
$>

```
