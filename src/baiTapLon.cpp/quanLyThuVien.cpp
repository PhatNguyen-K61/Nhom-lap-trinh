#include<stdio.h>
#include<stdlib.h>
struct book_st{
    char name[30];
    char type[30];
    int price;
};
void enter(book_st *input);
void enter3Books(book_st *input);
void sort(book_st *input);
int main(){
    book_st *bookList;
    bookList = (book_st *)malloc(sizeof(book_st));
    enter3Books(bookList);
    sort(bookList);
}
void enter(book_st *input){
    printf("\nTen: ");
    fflush(stdin);
    gets(input->name);
    printf("The loai: ");
    gets(input->type);
    printf("Gia tien: ");
    scanf("%d", &input->price);
}
void enter3Books(book_st *input){
    for(int index=0;index<3;index++){
        printf("\nNhap quyen sach %d", index+1);
        enter(input+index);
    }
}
void sort(book_st *input){
    printf("STT||Ten\t\t||The loai\t\t||Gia tien");
    for(int index=0; index < 3; index++){
        printf("\n00%d||%s\t\t||%s\t\t||%d",index+1,(input+index)->name,(input+index)->type,(input+index)->price);
    }
}