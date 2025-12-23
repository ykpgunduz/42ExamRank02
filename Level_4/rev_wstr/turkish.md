Ödev Adı: rev_wstr
Beklenen Dosyalar: rev_wstr.c
İzin verilen fonksiyonlar: write, malloc, free
--------------------------------------------------------------------------------

Bir dizeyi parametre olarak alan ve kelimelerini tersten ekrana yazan bir program yazın.

Kelime, boşluk ve/veya tab ile veya dizenin başı/sonu ile ayrılmış bir bölümdür.

Parametre sayısı 1 değilse, program '\n' yazdırır.

Test edilecek parametrelerde fazladan boşluk olmayacak (yani başta/sonda fazladan boşluk yok ve kelimeler tam olarak bir boşluk ile ayrılmış).

Örnekler:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>

