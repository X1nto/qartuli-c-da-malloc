#pragma once

typedef void ბათილი;
typedef char სიმბოლო;
typedef short მოკლე;
typedef int მთელი;
typedef long გრძელი;
typedef float ათწილადი;
typedef double ორმაგი;
typedef size_t ზომა_ტ;

#define სტრუქტურა struct

#define კონსტ const
#define არასტაბილური volatile
#define შეზღუდე restrict
#define გარე extern

#define ხელმოწერილი signed
#define ჩასმული inline

#define თუ if
#define ან else
#define დააბრუნე return
#define გადაცვლა switch
#define შემთხვევა case
#define ქენი do
#define ვიდრე while
#define ყოველი for
#define გამოდი break
#define გააგრძელე continue

#define მისზომა(არგ) sizeof(არგ)
#define მისმწკრივი(არგ) alignof(არგ)
#define ჩაამწკრივე(არგ) alignas(არგ)

#define მთავარი main