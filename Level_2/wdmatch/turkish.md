Ödev Adı: wdmatch
Beklenen Dosyalar: wdmatch.c
İzin verilen fonksiyonlar: write
--------------------------------------------------------------------------------

İki dize alan ve ikinci dizgedeki karakterlerin sırasını koruyarak, birinci dizgeyi ikinci dizgedeki karakterlerle yazmak mümkün mü diye kontrol eden bir program yazın.

Mümkünse, program dizgeyi ve ardından \n yazdırır; değilse sadece \n yazdırır.

Argüman sayısı 2 değilse, program sadece \n yazdırır.

Örnekler:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$

```