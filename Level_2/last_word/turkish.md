
## Konu

```C
Ödev Adı: last_word
Beklenen Dosyalar: last_word.c
İzin verilen fonksiyonlar: write
--------------------------------------------------------------------------------

Bir dize alan ve bu dizenin son kelimesini ekrana yazıp ardından \n ekleyen bir program yazın.

Kelime, boşluk/tab ile veya dizenin başı/sonu ile ayrılmış bir bölümdür.

Parametre sayısı 1 değilse veya hiç kelime yoksa, yeni bir satır yazdırın.

Örnekler:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>

```