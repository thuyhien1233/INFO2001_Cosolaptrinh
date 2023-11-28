#include <stdio.h>
#include <string.h>

struct Students {
    char ID[20];
    char Name[50];
    int Age;
    char Grade[20];
    char Gender[10]; 
    float GPA;
};


struct Students st() {
    struct Students st;
    printf("ID Sinh vien: ");
    scanf("%s", &st.ID);
    printf("Ten sinh vien: ");
    scanf("%s", st.Name);
    gets(st.Name);
    printf("Tuoi: ");
    scanf("%d", &st.Age);
    printf("Gioi tinh: ");
    scanf("%s", st.Gender);
    printf("GPA: ");
    scanf("%f", &st.GPA);
    return st;
}
void displayStudent(struct Students s) {
    printf("\nThong tin sinh vien:\n");
    printf("Ten sinh vien: %s\n", s.Name);
    printf("ID sinh vien: %d\n", s.ID);
    printf("Tuoi: %d\n", s.Age);
    printf("Gioi tinh %s\n", s.Gender);
    printf("GPA: %.2f\n", s.GPA);
}
int main(){
	 int n;
    printf("Nhap so luong hoc sinh: ");
    scanf("%d", &n);
    struct Students Students[n];
	for (int i=0; i<2; i++){
	printf("Nhap thong tin chi tiet sinh vien %d:\n", i + 1);
	Students[i]=st();
}
    for (int i = 0; i < 2; i++) {
        displayStudent(Students[i]);
    }

    return 0;
}



