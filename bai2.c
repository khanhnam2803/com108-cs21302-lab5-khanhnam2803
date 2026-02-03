/******************************************************************************
 * Họ và tên: [Huỳnh Khánh Nam]
 * MSSV:      [PS43500]
 * Lớp:       [COM108 - CS21302]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 
#include <stdio.h>

int laNamNhuan(int nam) {
    if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
        return 1; // Năm nhuận
    } else {
        return 0; // Không phải năm nhuận
    }
}

int main() {
    int year;

    printf("Nhap nam: ");
    scanf("%d", &year);

    if (laNamNhuan(year)) {
        printf("%d la nam nhuan.\n", year);
    } else {
        printf("%d khong phai la nam nhuan.\n", year);
    }

    return 0;
}
