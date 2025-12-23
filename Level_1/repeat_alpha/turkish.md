Görev adı: repeat_alpha
Beklenen dosyalar: repeat_alpha.c
İzin verilen fonksiyonlar: write
--------------------------------------------------------------------------------

repeat_alpha adında bir program yazın. Bir string alır ve her harfi alfabedeki sırasınca tekrarlar, ardından yeni satır ekler.

'a' 'a' olur, 'b' 'bb' olur, 'e' 'eeeee' olur, vb...

Büyük/küçük harf durumu korunur.

Argüman sayısı 1 değilse, sadece yeni satır yazılır.

Örnekler:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>

