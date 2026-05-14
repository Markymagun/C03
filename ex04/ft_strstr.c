#include <stdio.h>
char	*ft_strstr(char *str,char *to_find)
{
	int i = 0;
	int j;

	if(to_find[0] == '\0')
	{
		return(str);
	}
	while(str[i] != '\0')
	{
		j = 0;

		while(str[i+j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if(to_find[j] == '\0')
		{
			return(&str[i]);
		}
		i++;
	}
	return(0);
}
int main(void)
{
	printf("%s\n", ft_strstr("CCat","Cat"));
	printf("%s\n", ft_strstr("CCat","\0"));
	// printf("%s\n", ft_strstr("42Bangkok", "CCat"));
// 	char *result;
// 	result = ft_strstr("42BangkokCCat", "CCat");
// 	if (result == 0) // หรือใช้ if (result == NULL) ก็ได้
//     {
//         printf("Result is NULL (Not found!)\n");
//     }
}


//คำอธิบาย (DESCRIPTION)

strstr(): ทำหน้าที่ค้นหา "ข้อความย่อย (needle)" ว่ามีซ่อนอยู่ใน
"ข้อความหลัก (haystack)" หรือไม่ โดยจะหาตำแหน่ง "แรกสุด" ที่เจอ
(อุปมาเหมือนการงมเข็ม (needle) ในมหาสมุทร/กองฟาง (haystack) ครับ)

การค้นหานี้จะไม่เอาตัวอักษรปิดท้าย (\0 หรือ Null byte) มาเปรียบเทียบด้วย

ค่าที่ส่งกลับ (RETURN VALUE)
ฟังก์ชันทั้งสองจะส่งค่ากลับเป็น พอยน์เตอร์ (Pointer) ตามเงื่อนไขดังนี้:

ถ้าค้นหาเจอ: จะคืนค่า Pointer ที่ชี้ไปยัง "ตัวอักษรตัวแรก" 
ของข้อความย่อยตำแหน่งที่หาเจอในข้อความหลัก

ถ้าค้นหา "ไม่" เจอ: จะคืนค่าเป็น NULL

กรณีพิเศษ: ถ้าข้อความย่อย (needle) เป็นข้อความว่างๆ (Empty string เช่น "") 
ฟังก์ชันจะคืนค่าเป็น Pointer ของข้อความหลัก (haystack) ตั้งแต่ตัวแรกสุดกลับไปเลย