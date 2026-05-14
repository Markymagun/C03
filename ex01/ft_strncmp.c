#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	int Diff;

	if(n == 0)
	{
		return(0);
	}
	while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		i++;
	}
	Diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	return(Diff);
}
int main(void)
{
	printf("Diff :%d\n", ft_strncmp("Hello","Hello", 5));
	printf("Diff :%d\n", ft_strncmp("Hello","HelZa", 3));
	printf("Diff :%d\n", ft_strncmp("Hello", "HelZa", 5));
	printf("Diff :%d\n", ft_strncmp("Hello", "World", 0));
	printf("Diff :%d\n", ft_strncmp("abc", "abc", 10));
	printf("Diff :%d\n", ft_strncmp("ab", "abc", 3));
	printf("Diff :%d\n", ft_strncmp("\200", "A", 1));
//ตัวเลขที่ตามหลัง \ มันจะถูกมองเป็น "เลขฐานแปด (Octal)"
//ต้องทำเป็นฐาน10
//มันคือการใช้ Escape Sequence 
// เพื่อสร้างตัวอักษรพิเศษจากการกำหนดรหัส ASCII โดยตรง
}
