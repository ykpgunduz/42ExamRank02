Ödev Adı: epur_str
Beklenen Dosyalar: epur_str.c
İzin verilen fonksiyonlar: write
--------------------------------------------------------------------------------

Bir dize alan ve bu dizenin kelimeleri arasında tam olarak bir boşluk olacak şekilde, başta/sonda boşluk veya tab olmadan ve ardından \n ekleyerek ekrana yazan bir program yazın.

Kelime, boşluk/tab ile veya dizenin başı/sonu ile ayrılmış bir bölümdür.

Argüman sayısı 1 değilse veya hiç kelime yoksa, program \n yazdırır.

Örnek:

$> ./epur_str "See? It's easy to print the same thing" | cat -e
See? It's easy to print the same thing$
$> ./epur_str " this        time it      will     be    more complex  . " | cat -e
this time it will be more complex .$
$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./epur_str "" | cat -e
$
$>