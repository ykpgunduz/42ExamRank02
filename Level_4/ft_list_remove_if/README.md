
## Konu

```C
Ödev Adı      : ft_list_remove_if
Beklenen Dosya: ft_list_remove_if.c
İzin verilen fonksiyonlar: free
--------------------------------------------------------------------------------

Bir bağlı listeden, referans veriyle "eşit" olan tüm elemanları silen ft_list_remove_if adlı bir fonksiyon yazın.

Fonksiyonun tanımı:

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

cmp iki void* alır ve ikisi eşitse 0 döndürür.

Kullanmanız gereken ft_list.h dosyası:

$>cat ft_list.h
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
$>
```
