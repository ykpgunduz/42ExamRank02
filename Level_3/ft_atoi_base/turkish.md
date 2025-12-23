Ödev Adı: ft_atoi_base
Beklenen Dosyalar: ft_atoi_base.c
İzin verilen fonksiyonlar: Yok
--------------------------------------------------------------------------------

str (taban N <= 16) argümanını tamsayıya (taban 10) çeviren ve sonucu döndüren bir fonksiyon yazın.

Girişte tanınan karakterler: 0123456789abcdef
Bunlar, istenen tabana göre sınırlandırılmalı. Örneğin, taban 4 için "0123", taban 16 için "0123456789abcdef" tanınır.
Büyük harfler de tanınmalı: "12fdb3" ile "12FDB3" aynı olmalı.
Negatif işaret ('-') yalnızca dizenin ilk karakteri ise dikkate alınır.

Fonksiyonunuzu şu şekilde tanımlayın:

int	ft_atoi_base(const char *str, int str_base);

