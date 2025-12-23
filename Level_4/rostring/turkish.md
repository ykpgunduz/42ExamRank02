

Ödev Adı: rostring
Beklenen Dosyalar: rostring.c
İzin verilen fonksiyonlar: write, malloc, free
--------------------------------------------------------------------------------

Bir dize alan ve bu dizenin kelimelerini sola bir kelime döndürerek ekrana yazan bir program yazın.

Yani, ilk kelime sona gelir, diğerleri aynı sırada kalır.

Kelime, boşluk/tab ile veya dizenin başı/sonu ile ayrılmış bir bölümdür.

Çıktıda kelimeler yalnızca bir boşluk ile ayrılır.

Argüman sayısı birden azsa, program \n yazdırır.

Örnek:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$>

