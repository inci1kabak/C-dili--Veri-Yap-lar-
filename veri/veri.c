// veri.c : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.

#include <stdio.h>
#include <stdlib.h>


#define MAX 5

struct stack
{
    char* items[MAX];
    int top;
};
typedef struct stack st;

void createEmptyStack(st* s)
{
    s->top = -1;
}


int isfull(st* s)
{
    if (s->top == MAX - 1)
        return 1;
    else
        return 0;
}

int isempty(st* s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}


void push(st* s, char* newitem)
{
    if (isfull(s))
    {

    }
    else
    {
        s->top++;
        s->items[s->top] = newitem;
    }
}


void printStack(st* s)
{
    for (int i = 0; i < s->top + 1; i++)
    {
        printf("%d nolu yolcu adi %s  \n", i + 1, s->items[i]);
    }
    printf("\n\n");
}

int main()
{
    char* passengers[] = { "umut kabak","yusuf kabak","osman kabak","nesrin kabak","nuran kabak","messi","domagaj vida","inci kabak" };

    int passengerCount = sizeof(passengers) / sizeof(passengers[0]);

    int firstPassenger = 0;
    int lastPassenger = MAX;
    for (int bus = 0; bus < passengerCount / MAX + 1; bus++)
    {
        int ch;
        st* s = (st*)malloc(sizeof(st));

        createEmptyStack(s);

        for (int i = firstPassenger; i < lastPassenger; i++)
        {
            push(s, passengers[i]);
        }

        firstPassenger += MAX;
        lastPassenger += MAX;

        printf("****************%d.otobus*****************\n", bus + 1);
        printStack(s);
    }
}



























































// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
