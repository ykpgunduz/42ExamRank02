Ödev Adı: ft_list_size
Beklenen Dosyalar: ft_list_size.c, ft_list.h
Kullanılabilir Fonksiyonlar:
--------------------------------------------------------------------------------

Bağlı listenin (linked list) eleman sayısını döndüren bir fonksiyon yazınız.

Fonksiyon şu şekilde tanımlanmalıdır:

int ft_list_size(t_list *begin_list);

Aşağıdaki yapıyı kullanmalı ve ft_list.h adında bir dosyada sunmalısınız:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

