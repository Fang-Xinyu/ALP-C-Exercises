#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1000

typedef struct {
    char name[50];
    int gold;
    int silver;
    int bronze;
} Country;

int find_country(Country arr[], int count, char *name) {
    int i;
    for (i = 0; i < count; i++) {
        if (strcmp(arr[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

int compare(const void *a, const void *b) {
    Country *c1 = (Country *)a;
    Country *c2 = (Country *)b;
    
    if (c1->gold != c2->gold)
        return c2->gold - c1->gold;
    if (c1->silver != c2->silver)
        return c2->silver - c1->silver;
    if (c1->bronze != c2->bronze)
        return c2->bronze - c1->bronze;
    return 0;
}

int main() {
    int N;
    scanf("%d", &N);
    
    Country countries[MAX];
    int country_count = 0;
    
    int i;
    for (i = 0; i < N; i++) {
        char name[50], type[10];
        scanf("%s %s", name, type);
        
        int idx = find_country(countries, country_count, name);
        if (idx == -1) {
            strcpy(countries[country_count].name, name);
            countries[country_count].gold = 0;
            countries[country_count].silver = 0;
            countries[country_count].bronze = 0;
            idx = country_count;
            country_count++;
        }
        
        if (strcmp(type, "jin") == 0) {
            countries[idx].gold++;
        } else if (strcmp(type, "yin") == 0) {
            countries[idx].silver++;
        } else if (strcmp(type, "tong") == 0) {
            countries[idx].bronze++;
        }
    }
    
    qsort(countries, country_count, sizeof(Country), compare);
    
    for (i = 0; i < country_count; i++) {
        printf("%s %d %d %d\n", countries[i].name, countries[i].gold, countries[i].silver, countries[i].bronze);
    }
    
    return 0;
}

