

Ödev Adı: expand_str
Beklenen Dosyalar: expand_str.c
İzin verilen fonksiyonlar: write
--------------------------------------------------------------------------------

Bir dize alan ve bu dizenin kelimeleri arasında tam olarak üç boşluk olacak şekilde, başta/sonda boşluk veya tab olmadan ve ardından yeni satır ekleyerek ekrana yazan bir program yazın.

Kelime, boşluk/tab ile veya dizenin başı/sonu ile ayrılmış bir bölümdür.

Argüman sayısı 1 değilse veya hiç kelime yoksa, program sadece yeni satır yazdırır.

Örnekler:

$> ./expand_str "See? It's easy to print the same thing" | cat -e
See?   It's   easy   to   print   the   same   thing$
$> ./expand_str " this        time it      will     be    more complex  " | cat -e
this   time   it   will   be   more   complex$
$> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./expand_str "" | cat -e
$
$>

