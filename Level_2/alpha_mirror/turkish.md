Ödev Adı: alpha_mirror
Beklenen Dosyalar: alpha_mirror.c
İzin verilen fonksiyonlar: write
--------------------------------------------------------------------------------

Bir dize alan ve bu dizenin her alfabetik karakterini karşıt harfiyle değiştirip ekrana yazan, ardından yeni satır ekleyen bir program yazın.

'a' → 'z', 'Z' → 'A'
'd' → 'w', 'M' → 'N'
ve bu şekilde devam eder.

Harflerin büyük/küçük durumu değişmez.

Argüman sayısı 1 değilse, sadece yeni bir satır yazdırın.

Örnekler:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
