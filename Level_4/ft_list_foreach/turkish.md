Görevin Adı: ft_list_foreach
Beklenen Dosyalar: ft_list_foreach.c, ft_list.h
İzin Verilen Fonksiyonlar:
--------------------------------------------------------------------------------

Bir liste ve bir fonksiyon işaretçisi alan ve bu fonksiyonu listenin her
elemanına uygulayan bir fonksiyon yazın.

Aşağıdaki şekilde tanımlanmalıdır:

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

f tarafından işaret edilen fonksiyon aşağıdaki şekilde kullanılacaktır:

(*f)(list_ptr->data);

Aşağıdaki yapıyı kullanmalı ve ft_list.h adlı bir dosyada teslim etmelisiniz:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

