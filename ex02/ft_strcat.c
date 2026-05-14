#include <stdio.h>
char *ft_strcat(char *dest,char *src)
{
    int i = 0;
    int j = 0;
    while(dest[i] != '\0')
    {
        i++;
    }
    while(src[j] != '\0')
    {
        dest[i] = src[j];
    i++;
    j++;
    }
    dest[i] = '\0';
    return(dest);
}
int main(void)
{
    char dest[50] = "Man";
    char src[] = "Women";
    char dest1[50] = "42Bangkok";
    char src1[] = "";
    char dest2[50] = "";
    char src2[] = "C is awesome";
    char dest3[50] = "";
    char src3[] = "";
    printf("%s\n", ft_strcat(dest, src));
    printf("%s\n", ft_strcat(dest1, src1));
    printf("%s\n", ft_strcat(dest2, src2));
    printf("%s\n", ft_strcat(dest3, src3));
}

//ฟังก์ชันนี้ทำหน้าที่นำข้อความ (String) จากต้นทาง src (Source) 
//ไปต่อท้ายข้อความที่ปลายทาง dst (Destination) 
// โดยมันจะทำการเขียนทับตัวอักษรปิดท้ายเดิม
//(Null byte หรือ \0) ของ dst ทิ้งไป

// สิ่งที่สำคัญที่สุดคือ โปรแกรมเมอร์ต้องรับผิดชอบในการ
// เตรียมพื้นที่ (Buffer) ของ dst ให้ใหญ่เพียงพอ 
// ที่จะรับข้อความที่นำมาต่อรวมกันได้ทั้งหมด ซึ่ง
// ขนาดที่ต้องการคือ ความยาวของ dst + ความยาวของ src + 1 
// (บวก 1 เพื่อเหลือที่ว่างไว้ใส่ตัวปิดท้าย \0 ตัวใหม่)