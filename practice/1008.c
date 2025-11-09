#include <stdio.h>
#include <string.h>

int main()
{
	int d[26] = {'E', 'C', 'F', 'A', 'J', 'K', 'L', 'B', 'D', 'G', 'H', 'I', 'V', 'W', 'Z', 'Y', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'X'};
	int x[26] = {'e', 'r', 'w', 'q', 't', 'y', 'g', 'h', 'b', 'n', 'u', 'i', 'o', 'p', 's', 'j', 'k', 'd', 'l', 'f', 'a', 'z', 'x', 'c', 'v', 'm'};
		
	char str[1024];
	char a;
	while (scanf("%c",&a) != EOF){
		if (a=='#'){
			break;
		}
		
		int i;
		char sc;
		if ((int)a>=(int)'A' && (int)a<=(int)'Z'){	
			i = (int)a-(int)'A';
			sc = d[i];
		}else if((int)a>='a' && (int)a<='z'){
			i = (int)a-(int)'a';
			sc = x[i];
		}else{
			sc = a;
		}
		printf("%c",sc);
	}
	return 0;
}
