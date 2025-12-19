otra (tercer argumento).
entonces el programa simplemente reescribe la cadena seguida de un salto de línea.
eNcOre Un ExEmPle Pas Facile a Ecrire $
## Konu

```C
Görev adı: search_and_replace
Beklenen dosyalar: search_and_replace.c
İzin verilen fonksiyonlar: write, exit
--------------------------------------------------------------------------------

search_and_replace adında bir program yazın. 3 argüman alır: ilki bir string, ikincisi bu stringde değiştirilecek harf, üçüncüsü ise yeni harf.

Argüman sayısı 3 değilse, sadece yeni satır yazılır.

İkinci argüman birinci argümanda yoksa, program sadece stringi ve yeni satırı yazar.

Örnekler:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $

```