#include <stdio.h>
#include <string.h>

int main() {
	char s[1001], t[1001];
	scanf("%s%s", s, t);
	int ans = -1;
	if (strlen(s) != strlen(t)) {
		printf("%d\n", ans);
		return 0;
	}

	int s_len = strlen(s);
	char ss[2001];
	memcpy(ss, s, s_len);
	memcpy(ss + s_len, s, s_len);
	ss[s_len * 2] = '\0';

	char *rot_s_left = ss + s_len;
	for (int i = 0; i < s_len; i++) {
		if (memcmp(t, rot_s_left, s_len) == 0) {
			ans = i;
			break;
		}
		rot_s_left--;
	}
	printf("%d\n", ans);
	return 0;
}
