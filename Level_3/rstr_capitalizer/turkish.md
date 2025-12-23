Ödev Adı: rstr_capitalizer
Beklenen Dosyalar: rstr_capitalizer.c
İzin verilen fonksiyonlar: write
--------------------------------------------------------------------------------

Bir veya daha fazla dize alan ve her argüman için, her kelimenin son harfini büyük, diğerlerini küçük harf yapan ve sonucu \n ile ekrana yazan bir program yazın.

Kelime, boşluk/tab ile veya dizenin başı/sonu ile ayrılmış bir bölümdür. Bir kelime tek harfse, o harf büyük olmalı.

Harf, [a-zA-Z] kümesindeki bir karakterdir.

Parametre yoksa, \n yazdırın.

Örnekler:

$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
$> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
seconD tesT A littlE biT   moaR compleX$
   but... thiS iS noT thaT compleX$
     okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
$>

