Ödev Adı: fprime
Beklenen Dosyalar: fprime.c
İzin verilen fonksiyonlar: printf, atoi
--------------------------------------------------------------------------------

Pozitif bir tam sayı alan ve asal çarpanlarını ekrana yazıp ardından yeni satır ekleyen bir program yazın.

Çarpanlar artan sırada ve '*' ile ayrılmış şekilde gösterilmeli, böylece çıktıdaki ifade doğru sonucu vermeli.

Parametre sayısı 1 değilse, sadece yeni bir satır yazdırın.

Girdi her zaman geçerlidir.

Örnekler:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$
