

Ödev Adı: do_op
Beklenen Dosyalar: *.c, *.h
İzin verilen fonksiyonlar: atoi, printf, write
--------------------------------------------------------------------------------

Üç dize alan bir program yazın:
- Birinci ve üçüncü dize, int'e sığan işaretli ondalık tam sayı gösterimleridir.
- İkinci dize, şu aritmetik operatörlerden biridir: + - * / %

Program, istenen aritmetik işlemin sonucunu ekrana yazdırmalı ve ardından yeni satır eklemelidir. Parametre sayısı 3 değilse, program sadece yeni bir satır yazdırır.

Dizelerin hatalı veya garip karakterler içermediğini varsayabilirsiniz. Negatif sayılar girişte veya çıkışta yalnızca başında bir '-' ile gösterilir. Sonuç int'e sığar.

Örnekler:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$

