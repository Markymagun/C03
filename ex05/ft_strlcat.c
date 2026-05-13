#include <stdio.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dest_len = 0;
    unsigned int src_len = 0;
    while(dest[dest_len] != '\0' && dest_len < size)
    {
        dest_len++;
    }
    while(src[src_len] != '\0')
    {
        src_len++;
    }
    if(size <= dest_len)
    {
        return(size + src_len);
    }
    unsigned int j = 0;

    while(src[j] != '\0' && dest_len + j < size - 1)
    {
        dest[dest_len + j] = src[j];
        j++;
    } 
    dest[dest_len + j] = '\0';
    return(dest_len + src_len);
}

int main(void)
{
    //Case 1: กระเป๋าใหญ่เหลือเฟือ (Normal Case)
    // dest ยาว 5, src ยาว 5, พื้นที่ให้มา 15 -> ก๊อปปี้ได้ครบ
    char dest1[20] = "Hello";
    char src1[] = "World";
    unsigned int ret1 = ft_strlcat(dest1, src1, 15);
    printf("Case 1 (Normal)  : Return = %u | Result = '%s'\n", ret1, dest1);

    //Case 2: กระเป๋าเกือบเต็ม (โดนตัด src ทิ้งบางส่วน)
    // dest ยาว 5, ให้ size = 8 -> ใส่เพิ่มได้แค่ 2 ตัว (เว้น 1 ที่ให้ \0)
    char dest2[20] = "Hello";
    char src2[] = "World";
    unsigned int ret2 = ft_strlcat(dest2, src2, 8);
    printf("Case 2 (Cut)     : Return = %u | Result = '%s'\n", ret2, dest2);

    //Case 3: กระเป๋าเล็กกว่าของเดิม
    // dest ยาว 5 แต่บอก size = 3 -> ห้ามยุ่งกับ dest และคืนค่าประชด
    char dest3[20] = "Hello";
    char src3[] = "World";
    unsigned int ret3 = ft_strlcat(dest3, src3, 3);
    printf("Case 3 (Size < Dest): Return = %u  | Result = '%s'\n", ret3, dest3);

    //Case 4: ไม่ให้พื้นที่เลยแม้แต่นิดเดียว (size = 0)
    char dest4[20] = "Hello";
    char src4[] = "World";
    unsigned int ret4 = ft_strlcat(dest4, src4, 0);
    printf("Case 4 (Size 0)  : Return = %u  | Result = '%s'\n", ret4, dest4);

    //Case 5: ต้นทางไม่มีอะไรให้ก๊อป (src ว่างเปล่า)
    char dest5[20] = "Hello";
    char src5[] = "";
    unsigned int ret5 = ft_strlcat(dest5, src5, 10);
    printf("Case 5 (Empty src): Return = %u  | Result = '%s'\n", ret5, dest5);
}