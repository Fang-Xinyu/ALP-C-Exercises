#include <stdio.h>

int main()
{
	char a[105],b[105];
	fgets(a,sizeof(a),stdin);
	
	int i,j=0;
	for (i=0;i<strlen(a);i++){
		if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
			b[j]=a[i];
			j++;
		}
	}
	b[j]='\0';
	printf("%s\n",b);

	return 0;
}
