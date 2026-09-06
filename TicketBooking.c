#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Playlist{
    char name[50], genre[20];
    int ID;
    float duration;
    struct Playlist* next;
    struct Playlist* prev
} Playlist;
Playlist* create(char* name, int ID, char* genre, float duration){
    Playlist* movie = malloc(sizeof(Playlist));
    strcpy(movie->name, name);
    movie->ID = ID;
    strcpy(movie->genre, genre);
    movie->duration = duration;
    movie->next = NULL;
    movie->prev = NULL;
    return movie;
}
int main(){
    Playlist* head = NULL;
    char name[50], genre[20];
    float duration;
    int choice1, choice2, position, ID;
    while(1){
        printf("\nEnter choice [1. Insert name | 2. Remove name | 3. Search name | 4. Show names | 5. Exit] : ");
        scanf(" %d", &choice1);
        if (choice1 > 5 || choice1 < 1){
            printf("\nInvalid choice");
            continue;
        }
        else if (choice1 == 1){
            printf("\nInsert new movie at the [1. Beginning | 2. Middle | 3. End] : ");
            scanf(" %d", &choice2);
            if (choice2 > 3 || choice2 < 1){
                printf("\nInvalid choice");
                continue;
            }
            printf("\nEnter name of movie : ");
            scanf(" %s", name);
            printf("\nEnter ID of movie : ");
            scanf(" %d", &ID);
            printf("\nEnter genre of movie : ");;
            scanf(" %s", genre);
            printf("\nEnter duration of movie in hh.mm format : ");
            scanf(" %f", &duration);
            Playlist* movie = create(name, ID, genre, duration);
            if (choice2 == 1 || head == NULL){
                movie->next = head;
                movie->prev = NULL;
                if (head != NULL) head->prev = movie;
                head = movie;
            }
            else if(choice2 == 2 ){
                printf("\nEnter position to insert : ");
                scanf(" %d", &position);
                Playlist* temp = head;
                for (int i = 1; i < position - 1; i++) temp = temp->next;
                movie->next = temp->next;
                movie->prev = temp;
                if (temp->next != NULL) temp->next->prev = movie;
                temp->next = movie;
            }
            else if(choice2 == 3){
                Playlist* temp = head;
                while (temp->next != NULL) temp = temp->next;
                movie->prev = temp;
                temp->next = movie;
            }
        }
        else if (choice1 == 2){
            if (head == NULL){
                printf("\nList is empty!");
                continue;
            }
            printf("\nRemove movie from the [1. Beginning | 2. Middle | 3. End] : ");
            scanf(" %d", &choice2);
            if (choice2 > 3 || choice2 < 1){
                printf("\nInvalid choice");
            }
            else if(choice2 == 1){
                Playlist* temp = head;
                head = head->next;
                if (head != NULL) head->prev = NULL;
                free(temp);
            }
            else if(choice2 == 2){
                printf("\nEnter position to delete : ");
                scanf(" %d", &position);
                Playlist* temp = head;
                for (int i = 1; i < position - 1; i++) temp = temp->next;
                Playlist* temp2 = temp->next;
                temp->next = temp2->next;
                if (temp2->next != NULL) temp2->next->prev = temp;
                free(temp2);
            }
            else if (choice2 == 3){
                Playlist* temp = head;
                while (temp->next != NULL) temp = temp->next;
                if (temp->prev != NULL) temp->prev->next = NULL;
                else head = NULL;
                free(temp->next);
                temp->next = NULL;
            }
        }
        else if (choice1 == 3){
            if (head == NULL) printf("\nThe list is empty!");
            else{
                Playlist* temp = head;
                int search, a = 0;
                printf("\nEnter ID of movie : ");
                scanf(" %d", &search);
                while (temp != NULL){
                    if (temp->ID == search){
                        a = 1;
                        strcpy(name, temp->name);
                        strcpy(genre, temp->genre);
                        duration = temp->duration;
                        break;
                    }
                    temp = temp->next;
                }
                if (a == 0) printf("\nNo movie with ID %d present.\n", search);
                else printf("\nmovie ID %d is %s, duration %.2f, genre %s\n", search, name, duration, genre);
            }
        }
        else if (choice1 == 4){
            if (head == NULL) printf("\nThe list is empty!");
            else{
                printf("\nShow movie names from [1. first to last | 2. last to first] : ");
                scanf(" %d", &choice2);
                if (choice2 >2 || choice2 < 1) printf("\nInvalid choice");
                else{
                    printf("\nmovie names : ");
                    Playlist* temp = head;
                    if (choice2 == 1){
                        while (temp != NULL){
                            printf("\nName : %s, Genre : %s, ID : %d, Duration : %.2f", temp->name, temp->genre, temp->ID, temp->duration);
                            temp = temp->next;
                        }
                    }
                    else{
                        while (temp->next != NULL) temp = temp->next;
                        while (temp != NULL){
                            printf("\nName : %s, Genre : %s, ID : %d, Duration : %.2f", temp->name, temp->genre, temp->ID, temp->duration);
                            temp = temp->prev;
                        }
                    }
                }
            }
        }
        else if(choice1 == 5) break;
    }
    return 0;
}