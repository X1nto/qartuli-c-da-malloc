//
// Created by Tornike Khintibidze on 22.01.25.
//

#pragma once

#include <time.h>
#include "qartuli.h"

typedef clock_t საათი_ტ;
typedef time_t დრო_ტ;
typedef struct tm დრ;

ჩასმული სიმბოლო *როგორცსიდრო(კონსტ დრ *დროსმმთ) {
    დააბრუნე asctime(დროსმმთ);
}

ჩასმული საათი_ტ საათი(ბათილი) {
    დააბრუნე clock();
}

ჩასმული სიმბოლო *სიდრო(კონსტ დრო_ტ *ტაიმერი) {
    დააბრუნე ctime(ტაიმერი);
}

ჩასმული ორმაგი დროთასხვაობა(დრო_ტ დრო1, დრო_ტ დრო2) {
    დააბრუნე difftime(დრო1, დრო2);
}

ჩასმული სტრუქტურა tm *ლოკალურიდრო(კონსტ დრო_ტ *ტაიმერი) {
    დააბრუნე localtime(ტაიმერი);
}

ჩასმული დრო_ტ გკთდრო(დრ *დროსმმთ) {
    დააბრუნე mktime(დროსმმთ);
}

ჩასმული size_t strftime(სიმბოლო *სტრ, size_t მაქსზომა, კონსტ სიმბოლო *ფორმატი, კონსტ დრ *დროსმმთ) {
    დააბრუნე strftime(სტრ, მაქსზომა, ფორმატი, დროსმმთ);
}
