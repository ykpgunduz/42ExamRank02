Görev adı: first_word
Beklenen dosyalar: first_word.c
İzin verilen fonksiyonlar: write
--------------------------------------------------------------------------------

Bir string alıp, ilk kelimesini ekrana yazan ve ardından yeni satır ekleyen bir program yazın.

Kelime, stringin başı/sonu veya boşluk/tab ile ayrılmış bir bölümdür.

Parametre sayısı 1 değilse veya hiç kelime yoksa, sadece yeni satır yazılır.

Örnekler:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>

