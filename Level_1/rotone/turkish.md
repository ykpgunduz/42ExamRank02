Görev adı: rotone
Beklenen dosyalar: rotone.c
İzin verilen fonksiyonlar: write
-------------------------------------------------------------------------

Bir program yazın, bir dizeyi alıp ekrana yazdırsın; her harfi alfabedeki bir sonraki harf ile değiştirsin.

'z' 'a'ya ve 'Z' 'A'ya dönüşür. Büyük/küçük harf durumu korunur.

Çıktıdan sonra bir \n gelir.

Argüman sayısı 1 değilse, program sadece \n gösterir.

Örnekler:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>

