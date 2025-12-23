Görev adı: rot_13
Beklenen dosyalar: rot_13.c
İzin verilen fonksiyonlar: write
--------------------------------------------------------------------------------

Bir program yazın; bir dize alıp, her harfi alfabede 13 harf ileriye kaydırılmış karşılığı ile değiştirerek ekrana yazsın.

'z' 'm'ye ve 'Z' 'M'ye dönüşür. Büyük/küçük harf durumu korunur.

Çıktı bir satır sonu ile bitmelidir.

Argüman sayısı 1 değilse, program yalnızca bir satır sonu gösterir.

Örnek:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>

