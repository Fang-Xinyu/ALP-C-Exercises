# include <stdio.h>
# include <string.h>

int main()
{
	char a[100000],b[100000];
	while (scanf("%s %s",a,b) != EOF){
		if (strcmp(a,"0")==0 && strcmp(b,"0")==0){
			break;
		}
		int p=0;
		int len_a=strlen(a);
		int len_b=strlen(b);
		
		if (len_a<len_b){
			printf("No\n");
			continue;
		}else{
			int i=0,j=0;

			while (i<len_a){
				int va=a[i]-'A';
				int vb=b[j]-'A';
				if ((va+vb)==25){
					i++;
					j++;
				}else{
					i++;
				} 
			}				
			if (j==len_b){
				p=1;
			}
		}
		
		if (p==1){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;	
}

